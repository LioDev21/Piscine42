/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:56:03 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/26 10:54:40 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_dig(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (is_low(str[0]))
		str[0] -= 32;
	while (str[i])
	{
		if (!is_alpha(str[i - 1]) && !is_dig(str[i - 1]) && is_low(str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "adDieu {}comment ? ca 98va";
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}
*/
