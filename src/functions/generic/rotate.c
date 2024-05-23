/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:11:52 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:49:15 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	rotate(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*last;

	if (!stack)
		error("DEBUG: The Stack sent to push is null.");
	if (!(*stack) || !(*stack)->next)
		return ;
	aux = pop_stack(stack);
	last = get_last_node(*stack);
	last->next = aux;
	aux->next = NULL;
	aux->prev = last;
}
