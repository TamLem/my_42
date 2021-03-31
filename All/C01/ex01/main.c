/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:44:20 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/20 15:49:36 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_ultimate_ft.c"
#include <stdio.h>

int	main()
{
	int n = 360;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	
	ptr = &n;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	
	ft_ultimate_ft(ptr9);

	printf("%d", n);
	return(0);
}