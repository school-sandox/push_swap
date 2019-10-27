/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:13:39 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:08:46 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordcount(char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str == c)
	{
		str++;
	}
	while (*str)
	{
		while (*str != c && *str != '\0')
		{
			str++;
		}
		while (*str == c)
		{
			str++;
		}
		count++;
	}
	return (count);
}
