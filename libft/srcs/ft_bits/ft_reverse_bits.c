/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: immn <immn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:51:35 by kgarth-o          #+#    #+#             */
/*   Updated: 2020/02/03 16:04:33 by immn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_reverse_bits(int octet)
{
	return (((octet >> 0) & 1) << 7) |\
	(((octet >> 1) & 1) << 6) |\
	(((octet >> 2) & 1) << 5) |\
	(((octet >> 3) & 1) << 4) |\
	(((octet >> 4) & 1) << 3) |\
	(((octet >> 5) & 1) << 2) |\
	(((octet >> 6) & 1) << 1) |\
	(((octet >> 7) & 1) << 0);
}
