/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:34:02 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/08 17:51:14 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*s;
	int			i;
	int			len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	s = (char*)malloc(sizeof(*s) * (len + 1));
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
