/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_is_power_of_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:36:24 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/22 01:26:32 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
    unsigned int number = 1;
    
    while (number <= n)
    {
    	if (number == n)
    		return 1;
    	number = number * 2;
    }
    return 0;
}

int main()
{
    int n = 1;

    printf("%i", is_power_of_2(n));
    return (0);
}
