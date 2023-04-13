/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_next_biggest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:04:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/04/13 13:04:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_next_biggest(t_list **a, t_list **b, int next_idx, int big_idx)
{
	ft_push_cheapest(a, b, next_idx);
	ft_push_cheapest(a, b, big_idx);
}
