#pragma once
// 7.Типы данных. стр.48.

#include <climits> // Для использования макросов INT_MIN и INT_MAX
#include <cfloat>  // Для использования макросов FLT_MIN и FLT_MAX


void DataTypes() {
    cout << "Типы данных       Размер в байт\t Минимальное | максимальное значение" << endl;
    cout << "Логические типы:" << endl;
    cout << " bool = true           " << sizeof(bool)      << " byte\t value = " << true << endl;
    cout << " bool = false          " << sizeof(bool)      << " byte\t value = " << false << endl;
    cout << "Числовые типы:" << endl;
    cout << " short                 " << sizeof(short)     << " byte\t value = " << SHRT_MIN   << " | " << SHRT_MAX << endl;
    cout << " int                   " << sizeof(int)       << " byte\t value = " << INT_MIN    << " | " << INT_MAX << endl;
    cout << " long                  " << sizeof(long)      << " byte\t value = " << LONG_MIN   << " | " << LONG_MAX << endl;
    cout << " long long             " << sizeof(long long) << " byte\t value = " << LLONG_MIN  << " | " << LLONG_MAX << endl;
    cout << "Вещественные типы:" << endl;
    cout << " float                 " << sizeof(float)     << " byte\t value = " << FLT_MIN    << " | " << FLT_MAX << endl;
    cout << " double                " << sizeof(double)    << " byte\t value = " << DBL_MIN    << " | " << DBL_MAX << endl;
    cout << "Символьные типы:" << endl;
    cout << " char                  " << sizeof(char)      << " byte\t value = " << CHAR_MIN   << " | " << CHAR_MAX << endl;
    cout << " wchar_t               " << sizeof(wchar_t)   << " byte\t value = " << WCHAR_MAX  << endl;
    cout << " char16_t              " << sizeof(char16_t)  << " byte\t value = " << UINT16_MAX << endl;
    cout << " char32_t              " << sizeof(char32_t)  << " byte\t value = " << UINT32_MAX << endl;
}
/* Оператор sizeof() в C++ является унарным оператором времени компиляции, который определяет размер переменной,
   типа данных или констант в байтах во время компиляции. Он также может определить размер классов, структур и объединений.

   Синтаксис оператора sizeof() выглядит так: sizeof(type), где type - это тип данных, размер которого вы хотите узнать.

   Когда sizeof() применяется к типу данных, он возвращает количество байт, которые этот тип данных занимает в памяти. 
   Например, sizeof(int) вернет 4, если размер int составляет 4 байта в вашей системе.

   Когда sizeof() применяется к переменной, он возвращает размер этого типа переменной. 
   Например, если у вас есть переменная int x, то sizeof(x) вернет 4, если размер int составляет 4 байта в вашей системе.

   Важно отметить, что sizeof() не оценивает выражение, к которому он применяется. Это значит, что он не выполняет выражение
   во время выполнения программы, а только проверяет его во время компиляции.

   Также стоит отметить, что результат sizeof() всегда положительный, даже если он применяется к пустому типу класса.

*/