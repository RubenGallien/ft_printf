/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubengallien <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:41:16 by rubengallien      #+#    #+#             */
/*   Updated: 2023/11/29 12:38:58 by rgallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *mot)
{
	int	i;

	i = 0;
	while (mot[i] != '\0')
	{
		i++;
	}
	return (i);
}
