/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:51:07 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/18 19:21:04 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
}*/

/*int	main(int argc, char **argv)
{
	int	n;
	
	if (argc == 2)
	{
    n = atoi(argv[1]);
		printf("%d\n", ft_iterative_factorial(n));
	}
	return (0);
}*/
