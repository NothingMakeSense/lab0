#include <stdio.h>
#include <locale.h>

const char* FIO = "Катюхин Руслан Станиславович";
const char* GROUP = "ВИ921Б";

int main()
{
    // Включение поддержки кириллицы 
    setlocale(LC_ALL, "Russian");   

    printf("%s, %s \n", FIO, GROUP);

    return 0;
}

