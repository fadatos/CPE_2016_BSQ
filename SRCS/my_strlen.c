/*
** my_strlen.c for my_strlen in /home/fadatos/libmy/libmy_piscine_C
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Fri Nov  4 13:30:15 2016 albouy titouan
** Last update Mon Dec  5 16:19:32 2016 albouy titouan
*/

#include "include/my.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
