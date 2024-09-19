/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:39:15 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/19 13:42:30 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(5, 2));
}*/
