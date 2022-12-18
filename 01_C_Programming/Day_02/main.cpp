#include <stdio.h>

int main(int argc, char* argv[]){

    // 测试一下你的编译器short\int\long\long long数据类型依次占据多大的内存空间
    short       test_1 = 0;
    int         test_2 = 0;
    long        test_3 = 0;
    long long   test_4 = 0;
    printf("short\t\t: %d\n",   sizeof(test_1));
    printf("int\t\t\t: %d\n",   sizeof(test_2));
    printf("long\t\t: %d\n",    sizeof(test_3));
    printf("long long\t: %d\n", sizeof(test_4));

    // int a = -1234, b = 2345，根据a和b的首地址，说出a和b所占据的内存空间各个字节的内存数据
    int a = -1234, b = 2345;
    int *ptr_a = &a, *ptr_b = &b;
    char temp = '.';
    printf("%c", *ptr);
    printf("%d", temp);

    //
}