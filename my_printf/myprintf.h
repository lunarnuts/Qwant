#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printstr(char* c);
char ToLower(char a);
int ItoaBasePrint(char base,...);
int my_printf(char * restrict str, ...);
char* ConvertBaseString(long long num,long long basenum,char* basestring, char *conv);

int printstr(char* c) {
    int i=0;
    if (c==NULL) {
        return 0;
    } 
    while (c[i]!=0) {
        char cc=c[i];
        write(1,&cc,1);
        i++;
    }
    return i;
}

char ToLower(char a){
    if (a>='A'&&a<='Z') {
        a=a+32;
    }
    return a;
}

int my_printf(char *restrict str, ...) {
    va_list argsptr;
    int i=0,ch=0;
    long int ln;
    unsigned int un;
    char c; char* s;
    va_start(argsptr,str);
    while(str[i]!='\0') { //no need to buffer because all the printing is done in 1 loop
        if(str[i]=='%'){
            i++;
            char b =ToLower(str[i]);
            switch (b) {
                case 'u':
                    un=va_arg(argsptr,unsigned int);
                    ch+=ItoaBasePrint('u',un);
                    break;
                case 'c':
                    c=(char)va_arg(argsptr,int);
                    write(1,&c,1);
                    ch++;
                    break;
                case 's':
                    if ((s=va_arg(argsptr,char*))!=NULL) {
                        ch+=printstr(s);
                    }
                    break;
                case 'p':     
                    ln=(long int)va_arg(argsptr,void*);
                    if (ln==(long int)NULL) {
                        printstr("(nil)");
                        break;
                    }
                    printstr("0x");
                    ch+=2;
                    ch+=ItoaBasePrint('p',ln);
                    break;
                case '%':
                    write(1,"%",1);
                    ch++;
                    continue;
                default: //illegal calls like %k etc will not be processed as they are not listed in switch cases in support func ItoaBasePrint
                    ln=va_arg(argsptr,long long);
                    ch+=ItoaBasePrint(b,ln);
                    break;
            }
            i++;
            continue;
        }
        c=str[i];
        write(1,&c,1);
        ch++;
        i++;
    }
    va_end(argsptr);
    return ch;
}

int ItoaBasePrint(char base,...) {
    char *conv;
    va_list Elem;
    va_start(Elem,base);
    int ch;
    switch (base) {
        case 'o':
            conv=ConvertBaseString(va_arg(Elem,long long), 8, "01234567", conv);
            break;
        case 'x':
            conv=ConvertBaseString(va_arg(Elem,long long), 16, "0123456789abcdef", conv);
            break;
        case 'd':
            conv=ConvertBaseString(va_arg(Elem,long long), 10, "0123456789", conv);
            break;
        case 'u':
            conv=ConvertBaseString(va_arg(Elem,long long), 8, "0123456789", conv);
            break;
        case 'p':
            conv=ConvertBaseString(va_arg(Elem,long long), 16, "0123456789abcdef", conv);
            break;
    }
    ch=printstr(conv);
    va_end(Elem);
    return ch;
}

char *ConvertBaseString(long long num,long long basenum,char* basestring, char *conv){
    long long buf = num;
    int ct = 0, l = 0, sign;
    if (num<0) {
        sign=-1;
        ct++;
        num*=-1;  
    }
    while(buf!=0) {
        ct++;
        buf=buf/basenum;
    }
    buf = num;
    conv = (char*)malloc((ct+1)*sizeof(char));
    conv[ct]='\0';
    while(buf!=0) {
        ct--;
        conv[ct]=basestring[buf%basenum];
        buf=buf/basenum;
    }
    if (sign<0) {
        conv[0]='-';
    }
    
    return conv;
}