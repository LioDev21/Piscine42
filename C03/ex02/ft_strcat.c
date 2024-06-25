/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:12:00 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/25 17:12:03 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i])
    {
        i++;
    }
    j = 0;
    while (src[j])
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

//     //strcat(s2, s1);
//     printf("%s\n", ft_strcat(s2, s1));
//     return 0;
// }