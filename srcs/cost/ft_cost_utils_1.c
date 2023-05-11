/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:01:47 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/11 13:01:48 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the idx of the a_node to bring to top of a_stack based on incoming
 * b_node_pos that is greater and closest to incoming b_node_pos
*/

int	ft_get_big_bro_idx(t_list **a, int *a_pos, int incoming_pos)
{
	int	big_bro_idx;
	int	closest;
	int	a_size;
	int	i;

	a_size = ft_get_stack_size(a);
	big_bro_idx = 0;
	i = 0;
	while (i < a_size)
	{
		closest = a_pos[i] - incoming_pos;
		if (closest < 0)
			closest *= -1;
		if (a_pos[i] - incoming_pos < closest)
		{
			closest = a_pos[i];
			big_bro_idx = (*a)->index;
		}
		(*a) = (*a)->next;
		++i;
	}
	return (big_bro_idx);
}
