/*
*
* @param {char*} a
*
* @return {char*}
*
*/

char* my_capitalize(char* a) {
    int j=0;
    while(a[j]!=0){
        if (a[j]>=65&&a[j]<=90) {
            break;
        } else if (a[j]>=97&&a[j]<=122) {
            a[j]-=32;
            break;
        }
        j++;
    }
    
  int i=j+1;
  while(a[i]!=0) {
      if (a[i]>=65&&a[i]<=90) {
      a[i]+=32;
      }
      i++;
  }
  return a;
}