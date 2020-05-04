/*
*
* @param {char*} a
* @param {char*} b
*
* @return {int}
*
*/
int my_strlen(char* a) {
    int i=0;
  while (a[i]!= 0) {
    i++;
  }
  return i;
}
int my_string_index(char* a, char* b) {
int c=0;
 for (int i=0;i<my_strlen(a);i++) {
     for (int j=i;j<i+my_strlen(b);j++) {
         if (a[j]!=b[j-i]) {
             break;
         }
         c++;
         if (c==my_strlen(b)-1) {
             return i;
         }
     }
 } 
 return -1;
}