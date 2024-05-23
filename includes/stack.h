/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:44:56 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 13:01:58 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "utils.h"

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				value;
}	t_stack;

t_stack	*create_node(int value);
void	destroy_node(t_stack **node);
t_stack	*get_big_node(t_stack *stack);
t_stack	*get_last_node(t_stack *stack);
t_stack	*get_small_node(t_stack *stack, int ref);
char	contains_node(t_stack *stack, int number);

size_t	size_stack(t_stack *stack);
void	show_stack(t_stack *stack);
t_stack	*pop_stack(t_stack **stack);
void	clear_stack(t_stack **stack);
char	is_order_stack(t_stack *stack);
void	push_stack(t_stack **stack, t_stack *node);

t_stack	**get_stack_a_instance(void);
t_stack	**get_stack_b_instance(void);

#endif