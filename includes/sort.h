/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:09:34 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 19:03:16 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# ifndef COMMAND_R
#  define COMMAND_R 'r'
# endif

# ifndef COMMAND_RR
#  define COMMAND_RR 'R'
# endif

# ifndef MEDIAN_COUNT
#  define MEDIAN_COUNT 4
# endif

# ifndef BIG_COUNT
#  define BIG_COUNT 10
# endif

# include "functions.h"

typedef t_stack	t_darfts;

t_darfts	**create_darfts(size_t count, size_t size);
void		destroy_darfts(t_darfts **darfts, int size);

void		small_sort(size_t count);
void		three_sort(void);

void		big_sort(size_t count, size_t size);
t_stack		*find_last(t_darfts *darft);
t_stack		*find_first(t_darfts *darft);
int			get_best_way(t_stack *s_x, t_stack *s_y, t_stack *s, char *action);

int			get_direction_comum(t_stack *stack, int value, char *action);

#endif