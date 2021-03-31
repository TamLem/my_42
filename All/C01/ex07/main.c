/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 07:44:20 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/21 09:25:31 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_rev_int_tab.c"
#include <stdio.h>

void array_print(int *arr, int size)
{
	int i;

	i = 0; 
	
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}

int	main()
{	
	int arr[5] = {1,2,3,4,5};
	ft_rev_int_tab(arr, 5);
	array_print(arr, sizeof(arr)/sizeof(*arr)); 
	

	return(0);
}