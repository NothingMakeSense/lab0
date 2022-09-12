#include <stdio.h>
#include <locale.h>
#include "print.h"

int main()
{
    // Объявление переменных
    char* FIO = "Катюхин Руслан Станиславович";
    char* GROUP = "ВИ921Б";

    // Включение поддержки кириллицы 
    setlocale(LC_ALL, "Russian");

    // Вывод данных в консоль
    print(FIO, GROUP);

    return 0;
}

