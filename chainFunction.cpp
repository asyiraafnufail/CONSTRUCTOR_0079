#include <iostream>
using namespace std;

class Buku
{
    string judul;

    public: 
        Buku setJudul(string judul)
        {
            this -> judul = judul;
            return *this;
        }

        string getJudul()
        {
            return this -> judul;
        }
} bukunya;

int main()
{
    // bukunya.setJudul("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul();

    return 0;
}