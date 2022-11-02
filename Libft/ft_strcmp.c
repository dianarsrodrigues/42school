/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:37:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/26 09:55:47 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
    char    a[] = "Z";
    char    b[] = "A";

    printf("Nome: %s\n", a);
    printf("Nome: %s\n", b);
    int diff = ft_strcmp(a,b);
    printf("%d\n", diff);
    int test = strcmp(a,b);
    printf("%d\n", test);
    return (0);  
}*/
