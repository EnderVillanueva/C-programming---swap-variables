#include <unistd.h>

void ft_putnbr(int nb){
  int num[10];
  int valeu;
  int i;

  valeu = nb;
  if(nb == 0)
  {
    write(1, "0", 1);
  }
  

  else if(nb <= 0)
  {
  valeu *= -1;
  write(1, "-", 1);
  }

  i = 0
  while (valeu)
  num[i] = (valeu % 10) + 48;
  valeu /= 10;
  i++;

  while (i >= 0)
  write(1, &num[--i], 1);
}