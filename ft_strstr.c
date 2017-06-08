/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 10:30:09 by ecloete           #+#    #+#             */
/*   Updated: 2017/06/01 11:29:33 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*str1;

	str1 = (char*)(haystack);
	j = 0;
	i = 0;
	while (haystack[i] != '\0')
	{
		while ((needle[j] == haystack[i]) && (needle[j] != '\0'))
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return (str1);
		str1++;
		i++;
	}
	return (char*)(haystack);
}
