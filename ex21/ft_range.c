/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:27:58 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/08 16:49:09 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int len;
	int *str;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	str = (int*)malloc(sizeof(*str) * len);
	while (i < len)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
