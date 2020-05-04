/*
*
* @param {char*} a
*
* @return {char*}
*
*/

char* my_downcase(char* a) {
int i=0;
  while(a[i]!=0) {
      if (a[i]>=65&&a[i]<=90) {
      a[i]+=32;
      }
      i++;
  }
  return a;
}