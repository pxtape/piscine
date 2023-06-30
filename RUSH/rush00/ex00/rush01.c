/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:27:59 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/11 18:15:00 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int x, char left, char mid, char right)
{
	int	n_mid;

	n_mid = x - 2;
	if (x == 1)
	{
		ft_putchar(left);
	}
	else
	{
		ft_putchar(left);
		while (n_mid > 0)
		{
			ft_putchar(mid);
			n_mid--;
		}
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((y > 0) && (x > 0))
	{
		ft_print_line(x, '/', '*', '\\');
		if (y >= 2)
		{
			while (y > 2)
			{
				ft_print_line(x, '*', ' ', '*');
				y--;
			}
			ft_print_line(x, '\\', '*', '/');
		}
	}
}
