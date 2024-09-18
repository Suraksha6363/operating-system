#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
pid_t p=fork();
if(p<0){
printf("fork fail");
exit(1);
}
printf("hello all, my process ID is %d \n ", getpid());
}
