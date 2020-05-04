/**
** QWASAR.IO -- my_strrchr
**
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/


char* my_strrchr(char* str, char to_find) {
	int	pos,x;
	pos=0; x= 0;
	while (str[pos] != 0)
	{
		if (str[pos] == to_find) {
            x= pos;
		}
		pos++;
	}
    if (x==0) {
        return 0;
    }
	return (&str[x]);
}