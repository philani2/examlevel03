/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 11:05:54 by bgumede           #+#    #+#             */
/*   Updated: 2018/07/31 11:18:21 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int		i;
	int		*range;

	i = 0;
	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end));
	else
		range = (int *)malloc(sizeof(int) * (end - start + 1));
	while (start != end)
	{
		range[i++] = start;
		start += ((start > end) ? -1 : 1);
	}
	range[i] = start;
	return (range);
}

int		main()
{
	printf("%d\n", *ft_range(1, 3));
	return (0);
}
