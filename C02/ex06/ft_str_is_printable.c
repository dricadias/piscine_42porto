/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:31:31 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/13 12:41:40 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("~/34_..*-abd"));
	printf("%d\n", ft_str_is_printable("\n"));
}*/
