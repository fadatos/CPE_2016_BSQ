/*
** my_put_nbr.c for my_put_nbr in /home/fadatos/delivry
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Tue Oct 18 08:41:13 2016 albouy titouan
** Last update Thu Dec  8 01:02:17 2016 albouy titouan
*/

#include "include/my.h"

int		my_put_nbr(int nb)
{
  int		modulo;

  if (nb >= -2147483647 && nb <= 2147483647)
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * (-1);
	}
      if (nb >= 0)
	{
	  if (nb > 9)
	    {
	      modulo = (nb % 10);
	      nb = (nb - modulo) / 10;
	      my_put_nbr(nb);
	      my_putchar(48 + modulo);
	    }
	  else
	    my_putchar(48 + nb);
	}
    }
  return (0);
}
