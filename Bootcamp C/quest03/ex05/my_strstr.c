/**
** QWASAR.IO -- my_strstr
**
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char *my_strstr(char *str, char *to_find) {
  int pos, x;
  pos = 0;
  x = 0;
  if (to_find[0] == 0) {
    return str;
  }
  while (str[pos] != 0) {
    if (str[pos] == to_find[x]) {
      x++;
      pos++;
      if (to_find[x] == 0) {
        return (&str[pos - x]);
      }
      continue;
    }
    pos=pos-x;
    x = 0;
    pos++;
  }
  return (0);
}