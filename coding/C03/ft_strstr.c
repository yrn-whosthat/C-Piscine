/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madi <madi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:28:00 by masitnaz          #+#    #+#             */
/*   Updated: 2024/07/23 16:20:47 by madi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str)
	{
		a = str;
		b = to_find;
		while (*a == *b && *a && *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (str);
		str++;
	}
	return (0);
}

int main(void)
{
	char test02[] = "ello";
	char test01[] = "Hello!";
	printf("%s\n", ft_strstr(test01, test02));

	return 0;
}