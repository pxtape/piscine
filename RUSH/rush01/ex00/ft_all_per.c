/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_per.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:39:47 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/18 23:17:46 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	addposs(int tab[24][4], const int *value, int *ptr_poss)
{
	tab[*ptr_poss][0] = value[0];
	tab[*ptr_poss][1] = value[1];
	tab[*ptr_poss][2] = value[2];
	tab[*ptr_poss][3] = value[3];
	*ptr_poss += 1;
}

void	heapalgo(int tab[24][4], int t[], int n, int *ptr_poss)
{
	int	i;

	if (n == 1)
	{
		addposs(tab, t, ptr_poss);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			heapalgo(tab, t, n - 1, ptr_poss);
			if (n % 2 == 1)
				ft_swap(&t[0], &t[n - 1]);
			else
				ft_swap(&t[i], &t[n - 1]);
			i++;
		}
	}
}

void	all_permutation(int array[24][4])
{
	int	t[4];
	int	i;
	int	poss;

	poss = 0;
	i = 0;
	while (i < 4)
	{
		t[i] = i + 1;
		i++;
	}
	heapalgo(array, t, 4, &poss);
}
