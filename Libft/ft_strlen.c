/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:59:53 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/20 10:37:03 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*a;

	a = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - a);
}
/*int	main(void)
{
	char text[15] = "hello world!";
	char *p_str = text;

	int number = ft_strlen(p_str);
	printf("%d", number);
	return(0);
}*/
