/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:56:47 by mmahasim          #+#    #+#             */
/*   Updated: 2019/04/09 17:14:34 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	x;

	x = 1;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &x, 1))
			write(1, &x, 1);
	}
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	return (0);
}
