#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  STACK s;
  Initial(&s);
  char otv;
  do
  {
    cout << "1. Добавление элемента в вершину стека" << endl
    << "2. Удаление элемента из вершины стека" << endl
    << "3. Вывести элементы стека" << endl
    << "4. Проверка пустоты стека" << endl
    << "5. Проверка заполненности стека" << endl
    << "0. Выход" << endl
    << " = ";
    cin >> otv;
    switch(otv)
    {

      case '1':
        if (Full(&s)==1)
        cout << endl << "Стек полный" << endl;
        else
        {
        Add(&s);
        cout << endl << "Элемент добавлен в стек" << endl;
        }
        break;

      case '2':
        if (Empty(&s)==1)
        cout << endl << "Стек пуст" << endl;
        else
        {
        Del(&s);
        cout << endl << "Элемент удален из стека" << endl;
        }
        break;

      case '3':
        if (Empty(&s)==1)
        cout << endl << "Стек пуст" << endl;
        else
        {
        cout << endl << "Элементы стека" << endl;
        Show(&s);
        cout << endl;
        }
        break;

      case '4':
        if (Empty(&s)==1)
        cout << endl << "Стек пуст" << endl;
        else
        cout << endl << "В стеке " << s.count << " элемента" << endl;
        break;

      case '5':
        if (Full(&s)==1)
        cout << endl << "Стек полный" << endl;
        else
        cout << endl << "Есть возможность добавить " << N-s.count << " элементов" << endl;
        break;

      case '0':
        break;

      default:
        cout << endl << "Ошибка" << endl;
        break;
    }
  }
  while(otv!='0');
  cin.get();
}
