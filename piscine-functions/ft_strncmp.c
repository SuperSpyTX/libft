/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:00:57 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/09 14:47:20 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*s1 == *s2 && n > 1 && *s1 != 0 && *s2 != 0)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	return ((*s1) - (*s2));
}
