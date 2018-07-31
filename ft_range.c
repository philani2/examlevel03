/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:48:31 by bgumede           #+#    #+#             */
/*   Updated: 2018/07/31 11:02:55 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int 	i;
	int		*rrange;

	i = 0;
	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		rrange = (int *)malloc(sizeof(int) * (end - start + 1));
	while (start != end)
	{
		rrange[i++] = end;
		end -= ((start > end) ? -1 : 1);
	}
	rrange[i] = end;
	return (rrange);
}

int		main()
{
	printf("%d\n", *ft_rrange(1, 3));
	return (0);
}
