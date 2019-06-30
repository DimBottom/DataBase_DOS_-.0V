#include <iostream>
#include <string>
#include "Database.h"
#include "Function.h"
using namespace std;

int main()
{
	//循环内的代码通过mainChoice来实现程序的退出和新数据库的创建。如果主菜单中选择程序退出，循环break，程序结束；如果选择了创建新的数据库，则本次循环被跳过，在第二次循环后，由于变量是动态在循环内创建的，会重新初始化
	Database MyData("MyData");
	cout << "欢迎使用MyData数据库管理系统DOS1.0V!" << endl;
	pause();
	system("cls");
	while (true)
	{
		int mainChoice = 0;
		string preName = "MyData";
		static int posNum = 0;
		string name = preName + to_string(posNum);
		Database MyData(name);
		function_main(MyData, mainChoice);
		posNum++;//数据库自动命名的后缀名是依据数据库创建次数递增的
		if (mainChoice == -1)
			break;
		if (mainChoice == 1)
			continue;
	} 
	cout << "欢迎再次使用本数据库!" << endl;
	return 0;
}
