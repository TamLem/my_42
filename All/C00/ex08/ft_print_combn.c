/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:49:26 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/27 20:28:20 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int n)
{
	int zero_p;

	zero_p = (n % 10) + 48;
	write(1, &zero_p, 1);
}

int		*create_digits(void)
{
	static int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	return (digits);
}

void	ft_print_combn(int n)
{
	int i;
	int j;
	int k;
	int *digits;

	digits = create_digits();
	i = 0;
	while (i <= (10 - n))
	{
		j = i + 1;
		while (j <= (11 - n))
		{
			print_int(digits[i]);
			k = j;
			while ((k + 1) < (n + j))
			{
				print_int(digits[k]);
				k++;
			}
			j++;
			if (j <= (11 - n) || (i + 1) <= (10 - n))
				write(1, ", ", 2);
		}
		i++;
	}
}

