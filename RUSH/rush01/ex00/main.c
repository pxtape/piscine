/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:45:12 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:22:50 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	recursive(int row, int per, int sol[4][4], int **rule);
int		ft_check_input(char *text);
int		**ft_get_argument(char *text);

int	main(int ac, char **av)
{
	int		**rule;
	int		i;
	int		sol[4][4];

	if (ac != 2 || !ft_check_input(av[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	rule = ft_get_argument(av[1]);
	recursive(0, 0, sol, rule);
	i = 0;
	while (i < 4)
	{
		free(rule[i]);
		i++;
	}
	free(rule);
}
