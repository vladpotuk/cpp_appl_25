#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int M, N;
    std::cout << "¬вед≥ть розм≥р масиву ј (M): ";
    std::cin >> M;
    std::cout << "¬вед≥ть розм≥р масиву B (N): ";
    std::cin >> N;

    int A[100], B[100], C[200]; 

    std::cout << "¬вед≥ть елементи масиву A:" << std::endl;
    for (int i = 0; i < M; i++) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    std::cout << "¬вед≥ть елементи масиву B:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "B[" << i << "]: ";
        std::cin >> B[i];
    }

    int* ptrA = A;
    int* ptrB = B;
    int* ptrC = C;

    
    for (int i = 0; i < M; i++) {
        *ptrC = *ptrA;
        ptrC++;
        ptrA++;
    }

    
    for (int i = 0; i < N; i++) {
        *ptrC = *ptrB;
        ptrC++;
        ptrB++;
    }

    int sizeC = M + N; 

    
    std::cout << "ќб'Їднаний масив C:" << std::endl;
    for (int i = 0; i < sizeC; i++) {
        std::cout << "C[" << i << "]: " << C[i] << std::endl;
    }

    return 0;
}
