/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:13:08 by diarodri          #+#    #+#             */
/*   Updated: 2023/01/03 16:13:10 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int repeat(char *str, char c, int p)
{
	int i = 0;
	
	while (i < p)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return (1);
}

int repeat2(char *str, char c)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return (1);
}


int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = 0;
		int z = 0;
		
		while (argv[1][i] != '\0')
		{
	
			if (repeat(argv[1], argv[1][i], i) != 0)
				write (1, &argv[1][i], 1);
			i++;
		}
		
		while (argv[2][z] != '\0')
		{
			if (repeat2(argv[1], argv[2][z]) != 0)
			{
					
				if (repeat(argv[2], argv[2][z], z) != 0)
					write (1, &argv[2][z], 1);
			}
			z++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
