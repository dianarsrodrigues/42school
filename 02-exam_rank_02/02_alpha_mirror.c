/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_alpha_mirror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:54:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/19 17:37:10 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int letter = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                letter = 'z' - argv[1][i];
                argv[1][i] = 'a' + letter;
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                letter = 'Z' - argv[1][i];
                argv[1][i] = 'A' + letter;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}