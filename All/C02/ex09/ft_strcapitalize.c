/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:25:38 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/23 09:15:53 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_char_is_alphanumeric(str[0]))
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_char_is_alphanumeric(str[i])
			&& !ft_char_is_alphanumeric(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
