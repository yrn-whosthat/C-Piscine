/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masitnaz <masitnaz@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:23:30 by masitnaz          #+#    #+#             */
/*   Updated: 2024/07/18 17:06:35 by masitnaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (a != n)
		return (s1[a] - s2[a]);
	return (0);
}

/*int	main(void)
{
	char	x[] = "dshajsdhasdj";
	char	y[] = "dshajsdhasdJKlsd";
	int		z = 12;

	printf("Result: %d\n", ft_strncmp(x, y, z));
}
*/
