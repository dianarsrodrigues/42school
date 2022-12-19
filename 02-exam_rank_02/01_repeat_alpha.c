/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:09:00 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/15 15:26:10 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int letter;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                letter = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                letter = argv[1][i] - 64;
            else   
                letter = 1;
            while (letter != 0)
            {
                write(1, &argv[1][i], 1);
                letter--;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}