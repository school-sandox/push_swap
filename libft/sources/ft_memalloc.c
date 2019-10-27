/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:28:35 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:10:05 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*a;
	int		i;

	i = 0;
	if (!(a = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (size--)
	{
		a[i] = 0;
		i++;
	}
	return ((void*)a);
}
