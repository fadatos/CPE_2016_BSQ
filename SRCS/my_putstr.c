/*
** my_putstr.c for my_putstr in /home/fadatos/libmy/libmy_piscine_C
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Fri Nov  4 13:41:59 2016 albouy titouan
** Last update Sun Dec 18 23:36:48 2016 albouy titouan
*/

#include "include/my.h"

void		my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void		my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
}
