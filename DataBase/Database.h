#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

class Database
{
private:
	string baseName;//���ݿ�����
	vector <vector<vector<string > > > BASE;//���ݿ���ά����
	int size;//���ݿ⵱ǰ�еı������
	vector<string > tablesName;//������������
	int mark;//��ǰ�򿪵ı�
	string defaultPath;

public:
	Database();//����һ�����ݿ�
	Database(string baseName);//����һ�����ݿ�ͬʱ��������
	string getName();//�鿴���ݿ�����
	void changeName(string newName);//�޸����ݿ�����
	void loadDatabase(string loadPath);
	void loadTable(string loadPath);
	void saveDatabase();
	void saveDatabaseAs(string savePath);
	void exportTable(string savePath, int mark);

	void createTable(string tableName, int rowSize, int columnSize);//����һ�����������ƣ�����
	void openTable(string tableName);//��һ����
	void closeTable();//�رյ�ǰ��
	void addRow();//���Ӽ�¼
	void addColumn();//������
	void insertRow(int rowIndex);//�����¼
	void insertColumn(int columnIndex);//������
	void deleteTable(int mark);//ɾ����
	void deleteRow(int mark, int rowMark);//ɾ��ָ����¼
	void deleteColumn(int mark, int columnMark);//ɾ��ָ����
	void changeData(string data, int mark, int rowNum, int columnNum);//�޸�ָ�����ָ������
	string getTableName(int mark);//��ȡָ���������
	string getTableName();//��ȡ��ǰ�������
	int getMark(string tableName);//��ȡָ����ı��
	int getMark();//��ȡ��ǰ��ı��
	void printTable(int mark);
	void searchInBase(string data);//�����ݿ���������
	void searchInTable(string data, vector<int> tableMarks);

public:
	bool checkSameName(string tableName);
	int getRowSize();
	int getRowSize(int mark);
	int getColumnSize();
	int getColumnSize(int mark);
	string getData(int mark, int rowIndex, int columnIndex);
	vector<string > getTablesName();
	string getDefaultPath();
};

#endif
