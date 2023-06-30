/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:00:50 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:20:48 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_create_array(void)
{
	int	**array;
	int	i;

	i = 0;
	array = (int **)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		array[i] = (int *)malloc(4 * sizeof(int));
		i++;
	}
	return (array);
}

int	**ft_get_argument(char *text)
{
	int	**array;
	int	i;
	int	j;

	array = ft_create_array();
	i = 0;
	j = 0;
	while (text[i])
	{
		if (j % 4 == 0)
			j = 0;
		if (i % 2 == 0)
		{
			array[i / 8][j] = text[i] - '0';
			j++;
		}
		i++;
	}
	return (array);
}
