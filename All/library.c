// return the decimal size of an int
int size_of(int n)
{
	int s;
	s = 1;
	while (n > 10)
	{
		n = n/10;
		s++;
	}
	return (s);
}

// return power of n by p, need fix
int power (int n, int p)
{
	int i;
	int result;
	i = 0;
	
	result = n;
	
	printf("Hello");	
	while ( i < p) 
	{
		result *= n;
	}
	
	return result;
}

// create array of digits
int *create_digits ()
{
	int i;
	int digits;

	i = 0;
	while (i <= 9)
	{
		digits[i] = i;
		i++;
	}

	return digits;
}

void	ft_putnbr(long nbr)
{
	long d;

	// if (nbr == -2147483648)
	// {
	// 	write(1, "-214748364", 11);
	// 	nbr = 8;
	// }
	// if (nbr < 0 && nbr)
	// {
	// 	write(1, "-", 1);
	// 	nbr = -1 * nbr;
	// }
	if (nbr < 16)
	{
		ft_print_hexd(nbr);
	}

	if (nbr > 15)
	{
		d = nbr % 16;
		nbr = nbr / 16;
		ft_putnbr(nbr);
		ft_print_hexd(d);
	}
}

void	print_str()
{
	
}

void	ft_putcharhex(int nbr)
{
	int d;
	int n;
	
	if (nbr < 16)
	{
		ft_print_hexd(nbr);
		ft_putchar('0');
	}

	if (nbr > 15)
	{
		d = nbr % 16;
		nbr = nbr / 16;
		ft_putcharhex(nbr);
		ft_print_hexd(d);
	}
}