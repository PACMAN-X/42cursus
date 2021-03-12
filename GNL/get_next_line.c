/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimtaeseon <kimtaeseon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:14:49 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/12 19:15:29 by kimtaeseon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	int fdInput;
	char **lineInput;

	return (0);
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