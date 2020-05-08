#define RED "\x1B[31mRED\x1B[0m"
#define GREEN "\x1B[32mGREEN\x1B[0m"
#define NORMAL "\x1B[0mNORMAL"
#include "myprintf.h"

int ItoaBasePrint(char base,...);
int my_printf(char * restrict str, ...);
void test_0();
void test_1();
void test_2();
void test_3();
void test_4();
void test_5();
void test_6();
void test_7();
void test_8();

int main()
{
    test_0();
    test_1();
    test_2();
    test_3();
    test_4();
    test_5();
    test_6();
    test_7();
    test_8();
    return 0;
}
void test_0() {
  printf("<#0>\n");
  int my_printf_ret_value = my_printf("Hello world!\n");
  int printf_ret_value = printf("Hello world!\n");
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#0>\n");
}

void test_1() {
  printf("<#1>\n");
  int my_printf_ret_value = my_printf("%c!\n", 'H');
  int printf_ret_value = printf("%c!\n", 'H');
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#1>\n");
}

void test_2() {
  printf("<#2>\n");
  int my_printf_ret_value = my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o');
  int printf_ret_value = printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o');
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#2>\n");
}

void test_3() {
  printf("<#3>\n");
  int my_printf_ret_value = my_printf("Hello %s!\n", "QWASAR.IO");
  int printf_ret_value = printf("Hello %s!\n", "QWASAR.IO");
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#3>\n");
}

void test_4() {
  printf("<#4>\n");
  int my_printf_ret_value = my_printf("Octo number is %o!\n", 1542);
  int printf_ret_value = printf("Octo number is %o!\n", 1542);
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#4>\n");
}

void test_5() {
  printf("<#5>\n");
  int my_printf_ret_value = my_printf("Hex number is %o!\n", 789789);
  int printf_ret_value = printf("Hex number is %o!\n", 789789);
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#5>\n");
}

void test_6() {
  printf("<#6>\n");
  int a;
  int my_printf_ret_value = my_printf("Void pointer address is %p!\n", &a);
  int printf_ret_value = printf("Void pointer address is %p!\n", &a);
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#6>\n");
}

void test_7() {
  printf("<#7>\n");
  int a;
  int my_printf_ret_value = my_printf("Null string is %s!\n", "");
  int printf_ret_value = printf("Null string is %s!\n", "");
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#7>\n");
}

void test_8() {
  printf("<#8>\n");
  int a;
  int my_printf_ret_value = my_printf("Null char is %c!\n", '\0');
  int printf_ret_value = printf("Null char is %c!\n", '\0');
  printf("%s my_printf(%d) == printf(%d) %s\n", my_printf_ret_value != printf_ret_value ? RED : GREEN , my_printf_ret_value, printf_ret_value, NORMAL);
  printf("</#8>\n");
}