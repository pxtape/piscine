/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_top_down.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:41:15 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:15:25 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_repeated_top(int row, int array[4][4])
{
	int	col;
	int	k;

	col = 0;
	k = 1;
	while (row - k >= 0)
	{
		col = 0;
		while (col <= 3)
		{
			if (array[row - k][col] == array[row][col])
				return (0);
			col++;
		}
		k++;
	}
	return (1);
}

int	check_top_rule(int row, int array[4][4], int **rule)
{
	int	col;
	int	k;
	int	count;
	int	temp;

	col = 0;
	while (col < 4)
	{
		temp = array[0][col];
		count = 1;
		k = 1;
		while (k <= row)
		{
			if (array[k][col] >= temp)
			{
				count++;
				temp = array[k][col];
			}
			k++;
		}
		if (count != rule[0][col])
			return (0);
		col ++;
	}
	return (1);
}

int	check_down_rule(int array[4][4], int **rule)
{	
	int	col;
	int	k;
	int	count;
	int	temp;

	col = 0;
	while (col < 4)
	{
		temp = array[3][col];
		count = 1;
		k = 3;
		while (k >= 0)
		{
			if (array[k][col] > temp)
			{
				temp = array[k][col];
				count++;
			}
			k--;
		}
		if (count != rule[1][col])
			return (0);
		col++;
	}
	return (1);
}
