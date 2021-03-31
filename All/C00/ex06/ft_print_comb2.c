/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:42:39 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/20 12:24:51 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int n)
{
	int zero_p;
	int one_p;

	zero_p = (n % 10) + 48;
	one_p = (n / 10) + 48;
	write(1, &one_p, 1);
	write(1, &zero_p, 1);
}

void	print_set(int n1, int n2)
{
	print_int(n1);
	write(1, " ", 1);
	print_int(n2);
	if ((n1 + n2) != 197)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int arr[2];
	int counter[2];

	arr[0] = 00;
	arr[1] = 01;
	counter[0] = 0;
	counter[1] = 0;
	while (counter[0] < 99)
	{
		while (counter[1] < 99)
		{
			print_set(arr[0], arr[1]);
			if (arr[1] >= 99)
				break ;
			arr[1]++;
			counter[1]++;
		}
		arr[0]++;
		arr[1] = arr[0] + 1;
		counter[1] = 0;
		counter[0]++;
	}
}
