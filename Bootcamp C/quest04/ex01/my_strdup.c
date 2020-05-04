/**
** QWASAR.IO -- my_strdup
**
**
** @param {char*} param_1
**
** @return {char*}
**
*/


char* my_strdup(char* a) {
    char* b = (char*)malloc((strlen(a)+1)*sizeof(char));
    for (int i=0;i<strlen(a);i++) {
        b[i]=a[i];
    }
    return b;
}