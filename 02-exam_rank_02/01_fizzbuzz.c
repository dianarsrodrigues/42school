/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:26:07 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/14 16:44:18 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else
            ft_write_number(i);
        i++;
        write (1, "\n", 1);
    }
}