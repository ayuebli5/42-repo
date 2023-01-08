/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:28:14 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/07 19:51:03 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>
// #include<ctype.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}
//
// int main(void)
// {
// 	int x;
//
// 	x = 0;
//	
// 	printf("the uppercase of %c is %c", x, toupper(x));
// }
