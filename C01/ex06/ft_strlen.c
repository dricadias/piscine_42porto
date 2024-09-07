/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:59:24 by adias-do          #+#    #+#             */
/*   Updated: 2024/08/08 19:43:54 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	total;

	total = 0;
	while (str[total] != '\0')
	{
		total++;
	}
	return (total);
}

/*int	main (void)
{
	printf("%d\n", ft_strlen("teste"));
}*/
