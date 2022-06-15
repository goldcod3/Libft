int ft_isalnum(int c)
{
    if (c >= 48 && c <= 57)
        return (1024);
    else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1024);
    else
        return (0);
}