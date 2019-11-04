/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:05:58 by moslama           #+#    #+#             */
/*   Updated: 2019/05/09 14:06:01 by moslama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** isalpha + isalnum ; return 0 or 1
*/

int	ft_isalnum(int c)
{
	return ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123));
}