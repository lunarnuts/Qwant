/**
** QWASAR.IO -- my_recursive_factorial
**
**
** @param {int} param_1
**
** @return {int}
**
*/


int my_recursive_factorial(int a) {
    if (a>1) {
        return a*my_recursive_factorial(a-1);
    }
    return 1;
}