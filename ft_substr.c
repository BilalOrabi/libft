/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:49:17 by borabi            #+#    #+#             */
/*   Updated: 2025/12/12 21:49:19 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			plen;
	char			*p;

	if (!s)
		return (0);
	plen = 0;
	while (start < ft_strlen(s) && (plen < len && s[start + plen]))
		plen++;
	p = malloc(sizeof(char) * (plen + 1));
	if (!p)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return ((char *)p);
}
