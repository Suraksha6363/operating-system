#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
int main ()
{
pid_t p=fork();
if(p==0){
printf("i am the child process and with id:%d",getpid());
printf("my parent id is :%d",getppid());
}else if(p>0){
printf("i am the parent process with id:%d",getpid()); 
printf("my  child process is %d",p);
}if(p<0){
printf("fork fail");
exit(1);
}
printf("hello all,my process id is %d \n ",getpid());
if(p<0){
printf("fork fail");
}if(p==0){
printf("i am a child");
}else{
printf("i am a parent process");
}
if(p==0){
printf("child process");
}else{
printf("parent process");
wait(NULL);
printf("child has terminated");
}
}
