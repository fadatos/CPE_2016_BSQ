/*
** my_putchar.c for my_putchar in /home/fadatos/libmy/libmy_piscine_C
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Fri Nov  4 13:40:52 2016 albouy titouan
** Last update Mon Dec  5 16:16:54 2016 albouy titouan
*/

#include "include/my.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}
