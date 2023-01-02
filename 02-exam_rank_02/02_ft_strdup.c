/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:00:55 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/21 15:24:20 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0;
    int i = 0;
    char *str;

    while (src[len] != '\0')
        len++;
    str = malloc(sizeof(str) * (len + 1));
    if (str != NULL)
    {
        while (src[i] != '\0')
        {
            str[i] = src[i];
            i++;
        }
        str[i] = '\0';
    }
    return (str);
}

int main ()
{
    char src[] = "Diana";

    printf("%s\n", strdup(src));
    printf("%s", ft_strdup(src));
    return (0);
}