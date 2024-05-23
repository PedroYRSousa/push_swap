/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_best_way.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:00:15 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 19:00:55 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	get_best_way(t_stack *s_x, t_stack *s_y, t_stack *s, char *action)
{
	char	action_x;
	char	action_y;
	int		count_action_x;
	int		count_action_y;

	count_action_x = get_direction_comum(s, s_x->value, &action_x);
	count_action_y = get_direction_comum(s, s_y->value, &action_y);
	if (count_action_x <= count_action_y)
	{
		(*action) = action_x;
		return (count_action_x);
	}
	(*action) = action_y;
	return (count_action_y);
}
