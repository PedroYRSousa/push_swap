/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 03:09:10 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:37:31 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

size_t	size_stack(t_stack *stack)
{
	size_t	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}
