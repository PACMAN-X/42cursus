/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:00:29 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/14 17:56:26 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validator_num(char *s)
{
	int i;

	i = 0;
	printf("11test\n");
	while (s[i++] || s[i] == 0)
		if (!(ft_isdigit(s[i])))
			return (0);
	
	return (i);
}