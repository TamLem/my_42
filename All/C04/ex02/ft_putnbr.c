/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:41:31 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/29 16:59:25 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		nb = 8;
	}
	if (nb < 0 && nb)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	if (nb <= 9)
		ft_putchar((nb % 10) + '0');
	if (nb > 9)
	{
		mod = (nb % 10) + '0';
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(mod);
	}
}
