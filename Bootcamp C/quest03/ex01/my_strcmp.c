/**
** QWASAR.IO -- my_strcmp
**
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/


int my_strcmp(char* a, char* b) {
    int x = 0;
    while(a[x]!=0&&b[x]!=0) {
        if (a[x]>b[x]) {
            return 1;
        } else if (a[x]<b[x]) {
            return -1;
        }
        x++;
    }
    if (strlen(a)>strlen(b)) {
        return 1;
    } else if (strlen(a)<strlen(b)) {
        return -1;
    }
    return 0;
}