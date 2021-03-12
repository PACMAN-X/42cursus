/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:09:44 by taeskim           #+#    #+#             */
/*   Updated: 2021/03/12 18:52:20 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	int len;
	char **inputStr;

	len = 0;
	inputStr = line;
	
	return (len);	
}

int main()
{
	int		j;
	char	*line = 0;
	int fd;

	fd = open("./test.txt", O_RDONLY);

	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
		j++;
	}
	free(line);
}