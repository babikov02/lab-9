using namespace std;
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 12;
    char a[n] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    string s;
    int k;
    cout << "Введите строку из латинских букв: " << endl;
    cin >> s;
    k = 0;
    for (int i = 0; s[i]; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i] == a[j])
                k++;
        }
    }
    if (k)
        cout << "Количество гласных букв в строке: " << k << endl;
    else
        cout << "Гласных букв не найдено!" << endl;
    cin.get();
    return 0;
}