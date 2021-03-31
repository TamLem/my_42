/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:51:27 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/30 13:07:24 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		len;
	char	*num_start;

	base = base + 1;
	i = 0;
	len = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		if ((str[i] < '0' || str[i] > '9')
			&& !(str[i] == '+' || str[i] == '-' || str[i] == ' '))
			break ;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (len == 0)
				num_start = &(str[i]);
			len++;
		}
		i++;
	}
	return (0);
}
