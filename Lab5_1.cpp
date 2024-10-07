// 9. Підрахувати середнє арифметичне всіх додатних елементів у даному одновимірному масиві.//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size;
    int* array; 
    double ser = 0;
    double sum = 0, k = 0;

    cout << "Введіть розмір масиву: ";
    cin >> size;
    srand(time(0));

    // Створення динамічного масиву
    array = new int[size];
    cout << "   Масив:" << endl;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 21 - 10;
        cout << array[i] << " ";
    }

    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            sum += array[i];
            k +=1;
        }
    }
    ser+= sum / k;
    cout << "\nCереднє арифметичне всіх додатних елементів у даному одновимірному масиві: " << ser;
    cout << endl;

    delete[] array;

    return 0;
}

