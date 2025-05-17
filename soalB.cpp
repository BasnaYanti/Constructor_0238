#include <iostream>
#include <string>
using namespace std;

class Petugas;
class Admin;
class peminjam;

class Buku
{
    private:
        string judul;
        string penulis;    
        bool dipinjam;
    public:
        friend class Admin;
        friend class peminjam;
        void prosespinjam(Buku* b, Peminjam* p);   
        void prosesKembali(Buku* b); 
};

class Peminjam
{
    private:
        string nama;
        int ID;
        
};
