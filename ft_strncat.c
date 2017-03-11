/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 13:35:50 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/03 17:06:03 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*orig;

	orig = s1;
	while (*s1)
		s1++;
	n++;
	while (*s2 && --n > 0)
		*s1++ = *s2++;
	*s1 = '\0';
	return (orig);
}
