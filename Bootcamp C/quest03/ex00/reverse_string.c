/*
* @param {char*} a
*
* @return {char*}
*
*/

char* reverse_string(char* a) {
    char tmp;
    int i;
    int j;

    i = 0;
    j = strlen(a) - 1;
    while (i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        j--;
        i++;
    }
    return (a);
}