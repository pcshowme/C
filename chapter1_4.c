/***************************************
* C Programming in Linux
* SourceFile: chapter1_4.c
* Executable: hello4
* Created: 2013-11-10
* Modified: 2013-11-10
***************************************/
***************************************/
#include <stdio.h>

int main(int argc, char *argv[], char *env[])
{
                int i=0;
        printf("Content-type:text/plain\n\n");
        printf("Hello, you are learning C!!\n");
        printf("Number of arguments in the main function:%d\n", argc);
                for(i=0;i<argc;i++)
                {
					printf("argument number %d is %s\n",i,argv[i]);
                }
        i=0;
        printf("Environment Variables:\n");
        while(env[i])
        {
                printf("env[%d]= %s\n",i,env[i]);
                i++;
        }
        return 0;
}
