/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:17:10 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/13 12:24:33 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] < 'a' || str[c] > 'z')
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcdef"));
	printf("%d\n", ft_str_is_lowercase("a3c40"));
	printf("%d\n", ft_str_is_lowercase(""));
}*/
