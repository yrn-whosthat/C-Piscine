int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;	
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i +1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	value;

	result = 0;
	sign = 1;
	base_len = 0;
	while (base[base_len])
	{
		base_len++;
	}
	if (!is_valid_base(base))
		return (0);
	while (*str <= 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
}