/*
*
*
* @return {void}
*
*/

void my_putchar(char c) { write(1, &c, 1); }

void my_print_reverse_alphabet() {
  for (char a=122;a>=97;a--) {
      my_putchar(a);
  }
  my_putchar(10);
}