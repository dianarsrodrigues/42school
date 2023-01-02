/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:10:01 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/21 17:01:50 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    int tem;

    while (str[len] != '\0')
        len++;
    len = len - 1;
    while (i < (len/2))
    {
        tem = str[len - i];
        str[len - i] = str[i];
        str[i] = tem;
        i++;
    }
    return (str);
}

int main ()
{
    char str[10] = "Diana";

    printf("%s\n", ft_strrev(str));
}