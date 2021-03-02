/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:00:03 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/01 21:09:04 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *tmp;

    if (!(tmp = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}