#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
  int   i;

  i = 0;
  if ((n <= ft_strlen(str)) && (c >= 32 && c <= 126))
  { 
    while (*(str + i) != '\0' && i < n)
    {
      str[i] = c;
      i++;
    }
  }
  return (str);
}
