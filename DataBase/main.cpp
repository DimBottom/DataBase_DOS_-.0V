#include <iostream>
#include <string>
#include "Database.h"
#include "Function.h"
using namespace std;

int main()
{
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
		posNum++;
		if (mainChoice == -1)
			break;
		if (mainChoice == 1)
			continue;
	} 
	cout << "欢迎再次使用本数据库!" << endl;
	return 0;
}
