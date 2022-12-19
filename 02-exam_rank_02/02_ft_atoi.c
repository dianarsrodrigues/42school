/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:43:00 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/19 19:09:53 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int res = 0;

    while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-')
        s = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <=  '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res * s);
}

int main (void)
{
    char num1[] = ";123";
    char num2[] = ";123";

    printf("%d\n", ft_atoi(num1));
    printf("%d", atoi(num2));
    return (0);
}