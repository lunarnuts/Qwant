/**
** QWASAR.IO -- my_print_words_array
**
*  typedef struct s_string_array {
*    int size;
*    char** array;
*  } string_array;

**
** @param {string_array*} param_1
**
** @return {void}
**
*/


void my_print_words_array(string_array* a) {
    int size = a->size;
    char** b = a->array;
    char* word;
    for (int i=0;i<size;i++) {
        for (int j=0;j<strlen(b[i]);j++) {
            printf("%c",b[i][j]);
        }
        printf("\n");
    }
}