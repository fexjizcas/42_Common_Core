
int ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n < 10)
		ft_putchar((n + '0'));
	else
	{
		ft_putnbr((n / 10));
		ft_putnbr((n % 10));
	}
}