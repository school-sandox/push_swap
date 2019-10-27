/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:40:10 by sstannis          #+#    #+#             */
/*   Updated: 2019/10/27 22:09:41 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_sqrt(size_t nb)
{
	size_t c;

	c = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		while (c < nb)
		{
			if (c * c == nb)
				return (c);
			c++;
		}
	}
	return (0);
}
