/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:26:37 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/07 16:04:25 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<string.h>

// unsigned int	ft_strlen(char *str)
// {
// 	unsigned int	counter;

// 	counter = 0;
// 	while (*str != '\0')
// 	{
// 		counter++;
// 		str++;
// 	}
// 	return (counter);
// }

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	c;
// 	unsigned int	d;

// 	if (size <= ft_strlen(dest))
// 		return (size + ft_strlen(src));
// 	c = ft_strlen(dest);
// 	d = 0;
// 	while (src[d] != '\0' && c + 1 < size)
// 	{
// 		dest[c] = src[d];
// 		c++;
// 		d++;
// 	}
// 	dest[c] = '\0';
// 	return (ft_strlen(dest) + ft_strlen(&src[d]));
// }
