/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_b_cost_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:53:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/03/25 15:53:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_init_b_cost_arr(t_list **a, t_list **b)
{
	int	*b_cost_arr;

	(void)b;
	b_cost_arr = ft_init_cost_arr(a);
	return (b_cost_arr);
}
