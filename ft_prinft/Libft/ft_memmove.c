/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:10:20 by falakus           #+#    #+#             */
/*   Updated: 2024/10/30 21:10:19 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (NULL);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len-- > 0)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}
#include <stdio.h>

int main()

{
	char dst[] = "ferhatalakus";
	char src[] = "burak";
	printf("%s", ft_memmove(dst, src, 5));
}