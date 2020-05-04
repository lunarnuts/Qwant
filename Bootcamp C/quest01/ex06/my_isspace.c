/*
*
* @param {char} a
*
* @return {int}
*
*/

int my_isspace(char a) {
  if ((a>=9&&a<=13)||a=='\0'||a==32)
    return 1;
return 0;

}