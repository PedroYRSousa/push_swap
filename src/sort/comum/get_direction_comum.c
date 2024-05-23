/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_direction_comum.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:27:50 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 15:52:48 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	get_direction_comum(t_stack *stack, int value, char *action)
{
	char	found;
	int		count_ra;
	int		count_rra;

	found = FALSE;
	count_ra = 0;
	count_rra = 0;
	*action = COMMAND_R;
	while (stack)
	{
		if (stack->value == value)
			found = TRUE;
		if (!found)
			count_ra++;
		else
			count_rra++;
		stack = stack->next;
	}
	if (count_ra <= count_rra)
		return (count_ra);
	*action = COMMAND_RR;
	return (count_rra);
}
