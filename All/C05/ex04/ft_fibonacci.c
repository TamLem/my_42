/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:27:13 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/30 19:04:43 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index >= 2)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (result);
}
