/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:51:44 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/04 17:19:46 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	main()
{
	// ft_printf("[%+++ 4d]\n", 10);
	// printf("[%+++ 4d]\n", 10);
	// printf("✅%d\n", printf("[%+++ 4d]\n", 10));
	// printf("[%+++ 4d]\n", -10);
	// ft_printf("[% 05.-0000000006d]\n", 10);
	// printf("[% 05.-0000000006d]\n", 10);
	// ft_printf("[💚%dqwerqwerqwerqwerd        %i %c %u %d %s]\n", 100, 77777, 'a', 8888, 99999, "abc");
	// printf("[💚%dqwerqwerqwerqwerd        %i %c %u %d %s]\n", 100, 77777, 'a', 8888, 99999, "abc");
	// printf("[💚%005d   ]\n", 12);
	// printf("[💚%005d   ]\n", 12);
	// ft_printf("[%*d]\n", 12, -123456789);
	// printf("[%*d]\n", 12, -123456789);
	// ft_printf("[%10.10d]", 123456);
	ft_printf("[%0+-5d]\n", -10);
	printf("[%0+-5d]\n", -10);
	ft_printf("[% 0+-5d]\n", 10);
	printf("[% 0+-5d]\n", 10);
	ft_printf("[%+-5d]\n", 10);
	printf("[%+-5d]\n", 10);
	ft_printf("[% +-5d]\n", 10);
	printf("[% +-5d]\n", 10);
	ft_printf("[%-5d]\n", 10);
	printf("[%-5d]\n", 10);
	ft_printf("[% -5d]\n", 10);
	printf("[% -5d]\n", 10);
	ft_printf("[%0-5d]\n", 10);
	printf("[%0-5d]\n", 10);
	ft_printf("[% 0-5d]\n", 10);
	printf("[% 0-5d]\n", 10);
	ft_printf("======================\n");
	printf("======================\n");
	ft_printf("[%0+5d]\n", 10);
	printf("[%0+5d]\n", 10);
	ft_printf("[% 0+5d]\n", 10);
	printf("[% 0+5d]\n", 10);
	ft_printf("[%+5d]\n", 10);
	printf("[%+5d]\n", 10);
	ft_printf("[% +5d]\n", 10);
	printf("[% +5d]\n", 10);
	ft_printf("[%5d]\n", 10);
	printf("[%5d]\n", 10);
	ft_printf("[% 5d]\n", 10);
	printf("[% 5d]\n", 10);
	ft_printf("[%05d]\n", 10);
	printf("[%05d]\n", 10);
	ft_printf("[% 05d]\n", 10);
	printf("[% 05d]\n", 10);
	ft_printf("@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	ft_printf("[%0+-5.6d]\n", 10);
	printf("[%0+-5.6d]\n", 10);
	ft_printf("[% 0+-5.6d]\n", 10);
	printf("[% 0+-5.6d]\n", 10);
	ft_printf("[%+-5.6d]\n", 10);
	printf("[%+-5.6d]\n", 10);
	ft_printf("[% +-5.6d]\n", 10);
	printf("[% +-5.6d]\n", 10);
	ft_printf("[%-5.6d]\n", 10);
	printf("[%-5.6d]\n", 10);
	ft_printf("[% -5.6d]\n", 10);
	printf("[% -5.6d]\n", 10);
	ft_printf("[%0-5.6d]\n", 10);
	printf("[%0-5.6d]\n", 10);
	ft_printf("[% 0-5.6d]\n", 10);
	printf("[% 0-5.6d]\n", 10);
	ft_printf("======================\n");
	printf("======================\n");
	ft_printf("[%0+5.6d]\n", 10);
	printf("[%0+5.6d]\n", 10);
	ft_printf("[% 0+5.6d]\n", 10);
	printf("[% 0+5.6d]\n", 10);
	ft_printf("[%+5.6d]\n", 10);
	printf("[%+5.6d]\n", 10);
	ft_printf("[% +5.6d]\n", 10);
	printf("[% +5.6d]\n", 10);
	ft_printf("[%5.6d]\n", 10);
	printf("[%5.6d]\n", 10);
	ft_printf("[% 5.6d]\n", 10);
	printf("[% 5.6d]\n", 10);
	ft_printf("[%05.6d]\n", 10);
	printf("[%05.6d]\n", 10);
	ft_printf("[% 05.6d]\n", 10);
	printf("[% 05.6d]\n", 10);
	// ft_printf("[%+ 10.4d]", 10);
	// ft_printf("[%0+10.4d]", 10); // precision이 있는 경우에는 0은 무시된다.
	// ft_printf("[% -4.4d]", 10);
	// ft_printf("[%4.5d]", 10);
	// printf("[%+d]", 10);
	return (0);
}
