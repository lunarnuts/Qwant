/**
** QWASAR.IO -- my_strip
**
**
** @param {char*} param_1
**
** @return {char*}
**
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strcomp(char *str, char *sep, int i) {
  int l = strlen(sep);
  for (int k = 0; k < l; k++) {
    if (sep[k] != str[i + k]) {
      return 0;
    };
  }
  return 1;
}
string_array *my_split(char *str) {
  int i, j, k;
  char **buf;
  string_array *s = (string_array *)malloc(strlen(str) * sizeof(string_array));
  i = 0, k = 0;
  if (!(buf = (char **)malloc(sizeof(char *)*200)))
    return (NULL);
  while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    i++;
  while (str[i]) {
    j = 0;
    if (!(buf[k] = (char *)malloc(sizeof(char)*500)))
      return (NULL);
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
      buf[k][j++] = str[i++];
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
      i++;
    buf[k][j] = '\0';
    k++;
  }
  buf[k] = NULL;
  s->array = (char **)malloc(sizeof(char *)*100);
  s->array = buf;
  s->size = k;
  return (s);
  free(buf);
  free(s);
}
char *my_strip(char *str) {
    string_array *s=my_split(str);
	char **split=s->array;
    char *new=(char*)malloc(strlen(str)*sizeof(char));
    int i=0;
    while(i<s->size) {
        strcat(new,split[i]);
        if (i<s->size-1) {
            strcat(new," ");
        }
        i++;
    }
    return new;
}