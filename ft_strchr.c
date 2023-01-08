/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:01:16 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/08 16:04:52 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	ft_strchr(char *str, int c)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str [index] == c)
		{
			return (&str[index]);
		}
		index++;
	}
	return (NULL);
}
