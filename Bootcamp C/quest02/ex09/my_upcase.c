/*
*
* @param {char*} a
*
* @return {char*}
*
*/

char* my_upcase(char* a) {
  int i=0;
  while(a[i]!=0) {
      if (a[i]>=97&&a[i]<=122) {
      a[i]-=32;
      }
      i++;
  }
  return a;
}