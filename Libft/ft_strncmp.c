/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:41:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/05 18:52:44 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main(void)
{
    char    a[20] = "Dianaee";
    char    b[20] = "Dianarrr";
    int nbr = 30;

    
    printf("String1: %s\n", a);
    printf("String2: %s\n", b);
    int diff = ft_strncmp(a,b, nbr);
    printf("%d\n", diff);
    return (0);  
}*/
