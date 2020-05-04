/**
** QWASAR.IO -- my_count_on_it
**
*  typedef struct s_string_array {
*    int size;
*    char** array;
*  } string_array;

* typedef struct s_integer_array {
*   int size;
*   int* array;
* } integer_array;

**
** @param {string_array*} param_1
**
** @return {integer_array*}
**
*/

integer_array* my_count_on_it(string_array* a) {
    int size = a->size;
    integer_array* b;
    b->size = size;
    int c[size];
    for (int i=0;i<size;i++) {
        c[i]=strlen(a->array[i]);
    }
    b->array = c;
    return b;
}