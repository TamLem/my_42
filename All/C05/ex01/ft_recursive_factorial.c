/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:51:56 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/30 13:55:06 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
