/**
** QWASAR.IO -- my_strcpy
**
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/


char* my_strcpy(char* a, char* b) {
    int i=0;
    while(b[i]!=0) {
        a[i]=b[i];
        i++;
    }
    a[i]=0;
    return (a);
}