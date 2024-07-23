/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madi <madi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:57:25 by masitnaz          #+#    #+#             */
/*   Updated: 2024/07/23 16:34:43 by madi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	a;

	dest_len = 0;
	src_len = 0;
	a = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[a] != '\0' && dest_len + a < size - 1)
	{
		dest[dest_len + a] = src[a];
		a++;
	}
	dest[dest_len + a] = '\0';
	return (dest_len + src_len);
}

/* int	main(void)
{
	char	dest[50] = "Hello";
	char	src[] = "World";
	unsigned int	size = 15;
	unsigned int	result;

	result = ft_strlcat(dest, src, size);
	printf("Resulting string: '%s'\n", dest);
	printf("Length attempted to create: %u\n", result);
} */