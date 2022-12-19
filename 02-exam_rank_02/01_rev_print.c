/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:45:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/19 15:53:39 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i;

        i = 0;
        while (argv[1][i] != '\0')
            i++;
        while (i >= 0)
        {
            write (1, &argv[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}