/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarth-o <kgarth-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:54:30 by kgarth-o          #+#    #+#             */
/*   Updated: 2019/10/29 13:54:31 by kgarth-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isgraph(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}
