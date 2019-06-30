#include "Function.h"
#include <iomanip>
#include <cstdlib>
using namespace std;

//systemMnuePrint
void printControl_main(Database base)
{
	cout << "���ݿ�����: " << base.getName() << endl;
	cout << "��ǰ��: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "���С: " << base.getRowSize() - 1 << "�С�" << base.getColumnSize() << "��" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "��������:" << endl;
	cout << "1���ļ�" << endl;
	cout << "2�����ݿ�" << endl;
	cout << "3���༭" << endl;
	cout << "4������" << endl;
	cout << "5����ӡ" << endl;
	//cout << "6������" << endl; //������ӡ�ó����һЩ˵����δ�������ʵ��
	cout << "*���˳����ݿ�" << endl;
	cout << "��ѡ����: ";
}

void printControl_file(Database base)
{
	cout << "���ݿ�����: " << base.getName() << endl;
	cout << "��ǰ��: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "���С: " << base.getRowSize() - 1 << "�С�" << base.getColumnSize() << "��" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}

	cout << "�ļ� ������:" << endl;
	cout << "1���������ݿ�" << endl;
	cout << "2�������ݿ�" << endl;
	cout << "3���������ݿ�" << endl;
	cout << "4�����ݿ����Ϊ" << endl;
	cout << "5��������ǰ��" << endl;
	cout << "6�����������" << endl;
	cout << "7�������" << endl;
	cout << "*��������һ���˵�" << endl;
	cout << "��ѡ����: ";
}

void printControl_base(Database base)
{
	cout << "���ݿ�����: " << base.getName() << endl;
	cout << "��ǰ��: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "���С: " << base.getRowSize() - 1 << "�С�" << base.getColumnSize() << "��" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "���ݿ� ������:" << endl;
	cout << "1���������ݿ�" << endl;
	cout << "2���޸����ݿ�����" << endl;
	cout << "3��������" << endl;
	cout << "4���򿪱�" << endl;
	cout << "5���رձ�" << endl;
	cout << "6��ɾ��ָ����" << endl;
	cout << "*��������һ���˵�" << endl;
	cout << "��ѡ����: ";
}

