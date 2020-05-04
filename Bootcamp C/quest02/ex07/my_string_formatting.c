/*
*
* @param {char*} a
* @param {char*} b
* @param {int} c
*
* @return {char*}
*
*/
extern int sprintf(char *, const char *, ...);
char* my_string_formatting(char* a, char* b, int c) {
    char* s;
    sprintf(s,"Hello, my name is %s %s, I'm %d.", a,b,c);
    return s;
}