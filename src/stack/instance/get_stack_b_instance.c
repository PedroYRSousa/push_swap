/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack_b_instance.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:00:01 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:44:19 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	**get_stack_b_instance(void)
{
	static t_stack	*instance;

	return (&instance);
}
