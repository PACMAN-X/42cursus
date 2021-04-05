/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:14:49 by kimtaeseon        #+#    #+#             */
/*   Updated: 2021/03/15 15:30:26 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	// 한줄이 읽혔으면 1을 반환
	// EOF 이면 0을 반환
	// ERROR 이면 -1을 반환

	// fd 파일 디스크립터는 커널을 토해 관린?

	// int returnValue;
	// int buff[BUFFER_SIZE];
	
	// // printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");
	// // printf("this is the fd: %d \n", fd);
	// printf("this is the **line :%p \n", line);
	// // printf("this is the BUFFER_SIZE: %d \n", BUFFER_SIZE);
	// // printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n");


	// if (fd == -1)
	// {
	// 	printf("Something wrong in here");
	// 	return (-1);
	// }
	// else 
	// {
	// 	if ((returnValue = read(fd, buff, sizeof(buff))) > 0)
	// 	{
	// 		printf("this is the returnValue : %d \n", returnValue);
	// 		printf("this is the BUFFER_SIZE : %d \n", BUFFER_SIZE);
	// 	}
		
	// }

	// return(returnValue);

	// // char **buff[100000];
	// // // int provided_buff; 
	// // ssize_t returnread;
	// // char *buffsize;
	
	// // buffsize = getenv("BUFFER_SIZE");

	// // printf("this is the fd : %d \n",fd);
	// // printf("this is the line : %p \n",line);
	// // printf("this is the *line : %p \n",*line);
	// // // printf("this is the *line : %c \n",**line);
	// // returnread = read(fd, buff, 100000);

	// // printf("this is return read value : %zd \n", returnread);
	// // // printf("This is the provided buff : %d \n", provided_buff);
	// // printf("this is the buffer_size, %p \n", getenv("BUFFER_SIZE"));
	// // printf("this is the buffsize %p \n", buffsize);
}
