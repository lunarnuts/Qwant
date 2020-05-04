/*
*
*
* @return {void}
*
*/

void my_putchar(char c) { write(1, &c, 1); }

void my_print_numbers() {
  for (char a=48;a<=57;a++) {
      my_putchar(a);
  }
  my_putchar(10);
}
