/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:29:07 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/20 11:35:46 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	a;

	a = 1;
	while (a < argc)
	{
		c = 0;
		while (argv[a][c] != '\0')
		{
			write(1, &argv[a][c], 1);
			c++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
