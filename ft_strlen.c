/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:13:22 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/01 19:13:28 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}
