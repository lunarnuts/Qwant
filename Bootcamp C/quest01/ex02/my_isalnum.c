/*
*
* @param {char} a
*
* @return {int}
*
*/

int my_isalnum(char a) {
  if ((a>47&&a<=57)||(a>96&&a<123)||(a>64&&a<91))
    return 1;
return 0;

}