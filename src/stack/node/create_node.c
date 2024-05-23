/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:28:37 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:33:32 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*create_node(int value)
{
	t_stack	*node;

	node = (t_stack *)ft_calloc(1, sizeof(t_stack));
	node->next = NULL;
	node->prev = NULL;
	node->value = value;
	return (node);
}
