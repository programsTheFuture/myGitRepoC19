/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:41:51 by avadsoon          #+#    #+#             */
/*   Updated: 2023/09/28 13:47:20 by avadsoon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_numeric("0123456789"));
	printf("\n%d", ft_str_is_numeric("01234hd56789"));
	printf("\n%d", ft_str_is_numeric("265457789645"));
}*/
