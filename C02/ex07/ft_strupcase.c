/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:42:51 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/13 15:11:10 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "abc";

	printf("%s", ft_strupcase(str));
	return (0);
}*/
