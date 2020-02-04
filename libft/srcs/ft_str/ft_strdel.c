/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarth-o <kgarth-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 14:26:26 by kgarth-o          #+#    #+#             */
/*   Updated: 2019/10/06 16:58:17 by kgarth-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strdel(char **as)
{
	ft_memdel((void**)as);
	return (1);
}
