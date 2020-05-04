/**
** QWASAR.IO -- my_iterative_factorial
**
**
** @param {int} param_1
**
** @return {int}
**
*/


int my_iterative_factorial(int a) {
    int f=1;
    for (int i=1;i<=a;i++) {
        f=f*i;
    }
    return f;
}