#include "Database.h"

//��ʱ����
bool fileIsExist(string filePath);

vector<int> getWidth(vector<vector<string>> table)
{
	vector<int> Width;
	int rowSize = table.size();
	int columnSize = table[0].size();
	for (int columnIndex = 0; columnIndex < columnSize; columnIndex++)
		Width.push_back(table[0][columnIndex].size());
	for (int columnIndex = 0; columnIndex < columnSize; columnIndex++)
	{
		for (int rowIndex = 1; rowIndex < rowSize; rowIndex++)
		{
			int width = table[rowIndex][columnIndex].size();
			if (Width[columnIndex] < width)
			{
				Width[columnIndex] = width;
			}
		}
	}
	return Width;
}

//�����
Database::Database()
{
	size = 0;
	mark = -1;
	baseName = "";
	defaultPath = "";
}

Database::Database(string baseName)
{
	size = 0;
	mark = -1;
	this->baseName = baseName;
	defaultPath = "";
}

string Database::getName()
{
	return baseName;
}

void Database::changeName(string newName)
{
	baseName = newName;
}

void Database::loadDatabase(string loadPath)
{
	if (!fileIsExist(loadPath))
	{
		cout << "�����ڸ����ݿ��ļ���·����Ч���޷���!" << endl;
	}
	else
	{
		string LOGO;
		string baseName;
		int size;
		string tableName;
		int rowSize;
		int columnSzie;

		string lineStr;
		string str;
		fstream input;
		input.open(loadPath.c_str(), ios::in);//ͨ�����Ĳ�����ͨ���ԡ�,��Ϊ�ָ�����

		getline(input, lineStr);
		LOGO = lineStr;
		if (LOGO == "DATABASE")
		{
			this->BASE.clear();
			this->tablesName.clear();
			getline(input, lineStr);
			baseName = lineStr;
			getline(input, lineStr);
			size = atoi(lineStr.c_str());

			while (getline(input, lineStr))
			{
				stringstream ss(lineStr);
				getline(ss, str, ',');
				tableName = str;
				getline(ss, str, ',');
				rowSize = atoi(str.c_str());
				getline(ss, str, ',');
				columnSzie = atoi(str.c_str());

				vector<vector<string>> table;
				for (int i = 0; i < rowSize; i++)
				{
					getline(input, lineStr);
					stringstream ss(lineStr);
					vector<string> lineArray;
					while (getline(ss, str, ','))
						lineArray.push_back(str);
					table.push_back(lineArray);
				}
				this->tablesName.push_back(tableName);
				this->BASE.push_back(table);
			}
			this->defaultPath = loadPath;
			this->mark = -1;
			this->size = size;
			this->baseName = baseName;
			cout << "���ݿ⵼��ɹ�!" << endl;
		}
		else
		{
			cout << "���ļ�����Mydata���ݿ��׼���ݿ��ļ�,�޷���!" << endl;
		}
	}
}

void Database::loadTable(string loadPath)
{
	if (!fileIsExist(loadPath))
	{
		cout << "�����ڸñ��ļ���·����Ч���޷�����!" << endl;
	}
	else
	{
		string LOGO;
		string tableName;
		int rowSize;
		int columnSzie;
		string lineStr;
		string str;
		fstream input;
		input.open(loadPath.c_str(), ios::in);

		getline(input, lineStr);
		LOGO = lineStr;
		if (LOGO == "TABLE")
		{
			getline(input, lineStr);
			stringstream ss(lineStr);
			getline(ss, str, ',');
			tableName = str;
			int posName = 1;
			if (checkSameName(tableName))
			{
				while (true)
				{
					if (!checkSameName(tableName + to_string(posName)))
					{
						tableName += to_string(posName);
						break;
					}
					posName++;
				}
			}
			getline(ss, str, ',');
			rowSize = atoi(str.c_str());
			getline(ss, str, ',');
			columnSzie = atoi(str.c_str());

			vector<vector<string>> table;
			for (int i = 0; i < rowSize; i++)
			{
				getline(input, lineStr);
				stringstream ss(lineStr);
				vector<string> lineArray;
				while (getline(ss, str, ','))
					lineArray.push_back(str);
				table.push_back(lineArray);
			}
			this->tablesName.push_back(tableName);
			this->BASE.push_back(table);
			this->mark = size;
			this->size += 1;
			cout << "����ɹ�!" << endl;
		}
		else
		{
			cout << "���ļ�����Mydata���ݿ��׼���ļ�,�޷���!" << endl;
		}
	}
}

