#include <iostream>
#include <string>
#include "Database.h"
#include "Function.h"
using namespace std;

int main()
{
	//ѭ���ڵĴ���ͨ��mainChoice��ʵ�ֳ�����˳��������ݿ�Ĵ�����������˵���ѡ������˳���ѭ��break��������������ѡ���˴����µ����ݿ⣬�򱾴�ѭ�����������ڵڶ���ѭ�������ڱ����Ƕ�̬��ѭ���ڴ����ģ������³�ʼ��
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
		posNum++;//���ݿ��Զ������ĺ�׺�����������ݿⴴ������������
		if (mainChoice == -1)
			break;
		if (mainChoice == 1)
			continue;
	} 
	cout << "��ӭ�ٴ�ʹ�ñ����ݿ�!" << endl;
	return 0;
}
