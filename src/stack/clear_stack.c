/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:47:06 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:32:58 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	clear_stack(t_stack **stack)
{
	t_stack	*node;

	if (!stack)
		error("DEBUG: The Stack sent to clear_stack is null.");
	while ((*stack))
	{
		node = pop_stack(stack);
		destroy_node(&node);
	}
}
