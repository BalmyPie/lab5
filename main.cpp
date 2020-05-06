#include "header.hpp"
#define maspp
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    #ifdef _WIN32
    #include <windows.h>
    #endif
    cout << "Введите размер квадратного массива: ";
    int N;
    cin >> N;
    int** mas = new int[N];
    for(int i = 0; i < N; i++)
    mas[i] = new int[N];
    #ifdef maspp
    masppgen(mas, N);
    for (int i = 0; i < N*N; i++)
    cout << mas[i] << ' ';
    #endif


    #ifndef maspp
    masgen(mas, N);
    #endif
}