#include <iostream>

using namespace std;

//Функция вывода матрицы с результатом
void print_array (float array [4])
{
    cout << "The result of multiplying a matrix by a vector: " << endl;
    for (int i=0; i<4; i++)
    {
            cout << array [i] << endl;
    }
    cout << endl;
}

int main() {

    cout << "------------Matrix multiplication------------\n\n";

    //Инициализация матрицы и вектора
    float matrix [4][4];
    float vec [4];

    //Ввод элементов матрицы
    cout << "Enter 16 elements of the matrix: " << endl;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> matrix [i][j];
        }
    }

    //Ввод элементов вектора
    cout << "Enter 4 elements of the vector: " << endl;
    for (int i=0; i<4; i++)
    {
        cin >> vec [i];
    }

    //Инициализация результирующего вектора
    float resultVec [4];

    //Умножение матрицы на вектор
    for (int i=0; i<4; i++)
    {
        float temp=0.0f;
        for (int j=0; j<4; j++)
        {
            temp+=matrix[i][j]*vec[j];
        }
        resultVec[i]=temp;
    }

    //Вывод результата
    print_array(resultVec);

    return 0;
}