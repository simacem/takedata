#include <stdio.h>
#include <mysql/mysql.h>
#include "take.c"
int main()
{
char*callback=take( "localhost","root","root","ini","kece");

int i;
// char* callback;
// printf("data_main: %c",(callback + 1));  
// printf("data_main: %c",*callback);
//fprintf(fp,callback());
//printf("data_main :%c",*callback);       
//printf("*(callback+%s) : %s\n",*(callback+0));
//printf("data_main: %c\n",*callback);
//while(*callback)
for(int  i=0; i<14;i++)
{
printf("data_main :%c\n",callback[i]);
//printf("data_main : %s \n",callback);
} 
return 0;        
}


