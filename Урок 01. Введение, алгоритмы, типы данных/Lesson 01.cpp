#include <iostream>  // Подключение библиотеки для ввода/вывода.
using namespace std; // Использование пространства имен std, чтобы избежать префиксов всех функций и классов стандартной библиотеки с 'std::'.

#include "Console Setup.h"

#include "Ввод данных.h"
#include "Вывод данных.h"
#include "Типы данных.h"
#include "Переменные константы.h"

int main() {
	ConsoleSetup(1251);

	// Первое приветствие сообщение
	cout << "Hello, World!\n\n" << endl;

	cout << "6.Вывод данных:\n\n";
	DataOutput();
	cout << endl;
	cout << "7.Типы данных:\n\n";
	DataTypes();
	cout << endl;
	cout << "8.Переменные константы:\n\n";
	VariableConst();
	cout << endl;
	cout << "9.Ввод данных:\n\n";
	DataInput();
	cout << endl;
	return 0;
}
