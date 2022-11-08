/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:47:53 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/08 00:06:08 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    int len_s1;
    int len;
    char    *new;

    i = 0;
    j = 0;
    len_s1 = ft_strlen(s1);
    
    while (s1[i] == set[0])
        i++;
    len = len_s1 - i;
    if (s1[j] != '\0')
    {
        new = (char*)malloc(len);
        while (j < len)
        {
            new[j] = s1[j];
            j++;
        }
        new[j] = '\0';
    }
    return (new);
}

int		main()
{
	char *str = "aaaaasaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasad";
	char *tirar = "s";
	char *here;

	here = ft_strtrim(str, tirar);
	printf("%s\n", str);
	printf("%s", here);

}*/