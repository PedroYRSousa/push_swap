/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:09:52 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/03 21:42:24 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

static char	is_valid(char *target, long long *number)
{
	char	is_negative;

	is_negative = ((*target) == '-');
	if (is_negative)
		target++;
	if (ft_strlen(target) > 10)
		return (FALSE);
	(*number) = 0;
	while ((*target))
	{
		if (!ft_isdigit((*target)))
			return (FALSE);
		(*number) *= 10;
		(*number) += (*target) - '0';
		target++;
	}
	if (is_negative)
		(*number) = -1 * (*number);
	if ((*number) < INT_SIZE_MIN || (*number) > INT_SIZE_MAX)
		return (FALSE);
	return (!contains_node(*get_stack_a_instance(), *number));
}

static void	scan_input(int argc, char **argv)
{
	long		index;
	long long	number;
	char		**split;

	while ((--argc) > 1)
	{
		index = 0;
		split = ft_split(argv[(argc - 1)], ' ');
		while (split[++index])
			;
		while (--index >= 0)
		{
			if (!is_valid(split[index], &number))
			{
				clear_matrix((void ***)&split);
				clear_stack(get_stack_a_instance());
				error(NULL);
			}
			push_stack(get_stack_a_instance(), create_node(number));
		}
		clear_matrix((void ***)&split);
	}
}

static void	start(size_t count)
{
	if (is_order_stack(*get_stack_a_instance()))
		return ;
	if (count <= 5)
		small_sort(count);
	else if (count <= 100)
		big_sort(count, MEDIAN_COUNT);
	else
		big_sort(count, BIG_COUNT);
}

int	main(int argc, char **argv)
{
	size_t	count;

	if (argc > 2)
	{
		scan_input(argc + 1, argv);
		count = size_stack(*get_stack_a_instance());
		if (count > 1)
			start(count);
	}
	clear_stack(get_stack_a_instance());
	clear_stack(get_stack_b_instance());
	return (0);
}
