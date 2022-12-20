/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:52:25 by diarodri          #+#    #+#             */
/*   Updated: 2022/12/20 14:52:26 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] != s2[j])
				return(s1[i] - s2[j]);
			j++;
			i++;
		}
	}
	return (0);
}
int	main(void)
{
	char s1[10] = "Diana1";
	char s2[10] = "000   ";
	char a1[10] = "Diana1";
	char a2[10] = "000   ";
	
	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d\n", strcmp(a1,a2));
	return (0);
}
