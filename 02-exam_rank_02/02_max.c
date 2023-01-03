/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:04:15 by diarodri          #+#    #+#             */
/*   Updated: 2023/01/03 12:04:16 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	
	if (!tab)
		return (0);
	while (i < len)
	{
		if(tab[i] < tab[len - 1])
			i++;
		else
			len--;	
	}
	return (tab[i]);
}

int main ()
{
	int n[4] = {1,6,2,5};
	
	printf("%i", max(n, 4));
	return (0);
}
