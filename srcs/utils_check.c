/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:24:09 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 23:59:10 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

int		check_stack_sort(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int		number_validation(long long int nb, t_stack *t, t_stack *a)
{
	t_stack	*temp;

	temp = t;
	if (nb > 2147483647 || nb < -2147483648)
		return (0);
	while (temp != a)
	{
		if (temp->content == (int)nb)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int		int_array_validation(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j])))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		read_flags(char **str, t_flags **flags)
{
	if (!(*flags))
	{
		if (!((*flags) = (t_flags *)malloc(sizeof(t_flags))))
			err();
		(*flags)->c = 0;
		(*flags)->v = 0;
		if (ft_strcmp(str[1], "-t") == 0)
		{
			(*flags)->c = 1;
			(*flags)->nb = 0;
		}
		if (ft_strcmp(str[1], "-v") == 0)
			(*flags)->v = 1;
		if (str[2])
		{
			if (ft_strcmp(str[2], "-t") == 0 && (*flags)->c == 0)
			{
				(*flags)->c = 1;
				(*flags)->nb = 0;
			}
			if (ft_strcmp(str[2], "-v") == 0 && (*flags)->v == 0)
				(*flags)->v = 1;
		}
	}
	return ((*flags)->v + (*flags)->c);
}
