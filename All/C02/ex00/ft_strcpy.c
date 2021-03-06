/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 08:51:15 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/21 10:34:08 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1)
	{
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
