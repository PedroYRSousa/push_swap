/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:51:43 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 14:41:12 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*get_small_node(t_stack *stack, int ref)
{
	t_stack	*small;

	small = get_big_node(stack);
	while (stack)
	{
		if (stack->value < small->value && stack->value > ref)
			small = stack;
		stack = stack->next;
	}
	return (small);
}
