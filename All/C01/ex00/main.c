/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:44:20 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/20 15:31:26 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_ft.c"
#include <stdio.h>

int	main()
{
	int n = 36;
	ft_ft(&n);

	printf("%d", n);
	return(0);
}