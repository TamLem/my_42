/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:40:21 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/28 14:25:42 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int n)
{
	int zero_p;

	zero_p = (n % 10) + 48;
	write(1, &zero_p, 1);
}

void	ft_putnbr(int nbr)
{
	int d;

	if (nbr == -2147483648)
	{
		write(1, "-214748364", 11);
		nbr = 8;
	}
	if (nbr < 0 && nbr)
	{
		write(1, "-", 1);
		nbr = -1 * nbr;
	}
	if (nbr < 10)
		print_int(nbr);
	if (nbr > 9)
	{
		d = nbr % 10;
		nbr = nbr / 10;
		ft_putnbr(nbr);
		print_int(d);
	}
}

