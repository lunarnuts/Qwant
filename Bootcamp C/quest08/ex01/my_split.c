/**
** QWASAR.IO -- my_split
**
*  typedef struct s_string_array {
*    int size;
*    char** array;
*  } string_array;

**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {string_array*}
**
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strcomp(char *str, char *sep, int i) {
  int l = strlen(sep);
  for (int k = 0; k < l; k++) {
    if (sep[k] != str[i + k]) {
      return 0;
    };
  }
  return 1;
}
string_array *my_split(char *str, char *sep) {
  int i, j, k;
  char **buf;
  int ls = strlen(sep);
  string_array *s = (string_array *)malloc(strlen(str) * sizeof(string_array));
  if (ls == 0) {
    return s;
  }
  i = 0, k = 0;
  if (!(buf = (char **)malloc(sizeof(char *)*200)))
    return (NULL);
  while (strcomp(str, sep, i))
    i += ls;
  while (str[i]) {
    j = 0;
    if (!(buf[k] = (char *)malloc(sizeof(char)*2000)))
      return (NULL);
    while (strcomp(str, sep, i) == 0 && str[i])
      buf[k][j++] = str[i++];
    while (strcomp(str, sep, i))
      i += ls;
    buf[k][j] = '\0';
    k++;
  }
  buf[k] = NULL;
  s->array = (char **)malloc(sizeof(char *)*400);
  s->array = buf;
  s->size = k;
  return (s);
  free(buf);
  free(s);
}