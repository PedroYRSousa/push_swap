/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:09:34 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 06:48:46 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "stack.h"

void	push(t_stack **dest, t_stack **src);
void	pa(void);
void	pb(void);
void	swap(t_stack **stack);
void	sa(void);
void	sb(void);
void	ss(void);
void	rotate(t_stack **stack);
void	ra(void);
void	rb(void);
void	rr(void);
void	reverse_rotate(t_stack **stack);
void	rra(void);
void	rrb(void);
void	rrr(void);

#endif