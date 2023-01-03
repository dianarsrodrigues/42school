/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_snake_to_camel.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:45:16 by diarodri          #+#    #+#             */
/*   Updated: 2023/01/03 14:45:18 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 1;
	
		write(1, &argv[1][0], 1);
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '_')
				i++;
			if (argv[1][i - 1] == '_' && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				argv[1][i] = argv[1][i] - 32;
				write(1, &argv[1][i], 1);  
				i++;
			}
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				write(1, &argv[1][i], 1);  
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
