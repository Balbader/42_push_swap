/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:40:49 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 12:40:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_from_b_to_a(t_list **a, t_list **b)
{
	int	big_idx;
	int	next_idx;
	int	cost;
	int	b_size;
	int	i;

	b_size = ft_get_stack_size(b);
	i = 0;
	while (i < b_size)
	{
		big_idx= ft_find_biggest_node_idx(b);
		next_idx = ft_find_next_biggest_node_idx(b);
		cost = ft_big_or_next(big_idx, next_idx, b);
		if (cost == 1)
			ft_push_biggest(a, b, big_idx, next_idx);
		if (cost == 2)
			ft_push_next_biggest(a, b, next_idx, big_idx);
	}
}