void Database::saveDatabase()
{
	if (defaultPath != "")
	{
		fstream output;
		output.open(defaultPath.c_str(), ios::out);
		if (!output.fail())
		{
			output << "DATABASE" << endl;
			string baseName = this->baseName;
			int size = this->size;
			output << baseName << endl;
			output << size << endl;
			for (int mark = 0; mark < size; mark++)
			{
				string tableName = getTableName(mark);
				int rowSize = getRowSize(mark);
				int columnSzie = getColumnSize(mark);
				output << tableName << "," << rowSize << "," << columnSzie << endl;
				for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
				{
					for (int columnIndex = 0; columnIndex < columnSzie; columnIndex++)
					{
						output << BASE[mark][rowIndex][columnIndex] << ",";
					}
					output << endl;
				}
			}
			cout << "����ɹ�!" << endl;
		}
		else
		{
			cout << "����ʧ��!" << endl;
		}
	}
}

void Database::saveDatabaseAs(string savePath)
{
	char choice = 'y';
	if (fileIsExist(savePath))
	{
		cout << "�ļ��Ѵ��ڣ��Ƿ񸲸�![y/n]";
		cin >> choice;
	}
	if (choice == 'y')
	{
		fstream output;
		output.open(savePath.c_str(), ios::out);
		if (!output.fail())
		{
			output << "DATABASE" << endl;
			string baseName = this->baseName;
			int size = this->size;
			output << baseName << endl;
			output << size << endl;
			for (int mark = 0; mark < size; mark++)
			{
				string tableName = getTableName(mark);
				int rowSize = getRowSize(mark);
				int columnSzie = getColumnSize(mark);
				output << tableName << "," << rowSize << "," << columnSzie << endl;
				for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
				{
					for (int columnIndex = 0; columnIndex < columnSzie; columnIndex++)
					{
						string data = BASE[mark][rowIndex][columnIndex];
						output << data << ",";
					}
					output << endl;
				}
			}
			cout << "����ɹ�!" << endl;
			defaultPath = savePath;
		}
		else
		{
			cout << "��Ч·��, �ļ��޷�����!" << endl;
		}
	}
	else if (choice = 'n')
		cout << "����ȡ��!" << endl;
	else
		cout << "��������, �ļ�δ����!" << endl;
}

void Database::exportTable(string savePath, int mark)
{
	char choice = 'y';
	if (fileIsExist(savePath))
	{
		cout << "��\"" << getTableName(mark) << "\"�Ѵ��ڣ��Ƿ񸲸�![y/n]";
		cin >> choice;
	}
	if (choice == 'y')
	{
		fstream output;
		output.open(savePath.c_str(), ios::out);
		if (!output.fail())
		{
			output << "TABLE" << endl;
			string tableName = getTableName(mark);
			int rowSize = getRowSize(mark);
			int columnSzie = getColumnSize(mark);
			output << tableName << "," << rowSize << "," << columnSzie << endl;
			for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
			{
				for (int columnIndex = 0; columnIndex < columnSzie; columnIndex++)
				{
					string data = BASE[mark][rowIndex][columnIndex];
					output << data << ",";
				}
				output << endl;
			}
			cout << "��\"" << getTableName(mark) << "\"�����ɹ�!" << endl;
			defaultPath = savePath;
		}
		else
		{
			cout <<"��Ч·��,��\"" << getTableName(mark) << "\"����ʧ��!" << endl;
		}
	}
	else if (choice = 'n')
		cout << "����ȡ��!" << endl;
	else
		cout << "��������, �ñ�δ����!" << endl;
}

//�����
void Database::createTable(string tableName, int rowSize, int columnSize)
{
	if (!checkSameName(tableName))
	{
		mark = size;
		vector<vector<string > > temp(rowSize + 1, vector<string>(columnSize, "NULL"));
		BASE.push_back(temp);
		tablesName.push_back(tableName);
		size++;
	}
}

