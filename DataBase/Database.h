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
	vector<string > tablesName;//�����������ƣ��������봢������ά������һά��������Ӧ
	int mark;//��ǰ�򿪵ı�δ����Ϊ-1
	string defaultPath;//Ĭ��·������������Ϊ��

public:
	Database();//����һ�����ݿ�
	Database(string baseName);//����һ�����ݿ�ͬʱ��������
	string getName();//�鿴���ݿ�����
	void changeName(string newName);//�޸����ݿ�����
	void loadDatabase(string loadPath);//�������ݿ�
	void loadTable(string loadPath);//���ر�
	void saveDatabase();//�������ݿ�
	void saveDatabaseAs(string savePath);//���ݿ����Ϊ
	void exportTable(string savePath, int mark);//������

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
	void printTable(int mark);//��ӡָ����
	void printRow(int marks, int rowIndex);
	void searchInBase(string data);//�����ݿ���������
	void searchInTable(string data, vector<int> tableMarks);//��ָ����������

public:
	bool checkSameName(string tableName);//�����Ƿ�����
	int getRowSize();//��ȡ��ǰ��ļ�¼��С
	int getRowSize(int mark);//��ȡָ����ļ�¼��С
	int getColumnSize();//��ȡ��ǰ����ֶδ�С
	int getColumnSize(int mark);//��ȡָ������ֶδ�С
	string getData(int mark, int rowIndex, int columnIndex);//��ȡָ���������
	vector<string > getTablesName();//��ȡ��ȡ��ǰ�������
	string getDefaultPath();//��ȡĬ�ϱ���·��
};

#endif