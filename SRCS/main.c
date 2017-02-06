/*
** main.c for main in /home/fadatos/B1_C_Prog_Elem/BSQ
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Mon Dec  5 15:07:56 2016 albouy titouan
** Last update Fri Dec  9 06:33:16 2016 albouy titouan
*/

#include "include/my.h"

int		main(int ac, char **av)
{
  if (ac < 2)
    {
      my_putstr_error("ERROR : my_BSQ [maps]\n");
      return (84);
    }
  else if (ac > 2)
    {
      my_putstr_error("Too many arguments\n");
      return (84);
    }
  return (read_file(av[1]));
}
