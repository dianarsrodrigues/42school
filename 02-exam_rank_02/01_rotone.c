/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:10:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/19 16:19:32 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'z' || argv[1][i] == 'Z')
                argv[1][i] = argv[1][i] - 25;
            else if (argv[1][i] >= 'a' && argv[1][i] < 'z' || argv[1][i] >= 'A' && argv[1][i] < 'Z')
                argv[1][i] = argv[1][i] + 1;
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}