#pragma once
#include "Windows.h" // Файл заголовка, содержащий API Windows

/* Устанавливает кодовую страницу для консоли.
   Идентификаторы кодовой страницы: https://learn.microsoft.com/ru-ru/windows/win32/intl/code-page-identifiers */
int ConsoleSetup(int codingPage) {
	SetConsoleCP(codingPage);       // Устанавливает входную кодовую страницу консоли
	SetConsoleOutputCP(codingPage); // Устанавливает выходную кодовую страницу консоли
	return codingPage;              // Возвращает кодовую страницу
}

