/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_darfts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:50:14 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 18:30:30 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static void	add_draft(t_darfts **darft, size_t *count, int value)
{
	if (!contains_node(*darft, value))
	{
		(*count)--;
		push_stack(darft, create_node(value));
	}
}

static void	search_number(t_darfts **darft, size_t count, int ref_init)
{
	t_stack	*big;
	t_stack	*small;

	(*darft) = NULL;
	big = get_big_node(*get_stack_a_instance());
	small = get_small_node(*get_stack_a_instance(), ref_init);
	add_draft(darft, &count, small->value);
	while (count > 0)
	{
		small = get_small_node(*get_stack_a_instance(), small->value);
		add_draft(darft, &count, small->value);
		if (small == big)
			break ;
	}
}

t_darfts	**create_darfts(size_t count, size_t size)
{
	size_t		index;
	int			ref_init;
	t_darfts	**darfts;

	index = 0;
	ref_init = INT_SIZE_MIN;
	darfts = (t_darfts **)ft_calloc(size, sizeof(t_darfts *));
	while (index < size)
	{
		if (index != size - 1)
			search_number(&darfts[index], count, ref_init);
		else
			search_number(&darfts[index], INT_SIZE_MAX, ref_init);
		ref_init = (darfts[index][0]).value;
		index++;
	}
	return (darfts);
}
