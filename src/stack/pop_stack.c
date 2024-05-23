/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:31:43 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:32:49 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*pop_stack(t_stack **stack)
{
	t_stack	*aux;

	if (!stack)
		error("DEBUG: The Stack sent to push_stack is null.");
	aux = (*stack);
	if ((*stack))
	{
		(*stack) = (*stack)->next;
		if ((*stack))
			(*stack)->prev = NULL;
	}
	aux->prev = NULL;
	aux->next = NULL;
	return (aux);
}