void Database::openTable(string tableName)
{
	mark = getMark(tableName);
}

void Database::closeTable()
{
	mark = -1;
}

void Database::addRow()
{
	if (mark < size && mark >= 0)
	{
		int columnSize = getColumnSize();
		int rowIndex = getRowSize();
		vector<string > temp(columnSize, "NULL");
		BASE[mark].push_back(temp);
	}
}

void Database::addColumn()
{
	if (mark < size && mark >= 0)
	{
		for (int i = 0; i < getRowSize(); i++)
		{
			BASE[mark][i].push_back("NULL");
		}
	}
}

void Database::insertRow(int rowIndex)
{
	if (mark < size && mark >= 0)
	{
		int columnSize = getColumnSize();
		int rowSize = getRowSize();
		if (rowIndex <= 0)
			rowIndex = 1;
		else if (rowIndex >= rowSize)
			addRow();
		else
		{
			vector<string > temp(columnSize,"NULL");
			BASE[mark].insert(BASE[mark].begin() + rowIndex, temp);
		}
	}
}

void Database::insertColumn(int columnIndex)
{
	if (mark < size && mark >= 0)
	{
		int columnSize = getColumnSize();
		int rowSize = getRowSize();
		if (columnIndex < 0)
			columnIndex = 0;
		if (columnIndex >= columnSize)
			addColumn();
		if (columnIndex >= 0 && columnIndex < columnSize)
		{
			for (int i = 0; i < rowSize; i++)
			{
				BASE[mark][i].insert(BASE[mark][i].begin()+ columnIndex,"NULL");
			}
		}
	}
}

void Database::deleteTable(int certainMark)
{
	if (certainMark < size)
	{
		BASE.erase(BASE.begin() + certainMark);
		tablesName.erase(tablesName.begin() + certainMark);
		size--;
		if (mark == certainMark)
			mark = -1;
		else if (mark > certainMark)
			mark -= 1;
	}
}

void Database::deleteRow(int mark, int rowMark)
{
	if (mark < size && rowMark < getRowSize())
		BASE[size].erase(BASE[size].begin() + rowMark);
}

void Database::deleteColumn(int mark, int columnMark)
{
	if (mark < size && columnMark < getColumnSize())
		for (int i = 0; i < getRowSize(); i++)
			BASE[size][i].erase(BASE[size][i].begin() + columnMark);
}

void Database::changeData(string data, int mark, int rowIndex, int columnIndex)
{
	if (mark < size && rowIndex < getRowSize() && rowIndex >= 0 && columnIndex < getColumnSize() && columnIndex >= 0)
		BASE[mark][rowIndex][columnIndex] = data;
}

string Database::getTableName(int mark)
{
	if (mark == -1)
		return "None";
	return tablesName[mark];
}

string Database::getTableName()
{
	if (mark == -1)
		return "None";
	return tablesName[mark];
}

int Database::getMark(string tableName)
{
	for (int i = 0; i < size; i++)
		if (tableName == tablesName[i])
			return i;
	return -1;
}

int Database::getMark()
{
	return mark;
}

void Database::printTable(int mark)
{
	if (mark >= 0 && mark < size)
	{
		cout << endl;
		vector<vector<string > > table = BASE[mark];
		int rowSize = table.size();
		int columnSize = table[0].size();
		string tabeName = tablesName[mark];
		cout << "�������: " << setw(16) << left << tabeName << "���С: " << rowSize - 1 << "�С�" << columnSize << "��" << endl;
		vector<int> Width = getWidth(table);
		for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
		{
			for (int columnIndex = 0; columnIndex < columnSize; columnIndex++)
			{
				cout << setw(Width[columnIndex] + 4) << left << table[rowIndex][columnIndex];
			}
			cout << endl;
		}
	}
}

void Database::printRow(int mark, int rowIndex)
{
	vector<vector<string > > table = BASE[mark];
	vector<int> Width = getWidth(table);
	int coulumnSize = BASE[mark][rowIndex].size();
	for (int columnIndex = 0; columnIndex < coulumnSize; columnIndex++)
	{
		cout << setw(Width[columnIndex] + 4) << left << table[rowIndex][columnIndex];
	}
	cout << endl;
}

