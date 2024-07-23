/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madi <madi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:22:40 by masitnaz          #+#    #+#             */
/*   Updated: 2024/07/23 23:37:32 by madi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;	
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base_recursive(unsigned int nbr, char *base, int base_len)
{
	if (nbr >= (unsigned int)base_len)
	{
		ft_putnbr_base_recursive(nbr / base_len, base, base_len);
		ft_putnbr_base_recursive(nbr % base_len, base, base_len);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	unsigned int unbr;

	base_len = 0;
	while (base[base_len])
	{
		base_len++;
	}
	if (!is_valid_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		unbr = (unsigned int)(-(nbr +1)) + 1;
	}
	else
	{
		unbr = nbr;
	}
	ft_putnbr_base_recursive(unbr, base, base_len);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{	
		write(1, "Wrong amount of arguments", 25);
		return (1);
	}
	int number = atoi(argv[1]);
    char *base = argv[2];
	ft_putnbr_base(number, base);
	write(1, "\n", 1);
}
