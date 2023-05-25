// QuickSort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "QuickAlgo.cpp"
#include "BubbleAlgo.cpp"
#include <ctime>    

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    QuickSort q(size);
    BubbleSort b(size);
    char choice;
    cout << "\nA)Enter array manually.\nB)Generate a random array\n\n";
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 'a':
        case 'A':
        {
            q.UserArray();
            b.UserArray();
        }
        break;
        case 'b':
        case 'B':
        {
            srand(time(NULL));
            q.RandomArray();
            b.RandomArray();
        }
        break;
        default:
        {
            cout << "\nInvalid choice, Please enter again!\n";
            cout << "\nA)Enter array manually.\nB)Generate a random array\n\n";
        }
        break;
        }
    } while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B');

     double  start_time = clock();
    q.Sort(0, size - 1);
     

    if (q.isSorted()) {
        double  end_time = clock(); // конечное время
        double  search_time = (end_time - start_time + .0) / CLOCKS_PER_SEC;

        cout << "\nQUICKSEARCH time " << search_time << "\n\n";
        cout << endl << "Sorting Completed Successfully using Quick Sort!" << endl << endl;
    }
    q.PrintMyArray();
    q.~QuickSort();
    b.Sort();
    if (b.isSorted())
        cout << "Sorting Completed Successfully using Bubble Sort!" << endl << endl;
    b.PrintArray();
    b.~BubbleSort();
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
