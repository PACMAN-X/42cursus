/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 22:27:49 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/01 23:33:52 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlst;
    t_list *buf;
    t_list *tmp;

    newlst = NULL;
	buf = NULL;
	tmp = NULL;
    if ( !lst || !f || !del || !(newlst = ft_lstnew(f(lst->content))))
        return (NULL);
    buf = newlst;
    lst = lst->next;
    while (lst)
    {
        if (!(tmp = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&newlst, del);
            return (NULL);
        }
        buf->next = tmp;
        buf = tmp;
        lst = lst->next;
    }
    return (newlst);
}