/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madi <madi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:56:43 by madi              #+#    #+#             */
/*   Updated: 2024/07/19 23:06:45 by madi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while( *str)
    {
        i++;
        str++;
    }
    return (i);
}

/*int main(void)
{
    char    *a = "count this";
    char    *b = "and this";

    printf("Lenght of '%s' is: %d\n", a, ft_strlen(a));
    printf("Lenght of '%s' is: %d\n", b, ft_strlen(b));
}
*/