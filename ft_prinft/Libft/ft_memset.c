/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:49:16 by falakus           #+#    #+#             */
/*   Updated: 2024/10/30 21:06:03 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int main()
{
	printf("%s", ft_memset("ferhatalakus", 'r', 7));
}
