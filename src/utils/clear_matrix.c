/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:11:20 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:28:06 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	clear_matrix(void ***matrix)
{
	size_t	index;

	if (!matrix || !(*matrix) || !(**matrix))
		return ;
	index = 0;
	while ((*matrix)[index])
	{
		free((*matrix)[index]);
		index++;
	}
	free ((*matrix));
	(*matrix) = NULL;
}
