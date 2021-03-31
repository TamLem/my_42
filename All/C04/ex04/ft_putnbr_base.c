/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:06:21 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/30 15:50:37 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		checkinput(char *str)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int mod;
	int blen;

	if (checkinput(base))
	{
		blen = ft_strlen(base);
		if (nb == -2147483648)
			ft_putnbr_base(-214748364, base);
		if (nb == -2147483648)
			nb = 8;
		if (nb < 0 && nb)
		{
			ft_putchar('-');
			nb = -1 * nb;
		}
		if (nb < blen)
			ft_putchar(base[nb]);
		if (nb >= blen)
		{
			mod = (nb % blen);
			nb = nb / blen;
			ft_putnbr_base(nb, base);
			ft_putchar(base[mod]);
		}
	}
}
