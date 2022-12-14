/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_camel_to_snake.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:38:43 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/19 17:50:45 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                write (1, "_", 1);
                argv[1][i] = argv[1][i] + 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}