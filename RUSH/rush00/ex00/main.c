/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:08:09 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/12 18:15:57 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_get_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
	{
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = ft_get_sign(str, &i);
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (sign * result);
}

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (argc != 3)
		return (0);
	rush(x, y);
	return (0);
}
