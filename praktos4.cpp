#include <iostream>
#include <Windows.h>
#include <algorithm> 
#include <random> 
#include <chrono> 
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <complex>
using namespace std;
int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    string word;
    int ch;
    while (true)
    {
        cout << "Введите слово:" << endl;
        cin >> word;
        cout << "Выберите действие:\n1.Слово выводится задом наперед.\n2.Вывести слово без гласных.\n3.Вывести слово без согласных.\n4. Рандомно раскидывать буквы заданного слова.\n5.Выход из программы" << endl;
        cin >> ch;
        if (ch == 1)
        {
            reverse(word.begin(), word.end());
            cout << word << endl;
        }
        if (ch == 2)
        {
            for (int i = 0; i < word.length(); i++) {
                if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'U' && word[i] != 'O' && word[i] != 'А' && word[i] != 'а'
                    && word[i] != 'у' && word[i] != 'У' && word[i] != 'о' && word[i] != 'О' && word[i] != 'ы' && word[i] != 'Ы' && word[i] != 'и' && word[i] != 'И' && word[i] != 'э' && word[i] != 'Э' && word[i] != 'я' && word[i] != 'Я'
                    && word[i] != 'ю' && word[i] != 'Ю' && word[i] != 'ё' && word[i] != 'Ё' && word[i] != 'е' && word[i] != 'Е')
                {
                    cout << word[i];
                }
            }
            cout << endl;
        }
        if (ch == 3)
        {
            for (int i = 0; i < word.length(); i++) {
                if (word[i] != 'б' && word[i] != 'Б' && word[i] != 'в' && word[i] != 'В' && word[i] != 'г' && word[i] != 'Г' && word[i] != 'д' && word[i] != 'Д' && word[i] != 'ж' && word[i] != 'Ж' && word[i] != 'З' && word[i] != 'з'
                    && word[i] != 'й' && word[i] != 'Й' && word[i] != 'К' && word[i] != 'к' && word[i] != 'л' && word[i] != 'Л' && word[i] != 'м' && word[i] != 'М' && word[i] != 'н' && word[i] != 'Н' && word[i] != 'п' && word[i] != 'П'
                    && word[i] != 'р' && word[i] != 'Р' && word[i] != 'с' && word[i] != 'С' && word[i] != 'т' && word[i] != 'Т' && word[i] != 'ф' && word[i] != 'Ф' && word[i] != 'х' && word[i] != 'Х' && word[i] != 'ц' && word[i] != 'Ц'
                    && word[i] != 'ч' && word[i] != 'Ч' && word[i] != 'ш' && word[i] != 'Ш' && word[i] != 'Щ' && word[i] != 'Щ' && word[i] != 'b' && word[i] != 'c' && word[i] != 'd' && word[i] != 'f' && word[i] != 'g' && word[i] != 'h'
                    && word[i] != 'j' && word[i] != 'k' && word[i] != 'l' && word[i] != 'm' && word[i] != 'n' && word[i] != 'p' && word[i] != 'q' && word[i] != 'r' && word[i] != 's' && word[i] != 't' && word[i] != 'v' && word[i] != 'w'
                    && word[i] != 'x' && word[i] != 'z')
                {
                    cout << word[i];
                }
            }
            cout << endl;
        }
        if (ch == 4)
        {
            random_device rd;
            mt19937 g(rd());
            shuffle(word.begin(), word.end(), g);
            cout << word << endl;
        }
        if (ch == 5)
        {
            break;
        }
        if (ch > 5 || ch < 1)
        {
            cout << "Такого выбора нет, давай по новой" << endl;
        }
    }
    return 0;
}
        }
    }
    return 0;
}
