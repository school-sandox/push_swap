/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:34:07 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:10:04 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		a[i] = b[i];
		if (b[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
