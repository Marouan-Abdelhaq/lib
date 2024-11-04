/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:21:03 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/03 15:48:29 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new_content = malloc(sizeof(t_list));
    if (!new_content)
        return (NULL);
    new_content->content = content;
    new_content->next = NULL;
    return (new_content);
}