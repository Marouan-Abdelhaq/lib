/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:20:04 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/03 19:05:55 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_l = NULL;
    t_list *new_e;
    while (lst)
    {
        new_e = ft_lstnew(f(lst->content));\
        if (!new_e)
        {
            ft_lstclear(&new_e, del);
            return (NULL);
        }
        ft_lstadd_back(&new_l, new_e);
        lst = lst->next;
    }
    return (new_l);
}
