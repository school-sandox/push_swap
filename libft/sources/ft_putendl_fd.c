/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:36:42 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 22:09:51 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}
