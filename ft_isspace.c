/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmonich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:35:00 by trmonich          #+#    #+#             */
/*   Updated: 2018/11/16 12:40:14 by trmonich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	unsigned char p;

	p = (unsigned char)c;
	return (p == ' ' || p == '\n' || p == '\t' || p == '\v'
			|| p == '\f' || p == '\r');
}
