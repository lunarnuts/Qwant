/**
** QWASAR.IO -- my_iterative_pow
**
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int}
**
*/


int my_iterative_pow(int nb, int pow) {
    int sum=1;
    for (int i=0;i<pow;i++) {
        sum=sum*nb;
    }
    return sum;
}