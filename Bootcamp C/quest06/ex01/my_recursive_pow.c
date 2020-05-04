/**
** QWASAR.IO -- my_recursive_pow
**
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int}
**
*/


int my_recursive_pow(int nb, int pow) {
    if (pow==0) {
        return 1;
    }
    pow--;
    return nb*my_recursive_pow(nb, pow);
}