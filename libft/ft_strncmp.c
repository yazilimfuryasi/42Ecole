/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehazir <eneshazrr@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:38:14 by ehazir            #+#    #+#             */
/*   Updated: 2022/02/07 16:24:06 by ehazir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
str1: Karşılaştırma yapılacak ilk karakter diziyi gösteren işaretçidir.

str2: Karşılaştırma yapılacak ikinci karakter dizisinigösteren işaretçidir.

n: Karşılaştırma yapılacak karakter sayısını gösterir.

gönderdiğin değeri N kadar karşılaştırır
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str2[i] > str1[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "B";
    char *str2 = "Z";
    
    printf("%d", ft_strncmp(str, str2, 1));
    printf("\n%d", strncmp(str, str2, 1));
}
*/
