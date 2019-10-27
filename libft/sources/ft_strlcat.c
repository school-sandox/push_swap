/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:41:16 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:09:27 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t sdst;
	size_t ssrc;
	size_t i;
	size_t min;

	i = 0;
	sdst = ft_strlen(dst);
	ssrc = ft_strlen(src);
	if (sdst < size)
		min = sdst;
	else
		min = size;
	while (size > (sdst + 1))
	{
		dst[sdst + i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
		size--;
	}
	dst[sdst + i] = 0;
	return (ssrc + min);
}
