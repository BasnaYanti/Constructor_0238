#include <iostream>
using namespace std;
class buku
{
    string judul;

public:
    buku setjudul(string judul)
    {
        this->judul = judul;
        return *this; // chain funtion
    }
    string getJudul()
    {
        return this->judul;
    }
} bukunya;

