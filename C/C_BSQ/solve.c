/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:36:04 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/27 10:49:32 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	possible(int size, int index[2], int table_size[2], char **table)
{
	int	k;

	k = 0;
	if (index[0] + size > table_size[0] || index[1] + size > table_size[1])
		return (0);
	while (k < size)
	{
		if (table[index[0] + size - 1][index[1] + k] == table[table_size[0]][1])
			return (0);
		if (table[index[0] + k][index[1] + size - 1] == table[table_size[0]][1])
			return (0);
		k++;
	}
	return (1);
}

int	biggest(int size, int index[2], int table_size[2], char **table)
{
	if (possible(size, index, table_size, table))
		return (biggest(size + 1, index, table_size, table));
	return (size - 1);
}

void	solve(int max[3], int table_size[2], char **table)
{
	int	index[2];
	int temp;

	index[0] = 0;
	index[1] = 0;
	max[2] = 0;
	while (index[0] < table_size[0])
	{
		while (index[1] < table_size[1])
		{
			temp = biggest(1, index, table_size, table);
			if (temp > max[2])
			{
				max[0] = index[0];
				max[1] = index[1];
				max[2] = temp;
			}
			index[1]++;
		}
		index[0]++;
	} 
}
