#include <iostream>
#include <string>
#include "Database.h"
#include "Function.h"
using namespace std;

int main()
{
	Database MyData("MyData");
	cout << "��ӭʹ��MyData���ݿ����ϵͳDOS1.0V!" << endl;
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
	cout << "��ӭ�ٴ�ʹ�ñ����ݿ�!" << endl;
	return 0;
}
