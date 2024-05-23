/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:11:52 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:49:13 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (!stack)
		error("DEBUG: The Stack sent to push is null.");
	if (!(*stack) || !(*stack)->next)
		return ;
	last = get_last_node(*stack);
	last->prev->next = NULL;
	last->prev = NULL;
	push_stack(stack, last);
}
