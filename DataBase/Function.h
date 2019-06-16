#ifndef FUNCTION_H
#define FUNCTION_H

#include "Database.h"
using namespace std;

//systemMnuePrint
void printControl_main(Database base);
void printControl_file(Database base);
void printControl_base(Database base);
void printControl_table(Database base);
void printControl_search(Database base);
void printControl_printf(Database base);

//systemMnue
void function_main(Database& base, int& mainChoice);
void function_file(Database & base, int& mainChoice);
void function_base(Database& base, int& mainChoice);
void function_table(Database& base);
void function_search(Database& base);
void function_printf(Database& base);

//Base
void changeBaseName(Database& base);
void loadDatabase(Database& base);
void loadTable(Database& base);
void saveBase(Database& base);
void saveBaseAs(Database& base);
void exportTable(Database& base);
void exportCertainTable(Database& base);
void deleteCertainTable(Database& base);

//Table
void createTable(Database& base);
void openTable(Database& base);
void closeTable(Database& base);
void deleteTable(Database& base, char choice);
void addRow(Database& base);
void addColumn(Database& base);
void insertRow(Database& base);
void insertColumn(Database& base);
void deleteRow(Database& base);
void deleteColumn(Database& base);

//Search
void searchInBase(Database& base);
void searchInTable(Database& base);

//Print
void printAllTableInformation(Database& base);
void printTable(Database& base);
void printCertainTable(Database& base);

//Change
void changeColumnName(Database& base);
void changeRowData(Database& base);
void changeColumnData(Database& base);
void changeRangeData(Database& base);

//Intrm
void changeData(Database& base, int firstRowIndex, int endRowIndex, int firstColumnIndex, int endColumnIndex);
string getData(Database& base, int mark, int rowIndex, int columnIndex);
void pause();

#endif
