
int check(char *s, int n) {
  for (int i = 0; i < n; i++) {
    if (s[i] == s[n]) {
      return 0;
    }
  }
  return 1;
}

char *inter(char *s1, char *s2) {
  int sz1 = strlen(s1);
  int sz2 = strlen(s2);
  char *buf = (char *)malloc((sz1 + sz2) * sizeof(char));
  for (int i = 0; i < sz1; i++) {
    for (int j = 0; j < sz2; j++) {
      if (s1[i] == s2[j]) {
        if (check(s1, i) == 1) {
          char b[2];
          b[0] = s1[i];
          b[1] = '\0';
          strcat(buf, b);
          break;
        }
      }
    }
  }

  return (buf);
}
