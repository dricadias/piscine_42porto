/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:22:20 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/08 14:05:34 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int test1, test2;
	int d, m;

	test1 = 10;
	test2 = 2;
	ft_div_mod(test1, test2, &d, &m);
	printf("%d, %d\n%d, %d", test1, test2, d, m);
}*/
