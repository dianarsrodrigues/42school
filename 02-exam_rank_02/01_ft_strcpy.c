/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:54:39 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/14 17:05:17 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main (void)
{
    char s1[10]= "Diana";
    char s2[10]= "Rodrigues";

    printf("%s", ft_strcpy(s1, s2));
    return 0;
}