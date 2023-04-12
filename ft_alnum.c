int ft_isalnum(int c)
{
    if ((c <= 'Z' && c >= 'A')
			|| (c <= 'z' && c >= 'a'))
            return (1);
    if (c <= '0' && c >= '9')
            return (1);
    return (0);
}