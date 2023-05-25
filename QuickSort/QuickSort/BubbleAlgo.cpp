#include <iostream>
#include <ctime>
 
using namespace std;

class BubbleSort
{
private:
    int size;
    int* ArrayB;
public:
    BubbleSort(int size)
    {
        this->size = size;
        ArrayB = new int[this->size];
    }
    void RandomArray() //Generates a random array
    {
        int i;
        for (i = 0; i < size; i++)
            ArrayB[i] = rand();
    }
    void UserArray() //Takes User input for array
    {
        int i;
        for (i = 0; i < size; i++)
            cin >> ArrayB[i];
    }
    void Sort() //Sorts the array using Bubble Sort
    {
        cout << "\nSORT STARTED\n\n";
         double  start_time = clock();
        int i, j, temp;
        for (i = 0; i < size - 1; i++)
        {
            for (j = 0; j < size - i - 1; j++)
            {
                if (ArrayB[j] > ArrayB[j + 1])
                {
                    temp = ArrayB[j];
                    ArrayB[j] = ArrayB[j + 1];
                    ArrayB[j + 1] = temp;
                }
            }
        }
         double  end_time = clock(); // конечное время
         double  search_time = (end_time - start_time + .0) / CLOCKS_PER_SEC;

        cout << "\nBUBBLE time "<<search_time<< "\n\n";
    }
    bool isSorted() //Checks if the array is sorted
    {
        int i;
        for (i = 0; i < size - 1; i++)
        {
            if (ArrayB[i] > ArrayB[i + 1])
                return false;
        }
        return true;
    }
    void PrintArray() //Prints the array (can be used for comparison between sorted and unsorted array)
    {
        cout << "\nSORT PRINT ARRAY\n\n";
        int i;
        for (i = 0; i < size; i++)
            cout << ArrayB[i] << " ";
        cout << endl;
    }
};
