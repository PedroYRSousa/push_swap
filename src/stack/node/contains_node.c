/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:41:13 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:38:22 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

char	contains_node(t_stack *stack, int number)
{
	while (stack)
	{
		if (stack->value == number)
			return (TRUE);
		stack = stack->next;
	}
	return (FALSE);
}
