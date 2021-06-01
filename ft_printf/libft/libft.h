/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:32:05 by taeskim           #+#    #+#             */
/*   Updated: 2021/06/01 22:07:44 by taeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

int		ft_isdigit(int c);
int		ft_isalpha(int c);
void	ft_putchar(const char *c);
char	*ft_itoa(int num);

#endif
