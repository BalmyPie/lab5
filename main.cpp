#include "header.hpp"
#define maspp2
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    srand(time(NULL));
    #ifdef _WIN32
    #include <windows.h>
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    #endif
    inp:
    cout << "Введите размер квадратного массива: ";
    int N;
    cin >> N;
    if(N <= 1) goto inp;
    #ifdef maspp
        int **mas = new int*[N];
        for(int i = 0; i < N; ++i)
        mas[i] = new int[N];
        masppgen(mas, N);
            cout << "Исходный массив: " << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << setw(3)<< *(*(mas+i)+j) << ' ';
            }cout << endl;}
        cout << endl;
        masppcomp(mas, N);
            cout << "Конечный массив: " << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << setw(3) << *(*(mas+i)+j) << ' ';
            }cout << endl;}
    #endif

    #ifndef maspp
        int *mas = new int[N];
        masgen(mas, N);
            cout << "Исходный массив: " << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << setw(3)<< *(mas+i*N+j) << ' ';
            }cout << endl;}
        cout << endl;
        mascomp(mas, N);
            cout << "Конечный массив: " << endl;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << setw(3) << *(mas+i*N+j) << ' ';
            }cout << endl;}
    #endif
}