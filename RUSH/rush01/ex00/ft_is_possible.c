/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_possible.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:53:03 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:29:32 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_repeated_top(int row, int array[4][4]);
int	check_left_rule(int row, int array[4][4], int **rule);
int	check_right_rule(int row, int array[4][4], int **rule);
int	check_top_rule(int row, int array[4][4], int **rule);
int	check_down_rule(int array[4][4], int **rule);

int	possible(int row, int array[4][4], int **rule)
{
	if (!check_repeated_top(row, array))
		return (0);
	if (!check_left_rule(row, array, rule))
		return (0);
	if (!check_right_rule(row, array, rule))
		return (0);
	if (row == 3 && !check_top_rule(row, array, rule))
		return (0);
	if (row == 3 && !check_down_rule(array, rule))
		return (0);
	return (1);
}
