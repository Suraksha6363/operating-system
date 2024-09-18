#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t p=fork();
if(p<0){
printf("forkfail");
exit(1);
}
else if(p==0){
printf("i am child process with ID :%d",getpid());
printf("my parent ID is %d",getppid());
}
else{
printf("ia am a parent process with ID :%d",getpid());
printf("my child process is %d",p);
}
}
