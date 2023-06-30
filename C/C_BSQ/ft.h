/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:25:55 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/27 14:26:29 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdlib.h>
#include <unistd.h>

int		check_input(char *filename);
char	*read_file(char *filename);
void	*size_input(int table_size[2], char *str);

char	*create_table(int table_size[2]);
void	put_square(int max[2], int table_size[2], char **table);
void	print_table(int table_size[2], char **table);

void	solve(int max[2],int table_size[2],char **table);

int		ft_atoi(char *str);
char	*ft_strchr(char *str, char c);

#endif