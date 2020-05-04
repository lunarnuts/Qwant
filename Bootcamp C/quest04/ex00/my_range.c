/**
** QWASAR.IO -- my_range
**
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int*}
**
*/


int* my_range(int min, int max) {
    int size = max - min;
    int* a = (int*)malloc((size+1)*sizeof(int));
    for (int i=0;i<size;i++) {
        a[i]=min;
        min++;
    }
    return a;
}