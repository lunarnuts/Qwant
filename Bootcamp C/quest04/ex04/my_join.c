/**
** QWASAR.IO -- my_join
**
*  typedef struct s_string_array {
*    int size;
*    char** array;
*  } string_array;

**
** @param {string_array*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/
int my_count_on_it(string_array* a) {
    int size = a->size;
    int b;
    for (int i=0;i<size;i++) {
        b+=strlen(a->array[i]);
    }
    return b;
}

char* my_join(string_array* a, char* s) {
    char* e = 0;
    if (a->size==0) {
        return e;
    }
    int sz = my_count_on_it(a);
    char* str=(char*)malloc((sz+1)*sizeof(char));
    int j;
    for (int i=0;i<a->size;i++) {
        strcat(str,a->array[i]);
        if (i==(a->size-1)) {
            break;
        }
        strcat(str,s);
    }
    return str;
}