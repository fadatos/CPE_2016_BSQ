/*
** my_getnbr.c for my_getnbr in /home/fadatos/libmy/my_lib
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Tue Oct 18 13:57:12 2016 albouy titouan
** Last update Mon Dec  5 16:16:04 2016 albouy titouan
*/

#include "include/my.h"

int	my_getnbr(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  if (str[0] == '-' && str[1] != '\0')
    i = i + 1;
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9'))
	return (0);
      n = n + str[i] - 48;
      n = n * 10;
      i = i + 1;
    }
  n = n / 10;
    if (str[0] == '-')
      return (-1 * n);
  return (n);
}
