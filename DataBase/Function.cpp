#include "Function.h"
#include <iomanip>
#include <cstdlib>
using namespace std;

//systemMnuePrint
void printControl_main(Database base)
{
	cout << "数据库名称: " << base.getName() << endl;
	cout << "当前表: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "表大小: " << base.getRowSize() - 1 << "行×" << base.getColumnSize() << "列" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "主功能栏:" << endl;
	cout << "1、文件" << endl;
	cout << "2、数据库" << endl;
	cout << "3、编辑" << endl;
	cout << "4、搜索" << endl;
	cout << "5、打印" << endl;
	//cout << "6、帮助" << endl; //用来打印该程序的一些说明，未对其进行实现
	cout << "*、退出数据库" << endl;
	cout << "请选择功能: ";
}

void printControl_file(Database base)
{
	cout << "数据库名称: " << base.getName() << endl;
	cout << "当前表: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "表大小: " << base.getRowSize() - 1 << "行×" << base.getColumnSize() << "列" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}

	cout << "文件 功能栏:" << endl;
	cout << "1、创建数据库" << endl;
	cout << "2、打开数据库" << endl;
	cout << "3、保存数据库" << endl;
	cout << "4、数据库另存为" << endl;
	cout << "5、导出当前表" << endl;
	cout << "6、导出多个表" << endl;
	cout << "7、导入表" << endl;
	cout << "*、返回上一级菜单" << endl;
	cout << "请选择功能: ";
}

void printControl_base(Database base)
{
	cout << "数据库名称: " << base.getName() << endl;
	cout << "当前表: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "表大小: " << base.getRowSize() - 1 << "行×" << base.getColumnSize() << "列" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "数据库 功能栏:" << endl;
	cout << "1、创建数据库" << endl;
	cout << "2、修改数据库名称" << endl;
	cout << "3、创建表" << endl;
	cout << "4、打开表" << endl;
	cout << "5、关闭表" << endl;
	cout << "6、删除指定表" << endl;
	cout << "*、返回上一级菜单" << endl;
	cout << "请选择功能: ";
}

void printControl_table(Database base)
{
	cout << "数据库名称: " << base.getName() << endl;
	cout << "表名称: " << base.getTableName(base.getMark()) << endl;
	if (base.getMark() != -1)
	{
		cout << "表大小: " << base.getRowSize() - 1 << "行×" << base.getColumnSize() << "列" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "编辑 功能栏:" << endl;
	cout << "1、创建表" << endl;
	cout << "2、打开表" << endl;

	if (base.getMark() != -1)
	{
		cout << "3、关闭表" << endl;
		cout << "4、删除当前表" << endl;
		cout << "a、增加记录" << endl;
		cout << "b、增加字段" << endl;
		cout << "c、插入记录" << endl;
		cout << "d、插入字段" << endl;
		cout << "e、删除指定记录" << endl;
		cout << "f、删除指定字段" << endl;
		cout << "g、修改当前表的字段名称" << endl;
		cout << "h、修改当前表的记录数据" << endl;
		cout << "i、修改当前表的字段数据" << endl;
		cout << "j、修改当前表的数据" << endl;
	}
	cout << "*、返回上一级菜单" << endl;
	cout << "请选择功能: ";
}

void printControl_search(Database base)
{
	cout << "数据库名称: " << base.getName() << endl;
	cout << "当前表: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "表大小: " << base.getRowSize() - 1 << "行×" << base.getColumnSize() << "列" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "搜索 功能栏:" << endl;
	cout << "1、数据库中查找" << endl;
	cout << "2、表中查找" << endl;
	cout << "*、返回上一级菜单" << endl;
	cout << "请选择功能: ";
}

void printControl_printf(Database base)
{
	cout << "数据库名称: " << base.getName() << endl;
	cout << "当前表: " << base.getTableName() << endl;
	if (base.getMark() != -1)
	{
		cout << "表大小: " << base.getRowSize() - 1 << "行×" << base.getColumnSize() << "列" << endl;
		if (isPrint)
		{
			int mark = base.getMark();
			if (mark != -1)
				base.printTable(mark);
		}
		cout << endl;
	}
	cout << "打印 功能栏:" << endl;
	cout << "1、查看所有表" << endl;
	cout << "2、打印指定表" << endl;
	cout << "3、是否显示当前表: ";
	if (isPrint)
	{
		cout << "显示" << endl;
	}
	else
	{
		cout << "关闭" << endl;
	}
	cout << "4、打印当前表" << endl;
	cout << "*、返回上一级菜单" << endl;
	cout << "请选择功能: ";
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
			//这里留了一个“帮助”功能的接口
			// break;
		default:
			cout << "请重新选择功能!" << endl;
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
			cout << "请重新选择功能!" << endl;
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
			cout << "请重新选择功能!" << endl;
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
				cout << "请重新选择功能!" << endl;
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
				cout << "请重新选择功能!" << endl;
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
			cout << "请重新选择功能!" << endl;
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
			cout << "请重新选择功能!" << endl;
			pause();
			system("cls");
		}
	}
}

