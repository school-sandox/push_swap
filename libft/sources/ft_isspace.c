/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:37:24 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:10:18 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return (c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f' ||
			c == '\r' ||
			c == ' ');
}
