/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:58:52 by ecloete           #+#    #+#             */
/*   Updated: 2017/06/06 12:58:55 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s;
	char	*s1;

	s = (char*)str1;
	s1 = (char*)str2;
	i = 0;
	while (i < n)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (str1);
}
