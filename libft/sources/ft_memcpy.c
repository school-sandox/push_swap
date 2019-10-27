/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:35:03 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:10:00 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	a = (char*)dst;
	b = (char*)src;
	i = 0;
	while (n--)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
