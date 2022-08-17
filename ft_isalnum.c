/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mservage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:29:49 by mservage          #+#    #+#             */
/*   Updated: 2020/11/30 18:03:23 by mservage         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= 48) && (c <= 57)) ||
			((c >= 65) && (c <= 90)) ||
			((c >= 97) && (c <= 122)))
		return (1);
	return (0);
}
