/**
** QWASAR.IO -- my_atoi
**
**
** @param {char*} param_1
**
** @return {int}
**
*/


int my_atoi(char* str) {
    int sum;
    int b=0;
    int sign =1;
    if (str[0]== '-')
        b=1,sign=-1;
    if (str[0]=='+')
        b=1,sign=1;
    sum = (int) str[b] - 48;
    while (str[b+1]!=0) {
        b++;
        sum=sum*10+ (int) str[b] - 48;
    }
    return sum*sign;
}