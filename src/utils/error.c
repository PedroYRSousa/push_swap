/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 07:29:41 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:28:09 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utils.h"

void	error(char *msg)
{
	if (!msg)
		ft_putendl_fd("Error", 2);
	else
		ft_putendl_fd(msg, 2);
	exit(EXIT_SUCCESS);
}
