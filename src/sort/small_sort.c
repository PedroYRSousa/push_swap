/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 03:03:48 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 19:46:05 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static t_stack	*get_floor(int target)
{
	t_stack	*big_diff;
	t_stack	*small_diff;
	t_stack	*aux;

	big_diff = NULL;
	small_diff = NULL;
	aux = *get_stack_a_instance();
	while (aux)
	{
		if (aux->value > target)
		{
			if (!big_diff || big_diff->value > aux->value)
				big_diff = aux;
		}
		else
		{
			if (!small_diff || small_diff->value > aux->value)
				small_diff = aux;
		}
		aux = aux->next;
	}
	if (big_diff)
		return (big_diff);
	return (small_diff);
}

static char	move_a(void)
{
	t_stack	*floor;
	char	action;
	int		count_action;

	floor = get_floor((*get_stack_b_instance())->value);
	if (!floor)
		return (TRUE);
	count_action
		= get_direction_comum(*get_stack_a_instance(), floor->value, &action);
	while (count_action)
	{
		if (action == COMMAND_R)
			ra();
		else
			rra();
		count_action--;
	}
	return (FALSE);
}

static void	fill_a(void)
{
	char	is_last;

	while (*get_stack_b_instance())
	{
		is_last = move_a();
		pa();
		if (is_last)
			ra();
	}
}

void	small_sort(size_t count)
{
	while (count > 3)
	{
		pb();
		count--;
	}
	three_sort();
	fill_a();
	while (!is_order_stack(*get_stack_a_instance()))
		ra();
}
