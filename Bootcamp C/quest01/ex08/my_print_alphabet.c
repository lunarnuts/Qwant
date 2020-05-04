/*
*
*
* @return {void}
*
*/

void my_putchar(char c) { write(1, &c, 1); }

void my_print_alphabet() {
  for (char a=97;a<=122;a++) {
      my_putchar(a);
  }
  my_putchar(10);
}
