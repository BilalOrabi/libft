/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:48:43 by borabi            #+#    #+#             */
/*   Updated: 2025/12/12 21:48:44 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t				dst_length;
	size_t				remaining;
	char				*dst;
	const char			*src_start;

	dst = dest;
	src_start = src;
	remaining = size;
	while (remaining-- != 0 && *dst != '\0')
		dst++;
	dst_length = dst - dest;
	remaining = size - dst_length;
	if (remaining == 0)
		return (dst_length + ft_strlen(src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*dst++ = *src;
			remaining--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_length + (src - src_start));
}
