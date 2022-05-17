/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:26:25 by mmakboub          #+#    #+#             */
/*   Updated: 2022/04/25 07:35:05 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if ((char)s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	firstc;
	char	*newstr;

	firstc = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		newstr = malloc(1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	while (firstc < len && start < ft_strlen(s))
	{
		newstr[firstc++] = s[start++];
	}
	newstr[firstc] = '\0';
	return (newstr);
}

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	j;
	size_t	i;

	if (!s1)
		s1 = ft_strdup("");
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_str[j++] = s2[i++];
	new_str[j] = '\0';
	free((void *)s1);
	return (new_str);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!(p))
		return (NULL);
	while (i < l)
	{
		p[i] = s1[i];
		i++;
	}
	p[l] = '\0';
	return (p);
}