void printControl_table(Database base)
{
	cout << "���ݿ�����: " << base.getName() << endl;
	cout << "������: " << base.getTableName(base.getMark()) << endl;
	if (base.getMark() != -1)
	{
		cout << "���С: " << base.getRowSize() - 1 << "�С�" << base.getColumnSize() << "��" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "�༭ ������:" << endl;
	cout << "1��������" << endl;
	cout << "2���򿪱�" << endl;

	if (base.getMark() != -1)
	{
		cout << "3���رձ�" << endl;
		cout << "4��ɾ����ǰ��" << endl;
		cout << "a�����Ӽ�¼" << endl;
		cout << "b�������ֶ�" << endl;
		cout << "c�������¼" << endl;
		cout << "d�������ֶ�" << endl;
		cout << "e��ɾ��ָ����¼" << endl;
		cout << "f��ɾ��ָ���ֶ�" << endl;
		cout << "g���޸ĵ�ǰ����ֶ�����" << endl;
		cout << "h���޸ĵ�ǰ��ļ�¼����" << endl;
		cout << "i���޸ĵ�ǰ����ֶ�����" << endl;
		cout << "j���޸ĵ�ǰ�������" << endl;
	}
	cout << "*��������һ���˵�" << endl;
	cout << "��ѡ����: ";
}

void printControl_search(Database base)
{
	cout << "���ݿ�����: " << base.getName() << endl;
	cout << "��ǰ��: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "���С: " << base.getRowSize() - 1 << "�С�" << base.getColumnSize() << "��" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "���� ������:" << endl;
	cout << "1�����ݿ��в���" << endl;
	cout << "2�����в���" << endl;
	cout << "*��������һ���˵�" << endl;
	cout << "��ѡ����: ";
}

void printControl_printf(Database base)
{
	cout << "���ݿ�����: " << base.getName() << endl;
	cout << "��ǰ��: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "���С: " << base.getRowSize() - 1 << "�С�" << base.getColumnSize() << "��" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "��ӡ ������:" << endl;
	cout << "1���鿴���б�" << endl;
	cout << "2����ӡָ����" << endl;
	cout << "3���Ƿ���ʾ��ǰ��: ";
	if (isPrint)
	{
		cout << "��ʾ" << endl;
	}
	else
	{
		cout << "�ر�" << endl;
	}
	cout << "4����ӡ��ǰ��" << endl;
	cout << "*��������һ���˵�" << endl;
	cout << "��ѡ����: ";
}

//systemMnue
void function_main(Database & base, int& mainChoice)
{
	system("cls");

	while (true)
	{
		printControl_main(base);
		char choose;
		cin >> choose;
		if (choose == '*')
		{
			system("cls");
			mainChoice = -1;
			break;
		}
		switch (choose)
		{
		case '1':
			function_file(base, mainChoice);
			break;
		case '2':
			function_base(base, mainChoice);
			break;
		case '3':
			function_table(base);
			break;
		case '4':
			function_search(base);
			break;
		case '5':
			function_printf(base);
			break;
		// case '6':
			//��������һ�������������ܵĽӿ�
			// break;
		default:
			cout << "������ѡ����!" << endl;
			pause();
			system("cls");
		}
		if (mainChoice == 1)
			break;
	}
}

void function_file(Database & base, int& mainChoice)
{
	system("cls");
	while (true)
	{
		printControl_file(base);
		char choose;
		cin >> choose;
		if (choose == '*')
		{
			system("cls");
			break;
		}
		switch (choose)
		{
		case '1':
			mainChoice = 1;
			break;
		case '2':
			loadDatabase(base);
			break;
		case '3':
			saveBase(base);
			break;
		case '4':
			saveBaseAs(base);
			break;
		case '5':
			exportTable(base);
			break;
		case '6':
			exportCertainTable(base);
			break;
		case '7':
			loadTable(base);
			break;
		default:
			cout << "������ѡ����!" << endl;
			pause();
			system("cls");
		}
		if (mainChoice == 1)
			break;
	}
}

void function_base(Database & base, int& mainChoice)
{
	system("cls");
	while (true)
	{
		printControl_base(base);
		char choose;
		cin >> choose;
		if (choose == '*')
		{
			system("cls");
			break;
		}
		switch (choose)
		{
		case '1':
			mainChoice = 1;
			break;
		case '2':
			changeBaseName(base);
			break;
		case '3':
			createTable(base);
			break;
		case '4':
			openTable(base);
			break;
		case '5':
			closeTable(base);
			break;
		case '6':
			deleteCertainTable(base);
			break;
		default:
			cout << "������ѡ����!" << endl;
			pause();
			system("cls");
		}
		if (mainChoice == 1)
			break;
	}
}

void function_table(Database & base)
{
	system("cls");
	while (true)
	{
		printControl_table(base);
		char choose;
		cin >> choose;
		if (choose == '*')
		{
			system("cls");
			break;
		}
		if (base.getMark() == -1)
		{
			switch (choose)
			{
			case '1':
				createTable(base);
				break;
			case '2':
				openTable(base);
				break;
			default:
				cout << "������ѡ����!" << endl;
				pause();
				system("cls");
			}
		}
		else
		{
			switch (choose)
			{
			case '1':
				createTable(base);
				break;
			case '2':
				openTable(base);
				break;
			case '3':
				closeTable(base);
				break;
			case '4':
				deleteTable(base, 't');
				break;
			case 'a':
				addRow(base);
				break;
			case 'b':
				addColumn(base);
				break;
			case 'c':
				insertRow(base);
				break;
			case 'd':
				insertColumn(base);
				break;
			case 'e':
				deleteRow(base);
				break;
			case 'f':
				deleteColumn(base);
				break;
			case 'g':
				changeColumnName(base);
				break;
			case 'h':
				changeRowData(base);
				break;
			case 'i':
				changeColumnData(base);
				break;
			case 'j':
				changeRangeData(base);
				break;
			default:
				cout << "������ѡ����!" << endl;
				pause();
				system("cls");
			}
		}
	}
}

void function_search(Database & base)
{
	system("cls");
	while (true)
	{
		printControl_search(base);
		char choose;
		cin >> choose;
		if (choose == '*')
		{
			system("cls");
			break;
		}
		switch (choose)
		{
		case '1':
			searchInBase(base);
			break;
		case '2':
			searchInTable(base);
			break;
		case '3':
			printAllTableInformation(base);
			break;
		case '4':
			printCertainTable(base);
			break;
		default:
			cout << "������ѡ����!" << endl;
			pause();
			system("cls");
		}
	}
}

void function_printf(Database & base)
{
	system("cls");
	while (true)
	{
		printControl_printf(base);
		char choose;
		cin >> choose;
		if (choose == '*')
		{
			system("cls");
			break;
		}
		switch (choose)
		{
		case '1':
			printAllTableInformation(base);
			break;
		case '2':
			printCertainTable(base);
			break;
		case '3':
			changeIsPrint();
			break;
		case '4':
			printTable(base);
			break;
		default:
			cout << "������ѡ����!" << endl;
			pause();
			system("cls");
		}
	}
}

//Base
void changeBaseName(Database& base)
{
	string newName;
	cout << "�������µ����ݿ�����: ";
	cin >> newName;
	base.changeName(newName);
	cout << "�޸ĳɹ�!" << endl;
	pause();
	system("cls");
}

void loadDatabase(Database 
	& base)
{
	string loadPath;
	cout << "������Ŀ�����ݿ��ļ���(����·��): ";
	cin >> loadPath;
	base.loadDatabase(loadPath);
	pause();
	system("cls");
}

void loadTable(Database & base)
{
	string loadPath;
	cout << "������Ŀ����ļ���(����·��): ";
	cin >> loadPath;
	base.loadTable(loadPath);
	pause();
	system("cls");
}

void saveBase(Database & base)
{
	if (base.getDefaultPath() == "")
	{
		saveBaseAs(base);
	}
	else
	{
		base.saveDatabase();
		pause();
		system("cls");
	}
}

void saveBaseAs(Database & base)
{
	string savePath;
	string fileName;
	cout << "������Ҫ������ļ���: ";
	cin >> fileName;
	cout << "������Ϸ��ı���·��,������skip����: ";
	cin >> savePath;
	if (savePath != "skip")
		savePath = savePath + "\\" + fileName + ".csv";
	else
		savePath = fileName + ".csv";
	base.saveDatabaseAs(savePath);
	pause();
	system("cls");
}

void exportTable(Database & base)
{
	string Path;
	string fileName;
	string savePath;
	int mark = base.getMark();
	if (mark != -1)
	{
		fileName = base.getTableName(mark);
		cout << "������Ϸ��ı���·��,������skip����,�ļ���������: ";
		cin >> Path;
		if (Path != "skip")
			savePath = Path + "\\" + fileName + ".csv";
		else
			savePath = fileName + ".csv";
		base.exportTable(savePath, mark);
	}
	else
		cout << "��ǰδ�򿪱��޷�����!" << endl;
	pause();
	system("cls");
}

void exportCertainTable(Database & base)
{
	int mark;
	string tableName;
	vector<int> tableMarks;
	cout << "��������Ҫ�����ı������(����END����):";
	do
	{
		cin >> tableName;
		mark = base.getMark(tableName);
		if (mark != -1)
			tableMarks.push_back(mark);
		else if (tableName != "END")
			cout << "������\""<< tableName <<"\"��!" << endl;
	} while (tableName != "END");
	int size = tableMarks.size();
	string Path;
	string fileName;
	string savePath;
	if (size != 0)
	{
		cout << "������Ϸ��ı���·��,������skip����: ";
		cin >> Path;
	}
	for (int i = 0; i < size; i++)
	{
		fileName = base.getTableName(tableMarks[i]);
		if (Path != "skip")
			savePath = Path + "\\" + fileName + ".csv";
		else
			savePath = fileName + ".csv";
		base.exportTable(savePath, tableMarks[i]);
	}
	pause();
	system("cls");
}

void deleteCertainTable(Database & base)
{
	int mark;
	string name;
	cout << "������Ҫɾ���ı������: ";
	cin >> name;
	mark = base.getMark(name);
	if (mark != -1)
	{
		base.deleteTable(mark);
		cout << "ɾ���ɹ�!" << endl;
	}
	else
		cout << "���в����ڸñ�ɾ��ʧ��!" << endl;
	pause();
	system("cls");
}

//Table
void createTable(Database& base)
{
	string tableName;
	int rowSize;
	int columnSize;
	cout << "������Ҫ�����ı������: ";
	cin >> tableName;
	cout << "������Ҫ�����ı�ļ�¼(��)��С: ";
	cin >> rowSize;
	cout << "������Ҫ�����ı���ֶ�(��)��С: ";
	cin >> columnSize;
	if (rowSize < 0 || columnSize < 0)
	{
		cout << "��¼(��)���ֶ�(��)��С��Ч����,����ʧ��!" << endl;
	}
	else if (!base.checkSameName(tableName))
	{
		base.createTable(tableName, rowSize, columnSize);
		cout << "�����ɹ�!" << endl;
		base.openTable(tableName);
	}
	else
	{
		cout << "���������޷�����!" << endl;
	}
	pause();
	system("cls");
}

void openTable(Database & base)
{
	string tableName;
	cout << "������Ҫ�򿪵ı������: ";
	cin >> tableName;
	if (base.getMark(tableName) != -1)
	{
		base.openTable(tableName);
		system("cls");
	}
	else
	{
		cout << "�ñ�����!" << endl;
		pause();
		system("cls");
	}
}

void closeTable(Database & base)
{
	base.closeTable();
	system("cls");
}

void deleteTable(Database & base, char choice)
{
	if (choice == 'b')
	{
		string tableName;
		cout << "��������Ҫɾ���ı������: ";
		cin >> tableName;
		base.deleteTable(base.getMark(tableName));
		cout << "ɾ���ɹ�" << endl;
		pause();
		system("cls");
	}
	else if (choice == 't')
	{
		base.deleteTable(base.getMark());
		cout << "ɾ���ɹ�" << endl;
		pause();
		system("cls");
	}

}

void addRow(Database & base)
{
	base.addRow();
	int rowIndex = base.getRowSize() - 1;
	int columnSize = base.getColumnSize();
	if (columnSize > 0)
	{
		cout << "��Ϊ���ӵļ�¼������������" << endl;
		changeData(base, rowIndex, rowIndex, 0, columnSize - 1);
	}
	else
	{
		cout << "��ǰ�ֶδ�СΪ0���޷���������" << endl;
	}
	pause();
	system("cls");
}

void addColumn(Database & base)
{
	base.addColumn();
	int mark = base.getMark();
	int rowSize = base.getRowSize();
	int columnIndex = base.getColumnSize() - 1;
	cout << "ԭ����: " << base.getData(mark, 0, columnIndex) << endl;
	cout << "��Ϊ�ֶ�����: ";
	string columnName;
	cin >> columnName;
	base.changeData(columnName, mark, 0, columnIndex);
	if (rowSize > 1)
	{
		cout << "��Ϊ���ӵ��ֶ�������������" << endl;
		changeData(base, 1, rowSize - 1, columnIndex, columnIndex);
	}
	else
	{
		cout << "��ǰ��¼��СΪ0���޷���������!" << endl;
	}
	pause();
	system("cls");
}

void insertRow(Database & base)
{
	int rowIndex;
	cout << "��������������λ��: ";
	cin >> rowIndex;

	rowIndex += 1;
	if (rowIndex <= 0)
	{
		rowIndex = 1;
		base.insertRow(rowIndex);
		cout << "����λ�ó�����Χ�������д������¼!" << endl;
	}
	else if (rowIndex >= base.getRowSize())
	{
		base.addRow();
		rowIndex = base.getRowSize() - 1;
		cout << "����λ�ó�����Χ����ĩ�д����Ӽ�¼!" << endl;
	}
	else
	{
		base.insertRow(rowIndex);
		cout << "����ɹ�!" << endl;
	}

	int mark = base.getMark();
	int columnSize = base.getColumnSize();
	if (columnSize > 0)
	{
		cout << "��Ϊ����ļ�¼������������" << endl;
		changeData(base, rowIndex, rowIndex, 0, columnSize - 1);
	}
	else
	{
		cout << "��ǰ�ֶδ�СΪ0���޷���������!" << endl;
	}
	pause();
	system("cls");
}

void insertColumn(Database & base)
{
	int columnIndex;
	cout << "��������������λ��: ";
	cin >> columnIndex;
	if (columnIndex < 0)
	{
		columnIndex = 0;
		base.insertColumn(columnIndex);
		cout << "����λ�ó�����Χ�������д������ֶ�!" << endl;
	}
	else if (columnIndex >= base.getColumnSize())
	{
		base.addColumn();
		columnIndex = base.getColumnSize() - 1;
		cout << "����λ�ó�����Χ����ĩ�д������ֶ�!" << endl;
	}
	else
	{
		base.insertColumn(columnIndex);
		cout << "����ɹ�!" << endl;
	}


	int mark = base.getMark();
	int rowSize = base.getRowSize();
	cout << "ԭ����: " << base.getData(mark, 0, columnIndex) << endl;
	cout << "��Ϊ�ֶ�����: ";
	string columnName;
	cin >> columnName;
	base.changeData(columnName, mark, 0, columnIndex);
	if (rowSize > 1)
	{
		cout << "��Ϊ���ӵ��ֶ�������������" << endl;
		changeData(base, 1, rowSize - 1, columnIndex, columnIndex);
	}
	else
	{
		cout << "��ǰ��¼��СΪ0���޷���������" << endl;
	}
	pause();
	system("cls");
}

void deleteRow(Database & base)
{
	int rowIndex;
	cout << "������Ҫɾ���ļ�¼����λ��: " << endl;
	cin >> rowIndex;
	rowIndex += 1;
	if (rowIndex > 0 && rowIndex < base.getRowSize())
		base.deleteRow(base.getMark(), rowIndex);
	else
		cout << "������¼������Χ��ɾ��ʧ��!" << endl;
	pause();
	system("cls");
}

void deleteColumn(Database & base)
{
	int columnIndex;
	cout << "������Ҫɾ�����ֶ�����λ��: " << endl;
	cin >> columnIndex;
	if (columnIndex > 0 && columnIndex < base.getColumnSize())
	{
		base.deleteColumn(base.getMark(), columnIndex);
		cout << "ɾ���ɹ�!" << endl;
	}
	else
		cout << "�����ֶ�������Χ��ɾ��ʧ��!" << endl;
	pause();
	system("cls");
}

//Search
void searchInBase(Database & base)
{
	string data;
	cout << "��������ҵ�����: ";
	cin >> data;
	base.searchInBase(data);
	system("pause");
	system("cls");
}

void searchInTable(Database & base)
{
	int mark;
	string data;
	string tableName;
	vector<int> tableMarks;
	cout << "��������ҵ�����: ";
	cin >> data;
	cout << "��������Ҫ�����ı������(����END����):";
	do
	{
		cin >> tableName;
		mark = base.getMark(tableName);
		if (mark != -1)
			tableMarks.push_back(mark);
		else if (tableName != "END")
			cout << "������\"" << tableName << "\"�˱�!" << endl;
	} while (tableName != "END");
	if (tableMarks.size() > 0)
		base.searchInTable(data, tableMarks);
	system("pause");
	system("cls");
}

//Print
void printAllTableInformation(Database & base)
{
	cout << endl;
	vector<string> tablesName = base.getTablesName();
	int size = tablesName.size();
	cout << "����" << size << "�����" << endl;
	if (size > 0)
		cout << "��Ļ�����Ϣ����: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "�������: " << setw(tablesName[i].size() + 2) << left << tablesName[i] << "���С: " << base.getRowSize(i) - 1 << "�С�" << base.getColumnSize(i) << "��" << endl;
	}
	system("pause");
	system("cls");
}

