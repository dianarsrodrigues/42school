/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strspn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:03:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/21 17:19:47 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        while (accept[j] != '\0')
        {
            while (s[i] == accept[j])
            {
                i++;
                j++;
            }
            return (i);
        }
        return (0);
    }
    return (0);
}

int main()
{
    char s[] = "Diana";
    char accept[] = "Di";

    printf("%lu\n", strspn(s, accept));
    printf("%lu\n", ft_strspn(s, accept));
}