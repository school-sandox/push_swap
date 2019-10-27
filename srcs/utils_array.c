/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:48:50 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 23:36:45 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

char	**str_arr_dup(char **str)
{
	char	**res;
	size_t	len;
	int		i;

	len = 0;
	while (str[len])
		len++;
	if (!(res = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = ft_strdup(str[i]);
		i++;
	}
	res[i] = NULL;
	return (res);
}

int		str_arr_len(char **array)
{
	int res;

	res = 0;
	while (array[res])
		res++;
	return (res);
}

void	str_arr_free(char **strs)
{
	int i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

void	validation_error(t_stack **a, char **nums)
{
	stack_free(a);
	str_arr_free(nums);
	write(2, "Error : invalid parameters!\n", 28);
	exit(1);
}

void	error(void)
{
	write(2, "Error!\n", 7);
	exit(1);
}
