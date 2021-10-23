#include<stdio.h>
#include <unistd.h>
int main()
{   //使用pipe函数创建管道
	int fd[2];
	int ret = pipe(fd);
	if (ret < 0)
	{
		perror("pipe");
		return 0;
	}
	printf("fd[0]:%d\n", fd[0]);
	printf("fd[1]:%d\n", fd[1]);//文件描述符直接由pipe函数分配
	//使用fork函数创建父子进程
	pid_t pid = fork();
	if (pid < 0)
	{
		perror("fork");
		return 0;
	}
	else if (pid == 0)
	{
		//child
		char buf[1024] = { 0 };
		read(fd[0], buf, sizeof(buf)-1);
		printf("i am child:buf is %s\n", buf);
	}
	else
	{
		//father
		write(fd[1], "i am father,"15);
	}
	while (1)
	{
		sleep(1);
	}
	return 0;

}