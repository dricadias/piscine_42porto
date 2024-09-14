/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:50:19 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/14 12:10:01 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && s1[c] == s2[c] && s1[c] && s2[c])
	{
		c++;
	}
	if (n == c)
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}

/*int	main(void)
{
	int n = 4;
	char str1[] = "abcde";
	char str2[] = "abde";
	printf("%d", ft_strncmp(str1, str2, n));
	return (0);
}*/
