/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:05:03 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/27 10:35:40 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	start(char *filename);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (check_input(argv[i]))
		{
			start(argv[i]);
			return (0);
		}	
		else
			write(1, "map error\n", 10);
		i++;
	}
	return (0);
}

void	start(char *filename)
{
	char	**str;
	char	**table;
	int		table_size[2];
	int		max[3];

	str = read_file(filename);
	size_input(table_size,str);
	table = create_table(table_size);
	solve(max, table_size, table);
	put_square(max, table);
	print_table(table_size, table);
}