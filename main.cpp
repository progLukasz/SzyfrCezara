#include <iostream>
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

char kodowanieSzyfremCezara(char znakDoZaszyfrowania)
{
    char znakZaszyfrowany;
    switch (znakDoZaszyfrowania)
    {
    case ' ':
        return ' ';
        break;
    case 'X':
        return 'A';
        break;
    case 'Y':
        return 'B';
        break;
    case 'Z':
        return 'C';
    case '\n':
        return '\n';
        break;
    default:
        return znakZaszyfrowany = znakDoZaszyfrowania + 3;
    }
}
char dekodowanieSzyfruCezara (char zadDoOdszyfrowania)
{
    char znakOdszyfrowany;
    switch (zadDoOdszyfrowania)
    {
    case ' ':
        return ' ';
        break;
    case 'A':
        return 'X';
        break;
    case 'B':
        return 'Y';
        break;
    case 'C':
        return 'Z';
    case '\n':
        return '\n';
        break;
    default:
        return znakOdszyfrowany = zadDoOdszyfrowania - 3;
    }
}


int main()
{
    char znakDoZakodowania;
    int iloscZnakow = 0;
    while (iloscZnakow < 201)
    {
        znakDoZakodowania = getchar();
        if (znakDoZakodowania >= 65 && znakDoZakodowania <= 90 || znakDoZakodowania == 32 || znakDoZakodowania == '\n')
        {
            cout << kodowanieSzyfremCezara(znakDoZakodowania);
            iloscZnakow++;
        }
    }

    return 0;
}

//while(getline(cin, tekst))
//cout << zaszyfrujSzyfremCezara(tekst) << endl;
