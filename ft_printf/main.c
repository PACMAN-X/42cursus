/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:51:44 by taeskim           #+#    #+#             */
/*   Updated: 2021/05/28 21:35:45 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	main()
{
	ft_printf("[💚% d]\n", 12);
	printf("[💚%    d]\n", 12);
	return (0);
}