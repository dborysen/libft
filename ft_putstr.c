/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 15:06:59 by dborysen          #+#    #+#             */
/*   Updated: 2017/11/03 15:08:04 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s && *s)
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		return (i);
	}
	return (0);
}
