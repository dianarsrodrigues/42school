/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:11:52 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/19 18:34:02 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int num = 0;
        
        if (argv[2][0] == '+')
        {
            num = atoi(&argv[1][0]) + atoi(&argv[3][0]);
            printf("%d", num);
        }
        else if (argv[2][0] == '-')
        {
            num = atoi(&argv[1][0]) - atoi(&argv[3][0]);
            printf("%d", num);
        }
        else if (argv[2][0] == '*')
        {
            num = atoi(&argv[1][0]) * atoi(&argv[3][0]);
            printf("%d", num);
        }
        else if (argv[2][0] == '/')
        {
            num = atoi(&argv[1][0]) / atoi(&argv[3][0]);
            printf("%d", num);
        }
        else if (argv[2][0] == '%')
        {
            num = atoi(&argv[1][0]) % atoi(&argv[3][0]);
            printf("%d", num);
        }
    }
    printf("\n");
    //write (1, "\n", 1);
    return (0);
}