/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:35:07 by dborysen          #+#    #+#             */
/*   Updated: 2017/11/12 16:43:43 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char k;

	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n == -2147483648)
	{
		n = n - 2000000000;
		write(fd, "2", 1);
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	k = n % 10 + '0';
	write(fd, &k, 1);
}
