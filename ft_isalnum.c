int	ft_isalnum(int c)
{
	return ((48 <= c && c <= 57)
	|| (65 <= c && c <= 90)
	|| (97 <= c && c <= 122));
}