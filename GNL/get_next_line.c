/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:14:00 by pac-man           #+#    #+#             */
/*   Updated: 2021/04/08 15:54:23 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/* 1.1
	한문장을 읽는다.
	여기서 buff에 저장되는 것이지 반환하는 것은 아니다.
	반환값은 state에 대한 값을 전달한다.
	한 문장을 잘 읽었는지(1), 다 읽었는지(0), 오류가 발생했는지(-1)
*/

int get_next_line(int fd, char **line)
{
	/* 1.2
	문장을 읽어야 한다. 읽기 위해선는 read 함수에 대한 학습이 필요하다.
	read 함수는 
	아래와 같은 프로토타입을 가진다.
	    ssize_t read(int fd, void *buf, size_t count);
	각각의 의미를 살펴보자.
	1. ssize_t(signed size_t )
		It represents the size of any object in bytes and returned by sizeof operator
	2. fd(fileDescriptor)
		파일에 접근하거나 다른 Input, Output 리소스에 접근하기 위해 사용되는 추상화된 indicator이다.
		즉, 전달받은 fd에는 open이라는 함수에 의해 열려있는 파일에 접근할 수 있다.
	3. buf
		읽어드린 문장을 저장하는 곳, 반환값이 void인 이유는 어떤 타입이 들어올지 모르기 때문(Int, Char)
		최대치를 생각해서 buf의 사이즈를 정해 놓는 것이 더욱 적절해 보인다.
	4. count
		읽어드린 단어의 갯수
		이는 gcc compile과정에서 BUFFER_SIZE라는 환경변수의 이름으로 전달 된다. 
	5. return value
		읽어드린 byte수가 반환된다. 
	*/

/* 1.3
	Q.
	- 저장하게 되는 데이터 타입은 무엇일까?
		- char type (문자열로 저장)
	- 크기는 어떻게 해야 하나?
		- 4096크기(4kb)
	- 컴파일 과정에서 전달받는 BUFFER_SIZE 값은 어떻게 가져올 것인가?
		- 전처리기를 통해 가져 올 수 있다.
	- 언제 해당 메모리를 free 해줄 것인가?
		- 읽어들인 문장에 대한 것이 끝나면?
	- 문장이 아직 남아 있는지는 어떻게 확인할 것인가?
		- read 함수에서 진행 EOF에 0을 반환
*/

/* 1.3
	읽어드린 값을 buf에 담게 된다. 4096(4kb)라는 값에 대해서는 get_next_line.h에 주석으로 정리해 놓았다. 
	원문을 참고 하기 바란다.
*/
	char	*buf;
	int state;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	state = read(fd, buf, BUFFER_SIZE);
	/* 1.6 BUFFER_SIZE
		해당하는 값을 전처리기를 통해서 잘 들어오는지 확인할 수 있었다.
	*/
	printf("===============start============================\n");
	printf("this is the reade value: %d \n", state);
	printf("this is the read char : %c\n", *buf);
	printf("===============end============================\n");
	// while (readValue > 0)
	// {
	// 	printf("this is the sentence : %c\n", *buf);
		printf("this is the **line : %p\n", line);
	// 	return (1);
	// }
	free(buf);
	
	return (0);
}
