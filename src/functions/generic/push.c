/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:11:52 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:49:11 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	push(t_stack **dest, t_stack **src)
{
	if (!dest)
		error("DEBUG: The Dest sent to push is null.");
	if (!src)
		error("DEBUG: The Src sent to push is null.");
	if (!(*src))
		return ;
	push_stack(dest, pop_stack(src));
}
