// if_else_for_while.cpp : 定义控制台应用程序的入口点。
//
#include <stdio.h>

void test_if_else(){
    char *testStr = "123456";
    int test1 = 10;

    if (testStr == "46564")
    {
        printf("46564\n");
    }else if (testStr == "123456")
    {
        printf("123456\n");
    }

    if (test1 == 11)
    {
        printf("11\n");
    }else
    {
        printf("!11\n");
    }
}

void test_for()
{
    for (int i=0; i< 10; i++)
    {
        printf("print i:%d\n",i);
    }
    printf("print for\n");

    int j = 11;
    do 
    {
        printf("print while j:%d\n",j);
    } while (j<10);
}

int main(int argc, char* argv[])
{
    test_if_else();
    test_for();

	return 0;
}