//Base
void changeBaseName(Database& base)
{
	string newName;
	cout << "请输入新的数据库名称: ";
	cin >> newName;
	base.changeName(newName);
	cout << "修改成功!" << endl;
	pause();
	system("cls");
}

void loadDatabase(Database 
	& base)
{
	string loadPath;
	cout << "请输入目标数据库文件名(包括路径): ";
	cin >> loadPath;
	base.loadDatabase(loadPath);
	pause();
	system("cls");
}

void loadTable(Database & base)
{
	string loadPath;
	cout << "请输入目标表文件名(包括路径): ";
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
	cout << "请输入要保存的文件名: ";
	cin >> fileName;
	cout << "请输入合法的保存路径,或输入skip跳过: ";
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
		cout << "请输入合法的保存路径,或输入skip跳过,文件无需命名: ";
		cin >> Path;
		if (Path != "skip")
			savePath = Path + "\\" + fileName + ".csv";
		else
			savePath = fileName + ".csv";
		base.exportTable(savePath, mark);
	}
	else
		cout << "当前未打开表，无法保存!" << endl;
	pause();
	system("cls");
}

void exportCertainTable(Database & base)
{
	int mark;
	string tableName;
	vector<int> tableMarks;
	cout << "请输入需要导出的表的名称(输入END结束):";
	do
	{
		cin >> tableName;
		mark = base.getMark(tableName);
		if (mark != -1)
			tableMarks.push_back(mark);
		else if (tableName != "END")
			cout << "不存在\""<< tableName <<"\"表!" << endl;
	} while (tableName != "END");
	int size = tableMarks.size();
	string Path;
	string fileName;
	string savePath;
	if (size != 0)
	{
		cout << "请输入合法的保存路径,或输入skip跳过: ";
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
	cout << "请输入要删除的表的名称: ";
	cin >> name;
	mark = base.getMark(name);
	if (mark != -1)
	{
		base.deleteTable(mark);
		cout << "删除成功!" << endl;
	}
	else
		cout << "库中不存在该表，删除失败!" << endl;
	pause();
	system("cls");
}

//Table
void createTable(Database& base)
{
	string tableName;
	int rowSize;
	int columnSize;
	cout << "请输入要创建的表的名称: ";
	cin >> tableName;
	cout << "请输入要创建的表的记录(行)大小: ";
	cin >> rowSize;
	cout << "请输入要创建的表的字段(列)大小: ";
	cin >> columnSize;
	if (rowSize < 0 || columnSize < 0)
	{
		cout << "记录(行)或字段(列)大小无效输入,创建失败!" << endl;
	}
	else if (!base.checkSameName(tableName))
	{
		base.createTable(tableName, rowSize, columnSize);
		cout << "创建成功!" << endl;
		base.openTable(tableName);
	}
	else
	{
		cout << "表重名，无法创建!" << endl;
	}
	pause();
	system("cls");
}

void openTable(Database & base)
{
	string tableName;
	cout << "请输入要打开的表的名称: ";
	cin >> tableName;
	if (base.getMark(tableName) != -1)
	{
		base.openTable(tableName);
		system("cls");
	}
	else
	{
		cout << "该表不存在!" << endl;
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
		cout << "请输入你要删除的表格名称: ";
		cin >> tableName;
		base.deleteTable(base.getMark(tableName));
		cout << "删除成功" << endl;
		pause();
		system("cls");
	}
	else if (choice == 't')
	{
		base.deleteTable(base.getMark());
		cout << "删除成功" << endl;
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
		cout << "请为增加的记录依次填入数据" << endl;
		changeData(base, rowIndex, rowIndex, 0, columnSize - 1);
	}
	else
	{
		cout << "当前字段大小为0，无法填入数据" << endl;
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
	cout << "原名称: " << base.getData(mark, 0, columnIndex) << endl;
	cout << "请为字段命名: ";
	string columnName;
	cin >> columnName;
	base.changeData(columnName, mark, 0, columnIndex);
	if (rowSize > 1)
	{
		cout << "请为增加的字段依次填入数据" << endl;
		changeData(base, 1, rowSize - 1, columnIndex, columnIndex);
	}
	else
	{
		cout << "当前记录大小为0，无法填入数据!" << endl;
	}
	pause();
	system("cls");
}

void insertRow(Database & base)
{
	int rowIndex;
	cout << "请输入插入的索引位置: ";
	cin >> rowIndex;

	rowIndex += 1;
	if (rowIndex <= 0)
	{
		rowIndex = 1;
		base.insertRow(rowIndex);
		cout << "索引位置超过范围，在首行处插入记录!" << endl;
	}
	else if (rowIndex >= base.getRowSize())
	{
		base.addRow();
		rowIndex = base.getRowSize() - 1;
		cout << "索引位置超过范围，在末行处增加记录!" << endl;
	}
	else
	{
		base.insertRow(rowIndex);
		cout << "插入成功!" << endl;
	}

	int mark = base.getMark();
	int columnSize = base.getColumnSize();
	if (columnSize > 0)
	{
		cout << "请为插入的记录依次填入数据" << endl;
		changeData(base, rowIndex, rowIndex, 0, columnSize - 1);
	}
	else
	{
		cout << "当前字段大小为0，无法填入数据!" << endl;
	}
	pause();
	system("cls");
}

void insertColumn(Database & base)
{
	int columnIndex;
	cout << "请输入插入的索引位置: ";
	cin >> columnIndex;
	if (columnIndex < 0)
	{
		columnIndex = 0;
		base.insertColumn(columnIndex);
		cout << "索引位置超过范围，在首列处插入字段!" << endl;
	}
	else if (columnIndex >= base.getColumnSize())
	{
		base.addColumn();
		columnIndex = base.getColumnSize() - 1;
		cout << "索引位置超过范围，在末列处增加字段!" << endl;
	}
	else
	{
		base.insertColumn(columnIndex);
		cout << "插入成功!" << endl;
	}


	int mark = base.getMark();
	int rowSize = base.getRowSize();
	cout << "原名称: " << base.getData(mark, 0, columnIndex) << endl;
	cout << "请为字段命名: ";
	string columnName;
	cin >> columnName;
	base.changeData(columnName, mark, 0, columnIndex);
	if (rowSize > 1)
	{
		cout << "请为增加的字段依次填入数据" << endl;
		changeData(base, 1, rowSize - 1, columnIndex, columnIndex);
	}
	else
	{
		cout << "当前记录大小为0，无法填入数据" << endl;
	}
	pause();
	system("cls");
}

void deleteRow(Database & base)
{
	int rowIndex;
	cout << "请输入要删除的记录索引位置: " << endl;
	cin >> rowIndex;
	rowIndex += 1;
	if (rowIndex > 0 && rowIndex < base.getRowSize())
		base.deleteRow(base.getMark(), rowIndex);
	else
		cout << "超出记录索引范围，删除失败!" << endl;
	pause();
	system("cls");
}

void deleteColumn(Database & base)
{
	int columnIndex;
	cout << "请输入要删除的字段索引位置: " << endl;
	cin >> columnIndex;
	if (columnIndex > 0 && columnIndex < base.getColumnSize())
	{
		base.deleteColumn(base.getMark(), columnIndex);
		cout << "删除成功!" << endl;
	}
	else
		cout << "超出字段索引范围，删除失败!" << endl;
	pause();
	system("cls");
}

//Search
void searchInBase(Database & base)
{
	string data;
	cout << "请输入查找的数据: ";
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
	cout << "请输入查找的数据: ";
	cin >> data;
	cout << "请输入需要搜索的表的名称(输入END结束):";
	do
	{
		cin >> tableName;
		mark = base.getMark(tableName);
		if (mark != -1)
			tableMarks.push_back(mark);
		else if (tableName != "END")
			cout << "不存在\"" << tableName << "\"此表!" << endl;
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
	cout << "共计" << size << "个表格" << endl;
	if (size > 0)
		cout << "表的基本信息如下: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "表的名称: " << setw(tablesName[i].size() + 2) << left << tablesName[i] << "表大小: " << base.getRowSize(i) - 1 << "行×" << base.getColumnSize(i) << "列" << endl;
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
		cout << "未打开表,无法打印!" << endl;
	pause();
	system("cls");
}

void printCertainTable(Database & base)
{
	string name;
	cout << "请输入要打印的表的名称: ";
	cin >> name;
	int mark = base.getMark(name);
	if (mark != -1)
		base.printTable(mark);
	else
		cout << "不存在该表,无法打印!" << endl;
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
	cout << "请选择修改范围(1-按索引修改单个数据；2-依次修改全部名称；*-取消修改): ";
	while (true)
	{
		cin >> choice;
		if (choice == '*')
		{
			break;
		}
		if (choice == '1')
		{
			cout << "请输入要修改的字段名称的索引位置: ";
			cin >> columnIndex;
			cout << "原字段名称: " << base.getData(mark, 0, columnIndex);
			cout << "\t索引位置:" << columnIndex << endl;
			cout << "请输入新的字段名称: ";
			cin >> columnName;
			if (columnIndex >= 0 && columnIndex < columnSize)
			{
				base.changeData(columnName, mark, 0, columnIndex);
				cout << "修改成功" << endl;
			}
			else
			{
				cout << "索引位置错误，无法修改!" << endl;
			}
			pause();
			break;
		}
		else if (choice == '2')
		{
			cout << "输入\"ch1\",可以跳过一项数据，输入\"ch2\"，可以结束输入，其他数据均会被填入，暂不支持空格输入。" << endl;
			for (columnIndex = 0; columnIndex < columnSize; columnIndex++)
			{
				cout << "原字段名称: " << base.getData(mark, 0, columnIndex);
				cout << "\t索引位置:" << columnIndex << endl;
				cout << "请输入新的字段名称: ";
				cin >> columnName;
				if (columnName == "ch1")
					continue;
				else if (columnName == "ch2")
					break;
				else
					base.changeData(columnName, mark, 0, columnIndex);
			}
			cout << "结束输入。" << endl;
			pause();
			break;
		}
		else
		{
			cout << "无效输入，请重新输入: ";
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
		cout << "请选择修改范围(1-修改整行记录；2-修改部分记录；*-取消修改): ";
		cin >> choice;
		cout << "请输入修改的记录索引: ";
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
				cout << "超出记录大小，取消操作!" << endl;
				pause();
				break;
			}
			cout << "请输入修改的第一个数据的字段索引（无大小顺序要求）: ";
			cin >> firstColumnIndex;
			cout << "请输入修改的最后一个个数据的字段索引（无大小顺序要求）: ";
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
			cout << "无效输入，请重新输入! ";
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
		cout << "请选择修改范围(1-修改整列字段；2-修改部分字段；*-取消修改): ";
		cin >> choice;
		if (choice == '*')
		{
			break;
		}
		cout << "请输入修改的字段索引: ";
		cin >> columnIndex;
		if (columnIndex < 0 || columnIndex > base.getRowSize() - 1)
		{
			cout << "超出字段大小，取消操作!" << endl;
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
			cout << "请输入修改的第一个数据的字段索引（无大小顺序要求）: ";
			cin >> firstRowIndex;
			cout << "请输入修改的最后一个个数据的字段索引（无大小顺序要求）: ";
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
			cout << "无效输入，请重新输入!";
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
		cout << "请选择修改范围(1-按索引修改单个数据；2-按索引范围修改多个数据；*-取消修改): ";
		cin >> choice;
		if (choice == '*')
		{
			break;
		}
		if (choice == '1')
		{
			cout << "请输入记录索引: ";
			cin >> rowIndex;
			rowIndex += 1;
			cout << "请输入字段索引: ";
			cin >> columnIndex;
			string data;
			cout << "输入\"ch1\"，可以结束输入，其他数据均会被填入，暂不支持空格输入。" << endl;
			cout << "原数据: " << base.getData(mark, rowIndex, columnIndex);
			cout << "\t索引位置:(" << rowIndex << ", " << columnIndex << ")" << endl;
			cout << "请输入新的数据: ";
			cin >> data;
			if (data == "ch2")
				break;
			base.changeData(data, mark, rowIndex, columnIndex);
			cout << "结束输入。" << endl;
			break;
		}
		else if (choice == '2')
		{
			cout << "输入两个数据的索引位置，无大小顺序要求。" << endl;
			cout << "请输入修改的第一个数据的记录索引: ";
			cin >> firstRowIndex;
			cout << "请输入修改的第一个数据的字段索引: ";
			cin >> firstColumnIndex;
			cout << "请输入修改的最后个数据的记录索引: ";
			cin >> endRowIndex;
			cout << "请输入修改的最后个数据的字段索引: ";
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
			cout << "无效输入，请重新输入!";
		pause();
	}
	pause();
	system("cls");
}

//Intrm
void changeData(Database & base, int firstRowIndex, int endRowIndex, int firstColumnIndex, int endColumnIndex)
{
	cout << "输入\"ch1\",可以跳过一项数据，输入\"ch2\"，可以结束输入，其他数据均会被填入，暂不支持空格输入。" << endl;
	int mark = base.getMark();
	string data;
	for (int i = firstRowIndex; i <= endRowIndex; i++)
	{
		for (int k = firstColumnIndex; k <= endColumnIndex; k++)
		{
			cout << "原数据: " << base.getData(mark, i, k);
			cout << "\t索引位置:(" << i - 1 << ", " << k << ")" << endl;
			cout << "请输入新的数据: ";
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
	cout << "结束输入。" << endl;
}

string getData(Database& base,int mark, int rowIndex, int columnIndex)
{
	return base.getData(mark, rowIndex, columnIndex);
}

void pause()
{
	system("pause");
}
