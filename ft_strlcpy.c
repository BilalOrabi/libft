/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:48:46 by borabi            #+#    #+#             */
/*   Updated: 2025/12/12 21:48:47 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	if (destsize)
	{
		if (srclen < destsize -1)
			copylen = srclen;
		else
			copylen = destsize - 1;
		ft_memcpy(dest, src, copylen);
		dest[copylen] = '\0';
	}
	return (srclen);
}
