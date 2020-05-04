/*
*
* @param {char} a
*
* @return {int}
*
*/

int my_isalpha(char a) {
  if ((a>96&&a<123)||(a>64&&a<91))
    return 1;
return 0;
}