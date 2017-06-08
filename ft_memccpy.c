/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 11:11:37 by ecloete           #+#    #+#             */
/*   Updated: 2017/06/06 12:57:41 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	int				i;
	unsigned char	*s;
	unsigned char	*s1;

	s = (unsigned char *)str1;
	s1 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		s[i] = s1[i];
		if (s1[i] == c)
		{
			str1++;
			return (str1);
		}
		i++;
		str1++;
	}
	return (NULL);
}
