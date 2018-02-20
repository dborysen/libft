/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 17:24:31 by dborysen          #+#    #+#             */
/*   Updated: 2017/12/27 17:24:32 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lowstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] + 32;
		i++;
	}
	return (s);
}
