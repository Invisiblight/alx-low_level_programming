#include <stdio.h>
#include <unistd.h>

int main(void)
{
  write(STDOUT_FILENO,"_putchar\n", 9);
  return 0;
}
