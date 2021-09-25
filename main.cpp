#include <iostream>
#include "MyLib.h"
#include <fstream>


using namespace std;

#define TRUEORFALSE(vvedenoe_chislo, konechnoe_chislo) ((vvedenoe_chislo >= 0 && vvedenoe_chislo < konechnoe_chislo))
#define ZADAEM_CHISLO(n, e_byte)
#pragma pack(push, 1)
struct strud 
{
    char SotFullName[255];   
    char SotStreet[255];    
    short SotHouse; 
    short SotFlat;          
    char SotPhone;    
};
#pragma pack(pop)

void obzac()
{
    setlocale(LC_ALL, "Rus");
    cout << "\n\n//================================задание================================//\n\n";
}

int main()
{
    {
        obzac();
        //задание 1
        const int size = 4;
        float* ptr = 0;
        ptr = MyLib::f1(size);
        MyLib::f2(ptr, size);
        delete[]ptr;

        obzac();
        //задание 2
        int neizves;
        const int MULTIOTREZOK = 123;
        cout << boolalpha; 
        cout << "Введи число, которое хочешь проверить: " << endl;
        cin >> neizves;
        bool proveryaemoe_chislo = TRUEORFALSE(neizves, MULTIOTREZOK);
        cout << "Твой результат: " << proveryaemoe_chislo << endl;
    

    
        obzac();
        //задание3 
        ZADAEM_CHISLO(n, e_byte)
            int* e_byte;
        int n;
        cout << "лупани число своё: ";
        cin >> n;
        e_byte = new int[n];

        for (int i = 0; i < n; i++)
        {
            cout << "e_byte[" << i << "] = ";
            cin >> e_byte[i];
        }
        int temp;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (e_byte[j] > e_byte[j + 1])
                {
                    temp = e_byte[j];
                    e_byte[j] = e_byte[j + 1];
                    e_byte[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << e_byte[i] << " ";
        }
        cout << endl;

        delete[]e_byte;

        obzac();
        //задание 4
        auto* zalala = new strud;
        cout << "файл: " << sizeof(strud) << " байт" << endl;
        string path = "strud.txt";
        ofstream fout;
        fout.open(path);
        if (!fout.is_open())
        {
            cout << "Ошибка открытия файла!" << endl;
        }
        else
        {
            string strud;
            fout << strud;
            fout << &zalala;
        }
        fout.close();

        delete zalala;

    }
        return 0;
}