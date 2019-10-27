/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacgyve <jmacgyve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:11:55 by jmacgyve          #+#    #+#             */
/*   Updated: 2019/10/27 21:51:33 by jmacgyve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	swap(t_stack **stack)
{
	int temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = temp;
	}
}

void	sa(t_stack **a, t_stack **b, t_flags **flags)
{
	swap(a);
	if ((*flags)->v)
		print(*a, *b);
	if ((*flags)->c)
		((*flags)->nb)++;
}

void	sb(t_stack **a, t_stack **b, t_flags **flags)
{
	swap(b);
	if ((*flags)->v)
		print(*a, *b);
	if ((*flags)->c)
		((*flags)->nb)++;
}

void	ss(t_stack **a, t_stack **b, t_flags **flags)
{
	swap(a);
	swap(b);
	if ((*flags)->v)
		print(*a, *b);
	if ((*flags)->c)
		((*flags)->nb)++;
}