//��������
bool Database::checkSameName(string tableName)
{
	for (int i = 0; i < tablesName.size(); i++)
		if (tableName == tablesName[i])
			return true;
	return false;
}

int Database::getRowSize()
{
	if (mark >= 0 && mark < size)
		return BASE[mark].size();
	else
		return -1;
}

int Database::getRowSize(int mark)
{
	if (mark >= 0 && mark < size)
		return BASE[mark].size();
	else
		return -1;
}

int Database::getColumnSize()
{
	if (mark >= 0 && mark < size)
		return BASE[mark][0].size();
	else
		return -1;
}

int Database::getColumnSize(int mark)
{
	if (mark >= 0 && mark < size)
		return BASE[mark][0].size();
	else
		return -1;
}

string Database::getData(int mark, int rowIndex, int columnIndex)
{
	return BASE[mark][rowIndex][columnIndex];
}

void Database::searchInBase(string data)
{
	int finded = 0;
	vector<int> marks;
	vector<int> rowIndexs;
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < BASE[i].size(); j++)
		{
			for (int k = 0; k < BASE[i][j].size(); k++)
			{
				if (data == BASE[i][j][k])
				{
					finded++;
					cout << "����\"" << data <<"\"������\"" << getTableName(i) << "\"����¼����: " << j - 1 << "; �ֶ�����: " << k << endl;
					if (finded == 1)
					{
						marks.push_back(i);
						rowIndexs.push_back(j);
					}
					if (rowIndexs.size() != 0 && j != rowIndexs[rowIndexs.size() - 1])
					{
						marks.push_back(i);
						rowIndexs.push_back(j);
					}
				}
			}
		}
	}
	if (finded == 0)
		cout << "δ�������������!";
	else
	{
		cout << "����" << finded << "���������" << endl;
		cout << "�Ƿ��ӡ��ؼ�¼[y/n]: ";
		char chioce;
		cin >> chioce;
		if (chioce == 'y')
		{
			for (int i = 0; i < marks.size(); i++)
			{
				printRow(marks[i], rowIndexs[i]);
			}
			cout << "���������" << endl;
		}
		else if (chioce == 'n')
		{
			cout << "���������" << endl;
		}
		else
		{
			cout << "��Ч����!ȡ������" << endl;
		}
	}
}

void Database::searchInTable(string data, vector<int> tableMarks)
{
	vector<int> marks;
	vector<int> rowIndexs;
	int mark;
	int finded = 0;
	for (int i = 0; i < tableMarks.size(); i++)
	{
		mark = tableMarks[i];
		for (int j = 1; j < BASE[mark].size(); j++)
		{
			for (int k = 0; k < BASE[mark][j].size(); k++)
			{
				if (data == BASE[mark][j][k])
				{
					finded++;
					cout << "���ݳ�����\"" << getTableName(mark) << "\"����¼����: " << j - 1 << "; �ֶ�����" << k << endl;
					if (finded == 1)
					{
						marks.push_back(mark);
						rowIndexs.push_back(j);
					}
					if (rowIndexs.size() != 0 && j != rowIndexs[rowIndexs.size() - 1])
					{
						marks.push_back(mark);
						rowIndexs.push_back(j);
					}
				}
			}
		}
	}
	if (finded == 0)
		cout << "δ�������������!";
	else
	{
		cout << "����" << finded << "���������" << endl;
		cout << "�Ƿ��ӡ��ؼ�¼[y/n]: ";
		char chioce;
		cin >> chioce;
		if (chioce == 'y')
		{
			for (int i = 0; i < marks.size(); i++)
			{
				printRow(marks[i], rowIndexs[i]);
			}
			cout << "���������" << endl;
		}
		else if (chioce == 'n')
		{
			cout << "���������" << endl;
		}
		else
		{
			cout << "��Ч����!ȡ������" << endl;
		}
	}
}

vector<string> Database::getTablesName()
{
	return tablesName;
}

string Database::getDefaultPath()
{
	return defaultPath;
}

bool fileIsExist(string filePath)
{
	fstream check;
	check.open(filePath.c_str(), ios::in);
	if (check)
	{
		check.close();
		return true;
	}
	return false;
}