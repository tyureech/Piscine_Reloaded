/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 22:34:47 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/03 14:20:06 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb <= 12)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}