void printTable(Database & base)
{
	int mark = base.getMark();
	if (mark != -1)
		base.printTable(mark);
	else
		cout << "δ�򿪱�,�޷���ӡ!" << endl;
	pause();
	system("cls");
}

void printCertainTable(Database & base)
{
	string name;
	cout << "������Ҫ��ӡ�ı������: ";
	cin >> name;
	int mark = base.getMark(name);
	if (mark != -1)
		base.printTable(mark);
	else
		cout << "�����ڸñ�,�޷���ӡ!" << endl;
	pause();
	system("cls");
}

void changeIsPrint()
{
	if (isPrint)
		isPrint = false;
	else
		isPrint = true;
	system("cls");
}

//Change
void changeColumnName(Database & base)
{
	string columnName;
	int columnIndex;
	char choice;
	int columnSize = base.getColumnSize();
	int mark = base.getMark();
	cout << "��ѡ���޸ķ�Χ(1-�������޸ĵ������ݣ�2-�����޸�ȫ�����ƣ�*-ȡ���޸�): ";
	while (true)
	{
		cin >> choice;
		if (choice == '*')
		{
			break;
		}
		if (choice == '1')
		{
			cout << "������Ҫ�޸ĵ��ֶ����Ƶ�����λ��: ";
			cin >> columnIndex;
			cout << "ԭ�ֶ�����: " << base.getData(mark, 0, columnIndex);
			cout << "\t����λ��:" << columnIndex << endl;
			cout << "�������µ��ֶ�����: ";
			cin >> columnName;
			if (columnIndex >= 0 && columnIndex < columnSize)
			{
				base.changeData(columnName, mark, 0, columnIndex);
				cout << "�޸ĳɹ�" << endl;
			}
			else
			{
				cout << "����λ�ô����޷��޸�!" << endl;
			}
			pause();
			break;
		}
		else if (choice == '2')
		{
			cout << "����\"ch1\",��������һ�����ݣ�����\"ch2\"�����Խ������룬�������ݾ��ᱻ���룬�ݲ�֧�ֿո����롣" << endl;
			for (columnIndex = 0; columnIndex < columnSize; columnIndex++)
			{
				cout << "ԭ�ֶ�����: " << base.getData(mark, 0, columnIndex);
				cout << "\t����λ��:" << columnIndex << endl;
				cout << "�������µ��ֶ�����: ";
				cin >> columnName;
				if (columnName == "ch1")
					continue;
				else if (columnName == "ch2")
					break;
				else
					base.changeData(columnName, mark, 0, columnIndex);
			}
			cout << "�������롣" << endl;
			pause();
			break;
		}
		else
		{
			cout << "��Ч���룬����������: ";
		}
	}
	system("cls");
}

