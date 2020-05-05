#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ItoaBasePrint(char base,...);
int my_printf(char * restrict str, ...);

int main()
{
    int b=0xFBA;
    my_printf("%s%s%s%s%s\n","H","E","L","L","O");
    printf("%s%s%s%s%s\n","H","E","L","L","O");
    return 0;
}

void printstr(char* c) {
    int i=0;
    while (c[i]!=0) {
        char cc=c[i];
        write(1,&cc,1);
        i++;
    }
}
int my_printf(char *restrict str, ...) {
    va_list argsptr;
    int i=0;
    int n;
    long int ln;
    unsigned int un;
    char c;
    va_start(argsptr,str);
    while(str[i]!='\0') {
        if(str[i]=='%'){
            i++;
            switch (str[i]) {
                case 'd':
                    n=va_arg(argsptr,int);
                    ItoaBasePrint('d',n);
                    break;
                case 'D':
                    n=va_arg(argsptr,int);
                    ItoaBasePrint('d',n);
                    break;
                case 'o':
                    n=va_arg(argsptr,int);
                    ItoaBasePrint('o',n);
                    break;
                case 'O':
                    n=va_arg(argsptr,int);
                    ItoaBasePrint('o',n);
                    break;
                case 'u':
                    un=va_arg(argsptr,unsigned int);
                    ItoaBasePrint('u',un);
                    break;
                case 'U':
                    un=va_arg(argsptr,unsigned int);
                    ItoaBasePrint('u',un);
                    break;
                case 'x':
                    n=va_arg(argsptr,int);
                    ItoaBasePrint('x',n);
                    break;
                case 'X':
                    n=va_arg(argsptr,int);
                    ItoaBasePrint('x',n);
                    break;
                case 'c':
                    c=(char)va_arg(argsptr,int);
                    write(1,&c,1);
                    break;
                case 'C':
                    c=(char)va_arg(argsptr,int);
                    write(1,&c,1);
                    break;
                case 's':
                    printstr(va_arg(argsptr,char*));
                    break;
                case 'S':
                    printstr(va_arg(argsptr,char*));
                    break;
                case 'p':
                    printstr("0x");
                    ln=(long int)va_arg(argsptr,void*);
                    ItoaBasePrint('p',ln);
                case 'P':
                    printstr("0x");
                    ln=(long int)va_arg(argsptr,void*);
                    ItoaBasePrint('p',ln);
                default:
                    write(1,"%",1);
                    continue;
            }
            i++;
            continue;
        }
        c=str[i];
        write(1,&c,1);
        i++;
    }
    va_end(argsptr);
    return 1;
}

void ItoaBasePrint(char base,...) {
    char *OCTA="01234567";
    char *DEC="0123456789";
    char *HEX="0123456789abcdef";
    int UDEC=10;
    char *conv;
    char *basestring;
    int basenum =10;
    va_list Elem;
    va_start(Elem,base);
    int num;
    unsigned int unum;
    char c;
    char *str;
    unsigned long lnum;
    switch (base) {
        case 'o':
            basestring = OCTA;
            basenum =8;
            num=va_arg(Elem,int);
            break;
        case 'x':
            basestring = HEX;
            basenum = 16;
            num=va_arg(Elem,int);
            break;
        case 'd':
            basestring = DEC;
            num=va_arg(Elem,int);
            break;
        case 'u':
            basestring = DEC;
            unum=va_arg(Elem,unsigned int);
            unsigned int buf = unum;
            int ct =0;
            while(buf!=0) {
                ct++;
                buf=buf/basenum;
            }
            buf = unum;
            int l =ct;
            conv = (char*)malloc((ct+1)*sizeof(char));
            while(buf!=0) {
                ct--;
                conv[ct]=basestring[buf%basenum];
                buf=buf/basenum;
            }
            conv[l]='\0';
            printstr(conv);
            free(conv);
            va_end(Elem);
            return;
        case 'p':
            basestring = HEX;
            long int basenuml=16;
            lnum=va_arg(Elem,long int);
            long int bufl = lnum;
            int ctl =0;
            while(bufl!=0) {
                ctl++;
                bufl=bufl/basenuml;
            }
            
            bufl = lnum;
            int len =ctl;
            conv = (char*)malloc((ct+1)*sizeof(char));
            while(bufl!=0) {
                ctl--;
                int r =bufl%basenuml;
                conv[ctl]=basestring[r];
                bufl=bufl/basenuml;
            }
            conv[len]='\0';
            printstr(conv);
            va_end(Elem);
            free(conv);
            return;
           
    }
    
    int buf = num;
    int sign = 1;
    if (num<0) {
        sign=-1;
        num=num*-1;
    }
    int ct =0;
    while(buf!=0) {
        ct++;
        buf=buf/basenum;
    }
    buf = num;
    int l =ct;
    conv = (char*)malloc((ct+1)*sizeof(char));
    while(buf!=0) {
        ct--;
        conv[ct]=basestring[buf%basenum];
        buf=buf/basenum;
    }
    conv[l]='\0';
    printstr(conv);
    free(conv);
    va_end(Elem);
    return;
}
