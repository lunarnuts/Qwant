/**
** QWASAR.IO -- my_is_sort
**
* typedef struct s_integer_array {
*   int size;
*   int* array;
* } integer_array;

**
** @param {integer_array*} param_1
**
** @return {bool}
**
*/

bool my_is_sort(integer_array *a) {
    int i,diff1,diff2;
    while (i+2<a->size) {
        diff1=a->array[i]-a->array[i+1];
        diff2=a->array[i+1]-a->array[i+2];
        if (diff1<0&&diff2>0||diff1>0&&diff2<0) {
            return 0;
        }
        i++;
    }
    return 1;
}