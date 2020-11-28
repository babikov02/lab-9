using namespace std;
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    string s, so;
    int n = 0, p = 0;
    cout << "Введите строку: ";
    cin >> s;
    cout << "Введите подстроку: ";
    cin >> so;
    while ((p = s.find(so, p)) != s.npos) {
        ++n;
        ++p;
    }
    cout << "Подстрока " << so << " в строке " << s << " содержит " << n << " вхождений!" << endl;
    return 0;
}