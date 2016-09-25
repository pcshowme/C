/***************************************
* C Programming in Linux
* SourceFile: chapter1_2.c
* Executable: hello2
* Created: 2013-11-10
* Modified: 2013-11-10
***************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
                int i=0;
        printf("Hello, you are learning C!!\n");
        printf("Number of arguments in the main function:%d\n", argc);
                for(i=0;i<argc;i++)
                {
                printf("argument number %d is %s\n",i,argv[i]);
                }
        return 0;
}
