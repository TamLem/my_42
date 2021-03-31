/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:28:36 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/30 15:23:47 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int n, int p)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (i < p)
	{
		result *= n;
		i++;
	}
	return (result);
}

int		ft_get_int(char *str, int len)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (len > 0)
	{
		len--;
		n += ((int)str[i] - 48) * ft_power(10, len);
		i++;
	}
	return (n);
}

int		isvalidchar(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == 'f' || c == '\r')
		return (1);
	if (c == '+' || c == '-' || c == ' ')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		len;\
	char	*num_start;

	i = 0;
	len = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		if (!isvalidchar(str[i]))
			break ;
		if (!(str[i] >= '0' && str[i] <= '9') && len > 0)
			break ;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (len == 0)
				num_start = &(str[i]);
			len++;
		}
		i++;
	}
	return (sign * ft_get_int(num_start, len));
}
