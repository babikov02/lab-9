using namespace std;
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 26;
    char a[n] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k', 'l', 'i', 'o', 'q',
        'w', 'r', 't', 'y', 'u', 'p', 's', 'z', 'x', 'v', 'n', 'm' };
    string s;
    int k;
    cout << "Введите строку из латинских букв:" << endl;
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
        cout << "Количество прописных букв: " << k << endl;
    else
        cout << "Прописных букв не найдено!" << endl;
    cin.get();
    return 0;
}