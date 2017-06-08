/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 09:47:39 by ecloete           #+#    #+#             */
/*   Updated: 2017/05/23 11:11:29 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*result;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	result = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}
