/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:22:40 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/27 17:23:42 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 128

void	ft_read(char *filename)
{
	int		file;
	int		readbyte;
	char	buffer[BUFFER_SIZE];

	file = open(filename, O_RDONLY);
	if (file == -1)
		write(2, "Cannot read file.\n", 18);
	else
	{
		readbyte = read(file, buffer, BUFFER_SIZE);
		while (readbyte > 0)
		{
			write(1, buffer, BUFFER_SIZE);
			readbyte = read(file, buffer, BUFFER_SIZE);
		}
	}
	close(file);	
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_read(argv[1]);
	return (0);
}