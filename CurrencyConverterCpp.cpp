#include <iostream>
#include <string>
using namespace std;

// вывод меню
void showMenu() {
    cout << "Menu:" << endl << "1. Show Rate" << endl << "2. Convert currency" << endl << "3. Exit" << endl << "Please select an option: ";
}

// вывод курса валют
void showRate(float* arr1, string* arr2, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " " << arr1[i] << " рублей" << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    const int SIZE = 6;
    float* arrRate = new float [SIZE] {};
    string* arrNameRate = new string[SIZE]{"доллар", "гривна", "лира", "тенге", "btncoin", "usdt" };
    bool flag = true;
    while (flag)
    {
        showMenu();
        int choiseUser;
        cin >> choiseUser;
        switch (choiseUser)
        {
        case 1:// вывод ценногого цегмента валют
            showRate(arrRate, arrNameRate, SIZE);
            break;
        case 2: // ковнертор валют
            break;
        case 3: // выход из приложения
            cout << "You have successfully logged out";
            flag = false;
            break;
        default:
            cout << "Select options from the list";
            break;
        }
    }
}

