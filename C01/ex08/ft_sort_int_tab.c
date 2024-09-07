/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:58:31 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/11 14:24:59 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	v;
	int	tst;

	c = 0;
	while (c < size)
	{
		v = c + 1;
		while (v < size)
		{
			if (tab[v] < tab[c])
			{
				tst = tab[c];
				tab[c] = tab[v];
				tab[v] = tst;
			}
			v++;
		}
		c++;
	}
}

/*int	main(void)
{
	int tab1[] = {4, 2, 1, 5, 3};
	int size1 = 5;
	int a = 0;

	ft_sort_int_tab(tab1, size1);
	while (a < size1)
	{
		printf("%d", tab1[a]);
		a++;
	}
}*/
