/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:13:18 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/26 16:03:12 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;
	unsigned int	deslen;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	deslen = j;
	srclen = ft_strlen(src);
	if (size == 0 || size <= deslen)
	{
		return (srclen + size);
	}
	while (src[i] && i < size - deslen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (srclen + deslen);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Halloooo";
    char s2[20] = "Cava";
    unsigned int s = 9;

    ft_strlcat(s2, s1, s);
    printf("%s\n", s2);
    printf("%u\n", ft_strlcat(s2, s1, 3));
    return 0;
}
*/
