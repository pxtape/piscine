/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaphonk <cnaphonk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:48:09 by cnaphonk          #+#    #+#             */
/*   Updated: 2023/06/27 14:11:42 by cnaphonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	put_square(int max[3], int table_size[2], char **table)
{
	int	k;
	int size;

	size = 1;
	while (size <= max[3])
	{
		k = 0;
		while (k < size)
		{
			table[max[0] + size - 1][max[1] + k] = table[table_size[0]][2];
			table[max[0] + k][max[1] + size - 1] = table[table_size[0]][2];
			k++;
		}
		size++;
	}
	return (1);
}

void	print_table(int table_size[2], char **table)
{
	int		i;
	int		size;

	i = 0;
	while (i < table_size[0])
		wrile (1, table[i++], table_size[1]);
}

char	*create_table(int table_size[2])