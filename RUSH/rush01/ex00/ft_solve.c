/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:13:39 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:17:34 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_array(int sol[4][4]);
int		possible(int row, int sol[4][4], int **rule);
void	give_that_row(int row, int per, int sol[4][4]);

void	recursive(int row, int per, int sol[4][4], int **rule)
{
	if (row <= 3)
	{
		while (per <= 23)
		{
			give_that_row(row, per, sol);
			if (possible(row, sol, rule))
			{
				if (row == 3)
				{
					print_array(sol);
					return ;
				}
				recursive(row + 1, 0, sol, rule);
			}
			per++;
		}
	}
}
