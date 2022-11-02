/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:41:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/26 10:23:08 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

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
    char    a[20] = "";
    char    b[20] = "";
    int nbr = 3;

    
    printf("Nome: %s\n", a);
    printf("Nome: %s\n", b);
    int diff = ft_strncmp(a,b, nbr);
    printf("%d\n", diff);
    int test = strncmp(a,b, nbr);
    printf("%d\n", test);
    return (0);  
}*/
