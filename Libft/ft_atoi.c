/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:37:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 00:21:56 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;
	
	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0')
	{
		// if (str[i] == '-') {
		// 	s = -1; 
		// 	i++;
		// }

		// if (str[i] >= '0' &&  str[i] <= '9') {
		// 	while (str[i] >= '0' &&  str[i] <= '9')
		// 	{
		// 		res = (res * 10) + str[i] - 48;
		// 		i++;
		// 	}
		// 	return (s * res); 
		// }

		// i++;
	

		while (!(str[i] >= '0' &&  str[i] <= '9')) {
			if (str[i] == '-') s = -1; 
			i++;
		}
			
		while (str[i] >= '0' &&  str[i] <= '9')
		{
			res = (res * 10) + str[i] - 48;
			i++;
		}
		
		return (s * res); 
	}
	return (0);
}
int	main (void)
{
	char n[] = "   SS!!!SS-+--4888jjj5";
	
	printf("%i\n", ft_atoi(n));
	return (0);
}