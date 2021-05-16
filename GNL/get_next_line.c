/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/16 18:36:04 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char *back_up[OPEN_MAX];
	char buff[BUFFER_SIZE + 1];
	char *tmp;
	size_t offset;
	size_t read_size;
	size_t index;

	back_up[fd] = ft_strdup("");
	// 1. 예외 처리
	if (!line || read(fd, buff, 0))
		return (-1);
	// 2. back_up에 있는지 확인

	tmp = back_up[fd];

	offset = -1;
	while (tmp[++offset])
	{
		if (tmp[offset] == '\n')
		{
			/*✅ 2.1
			back_up의 offset에서 \n을 만남.
			line에 back_up의 값들을 복사.
			1을 반환.
			*/
			index = -1;
			*line = (char *)malloc(offset + 1);
			*line[offset] = 0;
			while (tmp[++index])
			{
				*line[index] = tmp[index];
				tmp[index] = tmp[offset + index + 1];
			}
			return (1);
		}
	}

	read_size = read(fd, buff, BUFFER_SIZE);

	while (read_size > 0)
	{
		index = -1;
		offset = -1;
		*line = (char *)malloc(read_size + 1);
		line[read_size] = 0;

		while (buff[++index])
			*line[index] = buff[index];

		back_up[fd] = ft_strjoin(back_up[fd], *line);
		tmp = back_up[fd];

		while (tmp[++offset])
		{
			if (tmp[offset] == '\n')
			{
				index = -1;
				*line = (char *)malloc(offset + 1);
				*line[offset] = 0;
				while (tmp[++index])
				{

					*line[index] = tmp[index];
					printf("✅index: %zu, offset: %c\n", index, tmp[offset + index + 1]);
					tmp[index] = tmp[offset + index + 1];
				}
				return (1);
			}
		}
		read_size = read(fd, buff, BUFFER_SIZE);
	}

	/*✅ 2.2
	back_up에 값은 있지만 \n으로 끝나지 않은 경우
	그렇다면 다시 읽는 작업이 필요함.
	*/

	// 3. read로 읽기

	return (0);
}
