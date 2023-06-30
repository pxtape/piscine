/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_give_delete_row.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:42:34 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:25:47 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	all_permutation(int array[24][4]);

void	give_that_row(int row, int per, int sol[4][4])
{
	int	all_per[24][4];
	int	i;

	all_permutation(all_per);
	i = 0;
	while (i < 4)
	{
		sol[row][i] = all_per[per][i];
		i++;
	}
}
