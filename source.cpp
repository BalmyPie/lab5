#include "header.hpp"

void masppgen(int** mas, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            *( *( mas + i ) + j ) = rand()%10-5;
        }
    }
};

void masgen(int *mas, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            *(mas+i*N+j) = rand()%10-5;
        }
    }
};