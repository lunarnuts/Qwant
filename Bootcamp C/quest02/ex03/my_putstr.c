/*
*
* @param {char*} a
*
* @return {void}
*
*/
extern int printf(const char *, ...);
void my_putstr(char* a) {
      printf("%s",a);
}