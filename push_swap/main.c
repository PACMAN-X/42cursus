/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:27:43 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/15 10:41:17 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int i;
	int n;

	i = 0;
	n = 0;
	// 1.1 입력된 인자의 갯수만큼 쭉 돌기
	while (argc > i++ && argv[i])
	{
		n = validator_num(argv[i]);
		if (!n)
		{
			printf("ERROR\n"); 
			exit(0);
		}
	}
	
	return(1);
}