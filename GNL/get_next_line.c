/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:14:00 by pac-man           #+#    #+#             */
/*   Updated: 2021/04/05 16:14:02 by pac-man          ###   ########.fr       */
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
