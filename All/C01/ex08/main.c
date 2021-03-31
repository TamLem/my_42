/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:44:20 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/21 09:27:28 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_sort_int_tab.c"
#include <stdio.h>

void array_print(int *arr, int size)
{
	int i;

	i = 0; 
	
	while (i < size)
	{
		printf("%d,", arr[i]);
		i++;
	}
	printf("\n");
}

int	main()
{	
	int arr[10] = {6,2,5,1,3,9,12,56,3,7};
	ft_sort_int_tab(arr, 10);
	array_print(arr, sizeof(arr)/sizeof(*arr)); 

	return(0);
}