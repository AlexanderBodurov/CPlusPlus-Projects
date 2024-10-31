#include <iostream>
using namespace std;

void printRow(int row)
{
    // За всеки ред, принтираме числата от 1 до текущия ред!
    for (int currNum = 1; currNum <= row; currNum++)
    {
        cout << currNum << " ";
    }

    cout << endl;
}

void printUpperTrianglePart(int size)
{
    for (int row = 1; row <= size; row++) // Редът на който се намираме!
    {
        printRow(row);
    }
}

void printLowerTrianglePart(int size)
{
    for (int row = size - 1; row > 0; row--) // В обратен ред!
    {
        printRow(row);
    }
}

void printTriangle(int size)
{
    printUpperTrianglePart(size);
    printLowerTrianglePart(size);
}

int main()
{
    int num;
    cin >> num;

    printTriangle(num);

    return 0;
}
