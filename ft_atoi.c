/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:52:39 by ecloete           #+#    #+#             */
/*   Updated: 2017/05/25 11:11:09 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	long int	result;
	char		*str1;

	i = 0;
	str1 = (char *)str;
	if (str1[0] == '-')
		return (-ft_atoi(str1 + 1));
	while (ft_isdigit(str1[i]))
	{
		result = (str1[i] * 10) + str1[i] - '0';
		i++;
	}
	return (result);
}
