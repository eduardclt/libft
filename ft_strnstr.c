/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 11:29:44 by ecloete           #+#    #+#             */
/*   Updated: 2017/06/01 12:15:40 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;

	str1 = (char*)(big);
	j = 0;
	i = 0;
	while ((big[i] != '\0') && (i <= len))
	{
		j = 0;
		while ((little[j] == big[i]) && (little[j] != '\0'))
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			return (str1);
		str1++;
		i++;
	}
	return (char*)(big);
}
