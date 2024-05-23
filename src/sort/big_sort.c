/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:14:23 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 19:07:22 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static void	put_a_to_b(t_darfts *darft, size_t size)
{
	char	action;
	char	count_action;

	while (size)
	{
		count_action
			= get_best_way(
				find_first(darft),
				find_last(darft),
				*get_stack_a_instance(), &action);
		while (count_action)
		{
			if (action == COMMAND_R)
				ra();
			else
				rra();
			count_action--;
		}
		pb();
		size--;
	}
}

static void	order_a(t_darfts *darfts)
{
	t_darfts	*big;
	int			count_action;
	char		action;

	big = get_big_node(darfts);
	count_action
		= get_direction_comum(*get_stack_a_instance(), big->value, &action);
	if (action == COMMAND_RR)
		count_action--;
	while (count_action > 0)
	{
		if (action == COMMAND_R)
			ra();
		else
			rra();
		count_action--;
	}
	if (action == COMMAND_R)
		ra();
}

static void	move_a_and_b(char to_ra, char action, int count_action)
{
	if (to_ra)
	{
		if (action == COMMAND_R && count_action)
		{
			rr();
			count_action--;
		}
		else
			ra();
	}
	while (count_action)
	{
		if (action == COMMAND_R)
			rb();
		else
			rrb();
		count_action--;
	}
	pa();
}

static void	pass_b_to_a(void)
{
	char	to_ra;
	char	action;
	int		count_action;

	to_ra = FALSE;
	while (*get_stack_b_instance())
	{
		count_action
			= get_direction_comum(
				*get_stack_b_instance(),
				get_small_node(*get_stack_b_instance(), INT_SIZE_MIN)->value,
				&action);
		move_a_and_b(to_ra, action, count_action);
		to_ra = TRUE;
	}
	ra();
}

void	big_sort(size_t count, size_t size)
{
	size_t		index;
	t_darfts	**darfts;

	index = 0;
	darfts = create_darfts(count / size, size);
	while (index < size)
	{
		put_a_to_b(darfts[index], (count / size));
		if (index > 0 && index - 1 < size)
			order_a(darfts[index - 1]);
		pass_b_to_a();
		index++;
	}
	destroy_darfts(darfts, size);
	darfts = NULL;
}
