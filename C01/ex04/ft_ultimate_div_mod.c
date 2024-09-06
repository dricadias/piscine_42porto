/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:07:00 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/08 16:08:15 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int test1, test2;

	test1 = 4;
	test2 = 2;
	printf("%d  %d\n", test1, test2);
	ft_ultimate_div_mod(&test1, &test2);
	printf("%d  %d\n", test1, test2);
	return (0);
}*/
