/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 02:36:34 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:53:06 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	rrr(void)
{
	reverse_rotate(get_stack_a_instance());
	reverse_rotate(get_stack_b_instance());
	ft_putendl_fd("rrr", 1);
}
