char* my_strncpy(char* a, char* b, int c) {
    int i=0;
    while(b[i]!=0) {
        if (i==c) {break;}
        a[i]=b[i];
        i++;
    }
    a[i]=0;
    return (a);
}