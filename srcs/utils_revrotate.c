/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_revrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:08:17 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 21:51:20 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	revrotate(t_stack **stack)
{
	t_stack		*inc;
	int			prev_c;
	int			cur_c;

	if (*stack && (*stack)->next)
	{
		inc = *stack;
		prev_c = inc->content;
		while (inc->next)
		{
			cur_c = inc->next->content;
			inc->next->content = prev_c;
			prev_c = cur_c;
			inc = inc->next;
		}
		(*stack)->content = prev_c;
	}
}

void	rra(t_stack **a, t_stack **b, t_flags **flags)
{
	revrotate(a);
	if ((*flags)->v)
		print(*a, *b);
	if ((*flags)->c)
		((*flags)->nb)++;
}

void	rrb(t_stack **a, t_stack **b, t_flags **flags)
{
	revrotate(b);
	if ((*flags)->v)
		print(*a, *b);
	if ((*flags)->c)
		((*flags)->nb)++;
}

void	rrr(t_stack **a, t_stack **b, t_flags **flags)
{
	revrotate(a);
	revrotate(b);
	if ((*flags)->v)
		print(*a, *b);
	if ((*flags)->c)
		((*flags)->nb)++;
}