void changeRowData(Database & base)
{
	int rowIndex;
	int firstColumnIndex;
	int endColumnIndex;
	char choice;
	while (true)
	{
		cout << "��ѡ���޸ķ�Χ(1-�޸����м�¼��2-�޸Ĳ��ּ�¼��*-ȡ���޸�): ";
		cin >> choice;
		cout << "�������޸ĵļ�¼����: ";
		cin >> rowIndex;
		rowIndex += 1;
		if (choice == '*')
		{
			break;
		}
		if (choice == '1')
		{
			firstColumnIndex = 0;
			endColumnIndex = base.getColumnSize() - 1;
			changeData(base, rowIndex, rowIndex, firstColumnIndex,endColumnIndex);
			break;
		}
		else if (choice == '2')
		{
			if (rowIndex < 0 || rowIndex > base.getRowSize() - 1)
			{
				cout << "������¼��С��ȡ������!" << endl;
				pause();
				break;
			}
			cout << "�������޸ĵĵ�һ�����ݵ��ֶ��������޴�С˳��Ҫ��: ";
			cin >> firstColumnIndex;
			cout << "�������޸ĵ����һ�������ݵ��ֶ��������޴�С˳��Ҫ��: ";
			cin >> endColumnIndex;
			if (firstColumnIndex > endColumnIndex)
			{
				int temp = firstColumnIndex;
				firstColumnIndex = endColumnIndex;
				endColumnIndex = temp;
			}
			changeData(base, rowIndex, rowIndex, firstColumnIndex, endColumnIndex);
			break;
		}
		else
			cout << "��Ч���룬����������! ";
		pause();
	}
	pause();
	system("cls");
}

