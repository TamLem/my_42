/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:26:22 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/24 17:18:34 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(dest);
	i = 0;
	if ((size - len) == 0)
		return (len + ft_strlen(src));
	if (size < len)
		return (len + size);
	while (src[i] != '\0' && i < (size - len - 1))
	{
		dest[i + len] = src[i];
		i++;
	}
	if (i <= (size - len))
		dest[i + len] = '\0';
	return (len + ft_strlen(src));
}
