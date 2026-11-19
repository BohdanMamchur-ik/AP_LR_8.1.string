// Алгоритмізація та програмування
// Лабораторна робота № 8.1 (стандартні функції мови С++ для рядків string)
// Мамчур Богдан Тарасович ІК-12
// Варіант 9

#include <iostream>
#include <string>

using namespace std;


int Count(const string s);
string Change(string& s);

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 4 identical characters." << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}

//підрахунок 4ок 
int Count(const string s)
{
    if (s.length() < 4)
        return 0;

    int k = 0;
    size_t pos = 0;

    while (pos <= s.length() - 4)
    {
        // формуємо четвірку
        
        size_t foundPos = s.find(string(4, s[pos]), pos);

        if (foundPos == pos)
        {
            k++;
            pos += 4;
        }
        else
        {
            pos++;
        }
    }
    return k;
}

// функція заміни кожної четвірки однакових символів парою зірочок "**"
string Change(string& s)
{
    if (s.length() < 4)
        return s;

    size_t pos = 0;
    while (pos <= s.length() - 4)
    {
        // шукаємо підрядок із 4 однакових символів за допомогою методу find()
        size_t foundPos = s.find(string(4, s[pos]), pos);

        if (foundPos == pos)
        {
            // замінюємо знайдену четвірку на "**" за допомогою методу replace()
            s.replace(pos, 4, "**");
            pos += 2;
        }
        else
        {
            pos++;
        }
    }
    return s;
}