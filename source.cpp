#include "header.hpp"

void masppgen(int** mas, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            *( *( mas + i ) + j ) = rand()%6-2;
        }
    }
};

void masppcomp(int** mas, int N){
    int temp=0;
    for(int j = 0; j < N; j++){
        for(int i = 0; i < N; i++){
            temp += *(*(mas+j)+i);
        }
        *(*(mas+j)+j)=temp;
        temp=0;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            temp += *(*(mas+j)+i);
        }
        *(*(mas+i)+i)=temp;
        temp=0;
    }
}

void masgen(int *mas, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            *(mas+i*N+j) = rand()%6-2;
        }
    }
};

void mascomp(int *mas, int N){
        int temp=0;
    for(int j = 0; j < N; j++){
        for(int i = 0; i < N; i++){
            temp += *(mas+i*N+j);
        }
        *(mas+j*N+j)=temp;
        temp=0;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            temp += *(mas+i*N+j);
        }
        *(mas+i*N+i)=temp;
        temp=0;
    }
};