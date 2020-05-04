/**
** QWASAR.IO -- is_anagram
**
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/

int is_anagram(char *str1, char *str2) {
  int s=0;
  for (int i = 0; i < strlen(str1); i++) {
    s = s ^ str1[i] ^ str2[i];
  }
  if (s == 0) {
    return 1;
  }
  return 0;
}