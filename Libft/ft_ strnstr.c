
char    *ft_strnstr(const char *big, const char *lil, size_t len)
{
    size_t h;
	size_t n;

	h = 0;
    n = 0;
	if (lil[h]  == '\0')
		return ((char *)big);
	while (big[h])
	{
		while (big[h + n] == lil[n] && (h + n) < len)
		{
			if (big[h + n] == '\0' && lil[n] == '\0')
				return ((char *)big + h);
			n++;
		}
		if (lil[n] == '\0')
			return ((char *)big + h);
		h++;
	}
	return (0);
}