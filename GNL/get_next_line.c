/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:14:49 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/14 21:57:30 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	printf("This is fd : %d\n",fd);
	printf("This is line : %p\n",line);
	printf("This is *line : %p\n", *line);

	return (0);
}
