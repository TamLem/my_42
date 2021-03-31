/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:48:36 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/24 12:39:45 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int				n;
	unsigned int	i;

	n = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = '\0';
	return (dest);
}
