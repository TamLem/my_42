/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 09:58:45 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/29 16:46:25 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexd(int n)
{
	int	num;

	num = 0;
	if (n < 10)
	{
		num = n + 48;
		write(1, &num, 1);
	}
	else
	{
		num = n + 87;
		write(1, &num, 1);
	}
}

long	ft_power(int n, int p)
{
	int		i;
	long	result;

	i = 0;
	result = 1;
	while (i < p)
	{
		result *= n;
		i++;
	}
	return (result);
}

void	ft_put_hexd(long nbr, int base)
{
	int d;
	int symbol;

	symbol = 0;
	if (base == 15)
		symbol = 1;
	while (base > 0)
	{
		d = nbr / ft_power(16, base);
		nbr = nbr % ft_power(16, base);
		ft_print_hexd(d);
		base--;
	}
	ft_print_hexd(nbr);
	if (symbol)
	{
		write(1, ": ", 2);
	}
}

void	print_str(char *ptr, int i)
{
	int j;

	while (i < 16)
	{
		write(1, " ", 1);
		i++;
	}
	j = 0;
	while (ptr[j] != '\0' && j < 16)
	{
		write(1, &(ptr[j]), 1);
		j++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*ptr;

	ptr = addr;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (i % 16 == 0)
		{
			if (i != 0)
			{
				print_str(ptr, 16);
				ptr += 16;
				i = 0;
			}
			ft_put_hexd((long)ptr, 15);
		}
		ft_put_hexd((int)ptr[i], 1);
		ft_put_hexd((int)ptr[i + 1], 1);
		write(1, " ", 1);
		i += 2;
	}
	print_str(ptr, i);
	return (addr);
}
