/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:31:43 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:32:47 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push_stack(t_stack **stack, t_stack *node)
{
	if (!stack)
		error("DEBUG: The Stack sent to push_stack is null.");
	if ((*stack))
	{
		node->next = (*stack);
		(*stack)->prev = node;
	}
	(*stack) = node;
}
