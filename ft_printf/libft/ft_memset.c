/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:00:21 by pac-man           #+#    #+#             */
/*   Updated: 2021/06/04 16:33:20 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, char c, int len)
{
	unsigned char *p;

	p = b;
	while (len-- > 0)
	{
		*p = c;
		p++;
	}
	return (b);
}
