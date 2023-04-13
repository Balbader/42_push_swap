/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_biggest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:04:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 13:04:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_biggest(t_list **a, t_list **b, int big_idx, int next_idx)
{
	ft_push_cheapest(a, b, big_idx);
	ft_push_cheapest(a, b, next_idx);
}
