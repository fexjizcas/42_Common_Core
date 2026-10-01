
int ft_putunbr(unsigned int n)
{
    int num;

    num = 0;
    if (n > 9)
    {
        num = num + ft_putunbr(n / 10);
    }
    return (num = num + ft_putunbr(n % 10 + '0');); 
}