void changeColumnData(Database & base)
{
	int columnIndex;
	int firstRowIndex;
	int endRowIndex;
	char choice;
	while (true)
	{
		cout << "��ѡ���޸ķ�Χ(1-�޸������ֶΣ�2-�޸Ĳ����ֶΣ�*-ȡ���޸�): ";
		cin >> choice;
		if (choice == '*')
		{
			break;
		}
		cout << "�������޸ĵ��ֶ�����: ";
		cin >> columnIndex;
		if (columnIndex < 0 || columnIndex > base.getRowSize() - 1)
		{
			cout << "�����ֶδ�С��ȡ������!" << endl;
			pause();
			break;
		}
		if (choice == '1')
		{
			firstRowIndex = 1;
			endRowIndex = base.getRowSize() - 1;
			changeData(base, firstRowIndex, endRowIndex, columnIndex, columnIndex);
			break;
		}
		else if (choice == '2')
		{
			cout << "�������޸ĵĵ�һ�����ݵ��ֶ��������޴�С˳��Ҫ��: ";
			cin >> firstRowIndex;
			cout << "�������޸ĵ����һ�������ݵ��ֶ��������޴�С˳��Ҫ��: ";
			cin >> endRowIndex;
			firstRowIndex += 1;
			endRowIndex += 1;
			if (firstRowIndex > endRowIndex)
			{
				int temp = firstRowIndex;
				firstRowIndex = endRowIndex;
				endRowIndex = temp;
			}
			changeData(base, firstRowIndex, endRowIndex, columnIndex, columnIndex);
			break;
		}
		else
			cout << "��Ч���룬����������!";
		pause();
	}
	pause();
	system("cls");
}

