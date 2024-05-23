/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:02:03 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 19:03:21 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

t_stack	*find_first(t_darfts *darft)
{
	t_stack	*stack;

	stack = *get_stack_a_instance();
	while (stack)
	{
		if (contains_node(darft, stack->value))
			return (stack);
		stack = stack->next;
	}
	return (stack);
}
