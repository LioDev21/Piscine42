/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:32:14 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/26 10:53:31 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	s = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}
/*
int main()
{
	char src[] = "salut";
	char dst[4];
	printf("%x\n",ft_strlcpy(dst, src, 4));
	//strlcpy(dst, src, 2);
	printf("%lx\n", strlcpy(dst, src, 4));
	printf("%s\n", dst);
	return 0;
}
*/
