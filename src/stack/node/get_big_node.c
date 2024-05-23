/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_big_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:51:43 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:33:36 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*get_big_node(t_stack *stack)
{
	t_stack	*big;

	big = stack;
	while (stack)
	{
		if (stack->value > big->value)
			big = stack;
		stack = stack->next;
	}
	return (big);
}
