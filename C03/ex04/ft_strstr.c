/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:30:48 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/17 09:57:58 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[c] != '\0')
	{
		while (to_find[i] == str[c + i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (str + c);
			}
			i++;
		}
		i = 0;
		c++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "ahf gkkh6 fdls";
	char tofind[] = "h";
	printf("%s\n", ft_strstr(str1, tofind));
	printf("%s\n", strstr(str1, tofind));
	return (0);
}*/
