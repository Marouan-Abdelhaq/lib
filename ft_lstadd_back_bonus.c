/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:16:15 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/04 14:19:22 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (new == NULL)
    {
        return;
    }
    new->next = NULL;
    if (*lst == NULL) 
    {
        *lst = new;
    }
    else{
        t_list *ptr = ft_lstlast(*lst);
        ptr->next = new;
    }
}
