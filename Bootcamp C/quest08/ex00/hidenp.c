/**
** QWASAR.IO -- hidenp
**
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {int}
**
*/
int hidenp(char* first,char* second) {

	if (first[0] == '\0') {
		return 1;
	}
	if (second[0] == '\0') {
		return 0;
	}

	int i = 0, j = 0,count = 0;
    int l1=strlen(first);
    int l2=strlen(second);

	while (i < l1) {
		while (j < l2) {
			if (first[i] == second[j]) {
				count++;
				i++;
			}
			if (i == l1) {
				break;
			}
			j++;
		}
		i++;
	}

	if (count == l1) {
		return 1;
	}
    return 0;
}