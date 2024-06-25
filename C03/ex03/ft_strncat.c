/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:12:24 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/25 17:12:26 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (dest[i])
    {
        i++;
    }
    j = 0;
    while (src[j] && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[] = "Hallo";
//     char s2[20] = "Cava";

//     //strncat(s2, s1, 3);
//     printf("%s\n", s2);
//     printf("%s\n", ft_strncat(s2, s1, 3));
//     return 0;
// }