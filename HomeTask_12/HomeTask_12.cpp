#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int num, n1, n2, n3, n4, temp;
    cout << "Введите четырёхзначное число: \n";
    cin >> num;
    if (num / 1000 < 1||num / 1000 > 9){
        cout << " Вы ввели не четырёхзначное число! \n";
    }
    else {
        cout << " Считаю! \n";
        n4 = num % 10;
        temp = num / 10;
        n3 = temp % 10;
        temp = temp / 10;
        n2 = temp % 10;
        temp = temp / 10;
        n1 = temp % 10;
        temp = temp / 10;
        cout << "Было: " << endl;
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
        cout << "Стало: " << endl;
        cout << n2 << " " << n1 << " " << n4 << " " << n3 << endl;
    }
}


