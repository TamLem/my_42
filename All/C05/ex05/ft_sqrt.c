/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:06:17 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/31 09:08:14 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	absv(float n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

int		ft_sqrt(int nb)
{
	float gs;
	float root;
	float p;
	float nbr;

	p = 0.0001;
	nbr = (float)nb;
	gs = (float)nbr;
	if (nb <= 0)
		return (0);
	while (1)
	{
		root = 0.5 * (gs + (nbr / gs));
		if (absv(root - gs) < p)
			break ;
		gs = root;
	}
	if (root - (int)root > p)
		return (0);
	else
		return (root);
}
