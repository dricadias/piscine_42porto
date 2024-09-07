/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:45:10 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/10 21:02:54 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	total;
	int	tst;

	total = 0;
	while (total < size / 2)
	{
		tst = tab[total];
		tab[total] = tab[size - 1 - total];
		tab[size - 1 - total] = tst;
		total++;
	}
}

/*int   main (void)
{
        int tab1[] = {1, 2, 3, 4, 5, 6};
        int size2 = 6;
	int a = 0;
	
	ft_rev_int_tab(tab1, size2);
	while (a < size2)
	{
		printf("%d", tab1[a]);
		a++;
	}
}*/
