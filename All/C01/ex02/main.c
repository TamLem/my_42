/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:44:20 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/20 16:57:20 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_swap.c"
#include <stdio.h>

int	main()
{
	int a = 4;
	int b = 2;
	
	ft_swap(&a, &b);
	return(0);
}