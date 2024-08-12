int	ft_strdigit(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	if (len < 1)
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (str[i] == '\0')
			return (0);
	}
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}