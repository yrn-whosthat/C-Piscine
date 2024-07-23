/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madi <madi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:40:11 by madi              #+#    #+#             */
/*   Updated: 2024/07/20 00:31:51 by madi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
    int evenness;
    int number;

    evenness = number = 0;
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == 'f' || *str == '\r' || *str == 32)
    {
        str++;
    }
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            evenness++;
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        number *= 10;
        number += *str - 48;
        str++;
    }
    if (evenness % 2 == 0)
        return (number);
    return (-number);
}

int main(void)
{
    char    *a = "          ---+--+1234ab567";
    
    printf("%d\n", ft_atoi(a));
}