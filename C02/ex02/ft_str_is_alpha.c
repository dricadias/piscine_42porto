/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:18:07 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/13 19:14:54 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] < 'A')
		{
			return (0);
		}
		else if (str[c] > 'z')
		{
			return (0);
		}
		else if (str[c] > 'Z' && str[c] < 'a')
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "abcdeZDEG";
	char str1[] = "z1d3_";
	char str2[] = "\\";
	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
}*/
