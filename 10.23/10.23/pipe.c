#include<stdio.h>
#include <unistd.h>
int main()
{   //ʹ��pipe���������ܵ�
	int fd[2];
	int ret = pipe(fd);
	if (ret < 0)
	{
		perror("pipe");
		return 0;
	}
	printf("fd[0]:%d\n", fd[0]);
	printf("fd[1]:%d\n", fd[1]);//�ļ�������ֱ����pipe��������
	//ʹ��fork�����������ӽ���
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