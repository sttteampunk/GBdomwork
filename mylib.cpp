#include <iostream>

namespace MyLib
{

    float* f1(int size) 
    {

        float* ptr = 0;
        ptr = new float[size];
        return ptr;

    }


    void f2(float array[], int size) 
    {
        setlocale(LC_ALL, "Rus");
        int n, pos = 0, neg = 0;
        std::cout << "размер массива = "; std::cin >> n;

        std::cout << "введи " << n << " намберс:\n";
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
            if (array[i] >= 0.) pos++;
            else neg++;
        }

        std::cout << "положительные: " << pos << "\nотрицательные: " << neg << "\n";


    }

}