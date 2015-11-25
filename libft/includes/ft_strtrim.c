/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:47:50 by zkerkeb           #+#    #+#             */
/*   Updated: 2015/11/23 23:03:07 by zkerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		st;
	int		end;
	char	*cpy;

	st = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (s[st] == ' ' || s[st] == '\t' || s[st] == '\n')
		st++;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	cpy = (char *)malloc(sizeof(char) * (end - st + 1));
	if (cpy && s)
	{
		ft_strncpy(cpy, (char const *)s + st, end - st);
		return (cpy);
	}
	return (NULL);
}