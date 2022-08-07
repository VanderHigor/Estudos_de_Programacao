#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int eleitor1 = 18;
    int eleitor2 = 60;
        if (eleitor1 && eleitor2 >= 18)
        {
            printf("\n Eleitores");
        }else{
            printf("\n Não eleitores");
        }
    SetConsoleOutputCP(CPAGE_DEFAULT);
         
}