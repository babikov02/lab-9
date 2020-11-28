using namespace std;
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 1;
    char a[n] = { 'л' };
    const int l = 15;
    char b[l] = "Колледж ВятГУ";

    cout << "Символ для поиска в строке - л\n";
    cout << "Строка - Колледж ВятГУ\n";

    int k = 0;
    for (int i = 0; b[i]; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
                k++;
        }
    }
    if (k)
        cout << "Количество найденных символов: " << k << endl;
    else
        cout << "Данного символа не найдено!" << endl;
    cin.get();
    return 0;
}