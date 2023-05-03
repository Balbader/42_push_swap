/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_second_big_data.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 06:55:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/05/03 06:55:45 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_second_big_data(t_list **stack)
{
	t_list	*tmp;
	int		first_big;
	int		second_big;

	if (!stack)
		return (0);
	tmp = NULL;
	tmp = *stack;
	second_data = INT_MIN;
	i = 0;
	first_data = ft_find_first_big_data(stack);
	while (tmp)
	{
		if (tmp->data > second_data && tmp->data < first_data)
			second_data = tmp->data;
		++i;
		tmp = tmp->next;
	}
	return (second_data);
}
