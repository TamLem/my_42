/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemma <tlemma@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:01:27 by tlemma            #+#    #+#             */
/*   Updated: 2021/03/31 12:03:00 by tlemma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int				d;
	unsigned int	i;

	i = 0;
	d = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
		{
			d = s1[i] - 0;
			break ;
		}
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		d = 0 - s2[i];
	return (d);
}

void	print_params(int argc, char **argv)
{
	int i;

	i = 1;
	while (i <= (argc - 1))
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i <= argc)
	{
		while (j <= argc - 2)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		j = 1;
		i++;
	}
	print_params(argc, argv);
	return (0);
}