void changeRangeData(Database & base)
{
	int mark = base.getMark();
	int rowIndex;
	int columnIndex;
	int firstRowIndex;
	int endRowIndex;
	int firstColumnIndex;
	int endColumnIndex;
	char choice;
	while (true)
	{
		cout << "��ѡ���޸ķ�Χ(1-�������޸ĵ������ݣ�2-��������Χ�޸Ķ�����ݣ�*-ȡ���޸�): ";
		cin >> choice;
		if (choice == '*')
		{
			break;
		}
		if (choice == '1')
		{
			cout << "�������¼����: ";
			cin >> rowIndex;
			rowIndex += 1;
			cout << "�������ֶ�����: ";
			cin >> columnIndex;
			string data;
			cout << "����\"ch1\"�����Խ������룬�������ݾ��ᱻ���룬�ݲ�֧�ֿո����롣" << endl;
			cout << "ԭ����: " << base.getData(mark, rowIndex, columnIndex);
			cout << "\t����λ��:(" << rowIndex << ", " << columnIndex << ")" << endl;
			cout << "�������µ�����: ";
			cin >> data;
			if (data == "ch2")
				break;
			base.changeData(data, mark, rowIndex, columnIndex);
			cout << "�������롣" << endl;
			break;
		}
		else if (choice == '2')
		{
			cout << "�����������ݵ�����λ�ã��޴�С˳��Ҫ��" << endl;
			cout << "�������޸ĵĵ�һ�����ݵļ�¼����: ";
			cin >> firstRowIndex;
			cout << "�������޸ĵĵ�һ�����ݵ��ֶ�����: ";
			cin >> firstColumnIndex;
			cout << "�������޸ĵ��������ݵļ�¼����: ";
			cin >> endRowIndex;
			cout << "�������޸ĵ��������ݵ��ֶ�����: ";
			cin >> endColumnIndex;
			firstRowIndex += 1;
			endRowIndex += 1;
			if (firstRowIndex > endRowIndex)
			{
				int temp = firstRowIndex;
				firstRowIndex = endRowIndex;
				endRowIndex = temp;
			}
			if (firstColumnIndex > endColumnIndex)
			{
				int temp = firstColumnIndex;
				firstColumnIndex = endColumnIndex;
				endColumnIndex = temp;
			}
			changeData(base, firstRowIndex, endRowIndex, firstColumnIndex, endColumnIndex);
			break;
		}
		else
			cout << "��Ч���룬����������!";
		pause();
	}
	pause();
	system("cls");
}

//Intrm
void changeData(Database & base, int firstRowIndex, int endRowIndex, int firstColumnIndex, int endColumnIndex)
{
	cout << "����\"ch1\",��������һ�����ݣ�����\"ch2\"�����Խ������룬�������ݾ��ᱻ���룬�ݲ�֧�ֿո����롣" << endl;
	int mark = base.getMark();
	string data;
	for (int i = firstRowIndex; i <= endRowIndex; i++)
	{
		for (int k = firstColumnIndex; k <= endColumnIndex; k++)
		{
			cout << "ԭ����: " << base.getData(mark, i, k);
			cout << "\t����λ��:(" << i - 1 << ", " << k << ")" << endl;
			cout << "�������µ�����: ";
			cin >> data;
			if (data == "ch1")
				continue;
			else if (data == "ch2")
				break;
			else
				base.changeData(data, mark, i, k);
		}
		if (data == "ch2")
			break;
	}
	cout << "�������롣" << endl;
}

string getData(Database& base,int mark, int rowIndex, int columnIndex)
{
	return base.getData(mark, rowIndex, columnIndex);
}

void pause()
{
	system("pause");
}
