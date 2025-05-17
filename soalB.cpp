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
        friend void Petugas :: prosesPinjam (Buku* b, Peminjam* p);   
        friend void Petugas :: prosesKembali (Buku* b);   
};

class Peminjam
{
    private:
        string nama;
        int ID;
        int totalPinjaman;

    public:
        friend class Admin;
        friend class Petugas;
        friend void lihatTotalPinjaman(Buku* b, Peminjam* p);
};

class Petugas
{
    private:
    string nama;
    int ID;
    string levelAkses;

    public:
        void prosesPinjam(Buku* b, Peminjam* p);
        void prosesKembali(Buku* b);
        friend class Admin;
};


class Admin
{
    public:
    void tampilkanStatistik(Buku* b, Peminjam* p)
    {
        cout << "Nama Peminjam: " << p->nama << endl;
        cout << "ID Peminjam: " << p->ID << endl;
        cout << "Total Pinjaman: " << p->totalPinjaman << " buku" << endl;
        cout << "Status Buku: " << (b->dipinjam ? "Sedang Dipinjam" : "Tersedia") << endl;
    }
    void lihatTotalPinjaman(Peminjam* p)
    {
         cout << "Total Pinjaman oleh " << p->nama << p->totalPinjaman;
    }
    void lihatStatusBuku(Buku* b)
    {
        cout << "Status buku: " << (b->dipinjam ? "Sedang Dipinjam" : "Tersedia") << endl;
    }
};


int main()
{
    Buku b;
    Peminjam p;
    Admin admin;
    

    return 0;
}
