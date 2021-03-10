/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:09:44 by taeskim           #+#    #+#             */
/*   Updated: 2021/03/09 15:14:02 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	int len;
	char **inputStr;

	len = 0;
	inputStr = line;
	while (fd > 0)
	{
		printf("%d\n",fd);
		printf("%c\n", **line);
	}
	return (len);	
}