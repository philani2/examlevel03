/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:29:55 by bgumede           #+#    #+#             */
/*   Updated: 2018/07/31 10:37:08 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == ' ' || av[1][i] == '\t')
			j = 1;
		if (!(av[1][i] == ' ' || av[1][i] == '\t'))
		{
			if (j)
				write(1, " ", 1);
			j = 0;
			write (1, &av[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}