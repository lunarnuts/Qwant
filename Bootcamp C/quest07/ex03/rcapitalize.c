/**
** QWASAR.IO -- rcapitalize
**
**
** @param {char*} param_1
**
** @return {char*}
**
*/
char *reverseStr(char *str, int len) {
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = temp;
  }
  return str;
}

char *rcapitalize(char *str) {
  int l = strlen(str);
  reverseStr(str, l);

	for(int i=0; str[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; 
			continue; 
		}
		if (str[i]==' ')
		{
            while (str[i]==' ') {
			    i++;
            }
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}
	}
	
	reverseStr(str, l);
	
	return str;
}