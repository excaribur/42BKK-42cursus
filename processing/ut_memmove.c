/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:30:28 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/16 12:03:04 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "aaaaa";
   const char src[]  = "n";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 4);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}


/*
* https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html
* The memmove() function copies len bytes from string src to string dst.  The two strings may overlap;
* if dst > src --> return src
* if src > dst --> return src is truncated
*/
