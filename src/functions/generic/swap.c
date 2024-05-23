/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:11:52 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:49:17 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	swap(t_stack **stack)
{
	t_stack	*frist;
	t_stack	*second;

	if (!stack)
		error("DEBUG: The Stack sent to push is null.");
	if (!(*stack) || !(*stack)->next)
		return ;
	frist = pop_stack(stack);
	second = pop_stack(stack);
	push_stack(stack, frist);
	push_stack(stack, second);
}
