/**
** QWASAR.IO -- my_union
**
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/
int check(char *s, int n) {
  for (int i = 0; i < n; i++) {
    if (s[i] == s[n]) {
      return 0;
    }
  }
  return 1;
}
char *my_union(char *s1, char *s2) {
  int sz1 = strlen(s1);

  int sz2 = strlen(s2);
  char *buf = (char *)malloc((sz1 + sz2) * sizeof(char));
  strcat(s1, s2);
  for (int i = 0; i < (sz1 + sz2); i++) {
    if (check(s1, i) == 1) {
      char b[2];
      b[0] = s1[i];
      b[1] = '\0';
      strcat(buf, b);
    }
  }

  return (buf);
}
