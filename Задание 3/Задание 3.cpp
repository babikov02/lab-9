using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    char buffer[1024];
    char result[1024] = { 0 };
    cout << "Введите строку с буквами и цифрами на английском: ";
    cin >> buffer;
    char* a = result;
    for (int i = 0; i < strlen(buffer); i++)
    {
        if (!isdigit((unsigned char)buffer[i]))
            *a++ = buffer[i];
    }
    cout << endl << "Строка после удаления всех цифр: " << result;
}