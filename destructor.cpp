#include <iostream>
using namespace std;

class Angka
{
    private:
        int *arr;
        int panjang;
     
    public:
        Angka(int); //constructor
        ~Angka(); //destructor
        void cetakData();
        void isiData();
};
//definisi member function
Angka::Angka(int i) //constructor
{
    panjang = i;
    arr = new int[i];
    isiData();
}

Angka::~Angka() //destructor
{
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}