/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:43:34 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/20 13:02:35 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	a;

	a = argc - 1;
	while (a > 0)
	{
		c = 0;
		while (argv[a][c] != '\0')
		{
			write(1, &argv[a][c], 1);
			c++;
		}
		a--;
		write(1, "\n", 1);
	}
	return (0);
}
