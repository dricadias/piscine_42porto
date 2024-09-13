/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:20:47 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/14 11:49:31 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

/*int	main(void)
{
	char str1[] = "abCde";
	char str2[] = "abcde";
	printf("%d", ft_strcmp(str1, str2));
}*/
