/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:45:16 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/23 10:40:32 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnonprinting(char c)
{
	if (c == '\n')
		write(1, "\\0a", 3);
	if (c == '\t')
		write(1, "\\09", 3);
	if (c == '\e')
		write(1, "\\07", 3);
	if (c == '\f')
		write(1, "\\0c", 3);
	if (c == '\r')
		write(1, "\\0d", 3);
	if (c == '\v')
		write(1, "\\0b", 3);
	if (c == '\a')
		write(1, "\\07", 3);
}

void	ft_print_hexd(char c)
{
	int a;
	int b;

	a = c / 16;
	a = a + '0';
	b = c % 16;
	if (b > 9)
		b = b + 87;
	else
		b = b + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			ft_print_hexd(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
