/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_left_right.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:10:45 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:13:10 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left_rule(int row, int array[4][4], int **rule)
{
	int	count;
	int	i;
	int	temp;

	i = 0;
	count = 1;
	temp = array[row][0];
	while (i <= 3)
	{
		if (array[row][i] > temp)
		{
			count++;
			temp = array[row][i];
		}
		i++;
	}
	if (count != rule[2][row])
		return (0);
	return (1);
}

int	check_right_rule(int row, int array[4][4], int **rule)
{
	int	count;
	int	i;
	int	temp;

	i = 3;
	count = 1;
	temp = array[row][3];
	while (i >= 0)
	{
		if (array[row][i] > temp)
		{
			count++;
			temp = array[row][i];
		}
		i--;
	}
	if (count != rule[3][row])
		return (0);
	return (1);
}
