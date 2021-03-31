/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:45:50 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/20 16:45:21 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_set(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if ((x + y + z) != 168)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int d1_start;
	int d2_start;
	int d[3];

	d[0] = 48;
	d[1] = 49;
	d[2] = 50;
	while (d[0] < 56)
	{
		d1_start = 49;
		while (d[1] < 57)
		{
			d2_start = 50;
			while (d[2] < 58)
			{	
				if(d[0] != d[1] && d[1]!= d[2] && d[0] != d[2])
					print_set(d[0], d[1], d[2]);
				d[2]++;
			}
			d[2] = ++d2_start;
			d[1]++;
		}
		d[1] = d1_start++;
		d[0]++;
	}
}
