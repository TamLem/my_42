/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:27:20 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/21 07:55:48 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int indice;
	int temp;

	i = 0;
	indice = size - 1;
	while (i <= indice)
	{
		temp = tab[i];
		tab[i] = tab[indice];
		tab[indice] = temp;
		i++;
		indice--;
	}
}
