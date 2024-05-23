/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 06:27:53 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 19:24:12 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	three_sort(void)
{
	t_stack	*big;
	t_stack	*small;

	if (is_order_stack(*get_stack_a_instance()))
		return ;
	small = get_small_node(*get_stack_a_instance(), INT_SIZE_MIN);
	big = get_big_node(*get_stack_a_instance());
	if (big->next != small)
		sa();
	if (big == *get_stack_a_instance())
		ra();
	if (small != *get_stack_a_instance())
		rra();
}
