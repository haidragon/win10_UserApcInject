// testexe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>

int main()
{
	while (1)
	{
		printf("来注入吧\n");
		SleepEx(1000, TRUE);  //FALSE APC是不被执行的
	}
    return 0;
}

