/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:28:09 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/06 16:56:19 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_esc(char car)
{
	write(1, &car, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_esc('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_esc(nb + 48);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	ft_esc('\n');
	ft_putnbr(2147483647);
	ft_esc('\n');
	ft_putnbr(42);
	ft_esc('\n');
	ft_putnbr(2);
	return (0);
}*/
