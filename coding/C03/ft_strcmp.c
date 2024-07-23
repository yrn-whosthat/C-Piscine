/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masitnaz <masitnaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:28:10 by masitnaz          #+#    #+#             */
/*   Updated: 2024/07/22 20:23:18 by masitnaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

/* int	main(void)
{
	char	a[] = "etwas";
	char	b[] = "etwaa";

	printf("%d\n", ft_strcmp(a, b));
}
 */
