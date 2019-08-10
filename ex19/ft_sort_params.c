/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:48:14 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/06 21:15:35 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (argc - 1 > b)
	{
		while (argc - 1 > a)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				ft_swap(&argv[a], &argv[a + 1]);
				a = 0;
			}
			a++;
		}
		b++;
	}
	a = 0;
	while (argc - 1 > a++)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
	}
	return (0);
}
