/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:26:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/16 18:35:26 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	static char back_up[OPEN_MAX];
	char buff[BUFFER_SIZE + 1];
	size_t index;
	size_t offset;
	size_t read_size;

	offset = 0;
	// 1. 현재 상태가 유효한지 확인 validation 작업
	if (!line || read(fd, buff, 0))
	{
		return (-1);
	}

	// 2. back_up에 전달할 내용이 있다 없나 확인
	// 2.1 개행이 있는지 확인
	// 2.2 끝을 만났을 경우도 고려

	while (back_up[offset])
	{
		if (back_up[offset] == '\n')
		{
			// 2.3 line에 backup의 offset만큼만 대입.
			*line = (char *)malloc(offset + 1);
			*line[offset] = 0;
			index = 0;
			while (index < offset)
			{
				*line[index] = back_up[index];
				index++;
			}
			// backup은, line만큼 제거 (앞으로 당겨도 되고, 새로 만들어도 되고, 이건 마음대로)
			while (back_up[offset])
			{
				back_up[offset - index] = back_up[offset + 1];
				offset++;
			}
			return (1);
		}
		offset++;
	}

	// 3. 없으면 back_up을 만들기
	read_size = read(fd, buff, BUFFER_SIZE);
	buff[read_size] = 0;
	if (read_size >= 0)
	{
		back_up[0] = ft_strjoin(back_up, buff);
	}
}
