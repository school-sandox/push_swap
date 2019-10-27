/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:41:48 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:09:22 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*a;
	int		i;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return (NULL);
	if (!(a = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1))))
		return (NULL);
	while (s[i] != 0)
	{
		a[i] = f(s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
