/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:16:53 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/30 13:30:07 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int temp;
	char*ptr;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
			ptr = &str[i];
		temp = i;
		while (str[i] == to_find[j] || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (ptr);
			i++;
			j++;
		}
		i = temp;
		i++;
	}
	return (0);
}
