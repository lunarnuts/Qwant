/**
** QWASAR.IO -- my_fibonacci
**
**
** @param {int} param_1
**
** @return {int}
**
*/


int my_fibonacci(int f) {
    int n1=1;
    int n2=1;
    int n=1;
    if (f==0) {
        return 0;
    }
    if (f<3) {
        return 1;
    }
    if (f<0) {
        return -1;
    }
    int i =2;
    while (i<f) {
        n2=n1;
        n1=n;
        n=n1+n2;
        i++;
    }
    return n;
}