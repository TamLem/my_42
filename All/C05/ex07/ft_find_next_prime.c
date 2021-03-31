/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 09:05:23 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/31 14:08:28 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1 || nb > 2147483647)
		return (0);
	if (nb <= 3 || nb == 2147483647)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 4;
	while (i < (nb / 3))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
