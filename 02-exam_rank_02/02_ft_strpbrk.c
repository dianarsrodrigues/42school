/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strpbrk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:49:27 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/21 16:08:19 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int j = 0;

    while (*s1 != '\0')
    {
        j = 0;
        while (s2[j] != '\0')
        {
            if (*s1 == s2[j])
                return ((char *) s1);
            j++;
        }
        s1++;
    }
    return (0);
}

int main()
{
    char s1[] = "Diana";
    char s2[] = "a";

    printf("%s\n", strpbrk(s1, s2));
    printf("%s", ft_strpbrk(s1, s2));
}