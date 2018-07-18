#include <iostream>
#include <string>
using namespace std;
class Bangun_Datar
{
    protected :
    int Bil1;
    int Bil2;
    float Bil3;
    int Hasil;
    int Jumlah;

};

class Perhitungan_Luas : public Bangun_Datar
{
private :
    public :
    void Persegi()
    {
        cout<<""<<endl;
        cout<<"Menghitung luas persegi  : "<<endl;
        cout<<"Rumus Luas persegi S * S  : "<<endl;
        cout<<"Masukan sisi     :  "; cin>>Bil1;
        cout<<"Masukan sisi     :  "; cin>>Bil2;
        Hasil = Bil1 * Bil2;
        cout<<"Luas persegi adalah : "<<Hasil<<endl;
    }

    void Persegi_Panjang()
    {
        cout<<""<<endl;
        cout<<"Menghitung luas Persegi Panjang  : "<<endl;
        cout<<"Rumus Luas persegi P * L  : "<<endl;
        cout<<"Masukan panjang  :  "; cin>>Bil1;
        cout<<"Masukan Lebar    :  "; cin>>Bil2;
        Hasil = Bil1 * Bil2;
        cout<<"Luas persegi Panjang adalah : "<<Hasil<<endl;
    }

        void Segitiga()
    {
        cout<<""<<endl;
        cout<<"Menghitung luas Segitiga  : "<<endl;
        cout<<"Rumus Luas persegi 1/2 * alas * tinggi  : "<<endl;
        cout<<"Masukan alas :  "; cin>>Bil1;
        cout<<"Masukan tinggi :  "; cin>>Bil2;
        Hasil = Bil1 * Bil2 / 2;
        cout<<"Luas Segitiga adalah : "<<Hasil<<endl;
    }


};

class Perhitungan_Keliling: public Bangun_Datar
{

public :
    public:
       
        void Persegi()
    {
        cout<<""<<endl;
        cout<<"Menghitung keliling Segitiga  : "<<endl;
        cout<<"Rumus Keliling persegi 4 * s : "<<endl;
        cout<<"Masukan sisi :  "; cin>>Bil1;
        Hasil = 4 * Bil1;
        cout<<"keliling persegi adalah : "<<Hasil<<endl;
    }

         void Persegi_Panjang()
    {
        cout<<""<<endl;
        cout<<"Menghitung keliling persegi panjang  : "<<endl;
        cout<<"Rumus Keliling persegi 2 * (P + L) : "<<endl;
        cout<<"Masukan Panjang :  "; cin>>Bil1;
        cout<<"Masukan Lebar :  "; cin>>Bil2;
        Hasil = 2 * Bil1 + 2 *  Bil2;
        cout<<"keliling persegi Panjang adalah : "<<Hasil<<endl;
    }

             void Segitiga()
    {
        cout<<""<<endl;
        cout<<"Menghitung keliling Segitiga  : "<<endl;
        cout<<"Rumus Keliling panjang AB + BC + CA : "<<endl;
        cout<<"Masukan Panjang AB :  "; cin>>Bil1;
        cout<<"Masukan Panjnag BC :  "; cin>>Bil2;
        cout<<"Masukan Panjnag CA :  "; cin>>Bil3;
        Hasil = Bil1 + Bil2 + Bil3 ;
        cout<<"keliling Segiiga sama kaki adalah : "<<Hasil<<endl;
    }



};

void Exit()
{
    cout<<"\n\tPROGRAM EXIT"<<endl;
    exit(0);
}

    int main()
    {
        atas :
        Perhitungan_Luas PL;
        Perhitungan_Keliling PK;
        int pil;
        cout<<"||+++++++++++++++++++++++++++++++++++++++++++||\n";
        cout<<"||         ***** PILIHAN MENU *****          ||\n";
        cout<<"||       ==PERHITUNGAN BANGGUN RUANG==       ||\n";
        cout<<"||1. MENGHITUNG LUAS                         ||\n";
        cout<<"||2. MENGHITUNG KELILING                     ||\n";
        cout<<"||3. EXIT                                    ||\n";
        cout<<"||+++++++++++++++++++++++++++++++++++++++++++||\n";
        cout<<"||MASUKAN PILIHAN ANDA :";cin>>pil;
        switch(pil)
        {
            case 1 :
                system("cls"); 
                int pil;
                Perhitungan_Luas();
                    cout<<"||++++++++++++++++++++++++++++++++||\n";
                    cout<<"||   ==== PERHITUNGAN LUAS ====   ||\n";
                    cout<<"||1. LUAS PERSEGI                 ||\n";
                    cout<<"||2. Luas Persegi Panjang         ||\n";
                    cout<<"||3. Luas Segitiga sama Kaki      ||\n";
                    cout<<"||++++++++++++++++++++++++++++++++||\n";
                    cout<<"||PILIH : ";cin>>pil;
                  if(pil == 1)
                    {
                        PL.Persegi();
                        cout<<endl;
                        goto atas;
                    }
                     else if(pil == 2)
                    {
                        PL.Persegi_Panjang();
                        cout<<endl;
                        goto atas;
                    }
                     else if(pil == 3)
                    {
                        PL.Segitiga();
                        cout<<endl;
                        goto atas;
                    }
                break;
            case 2:
                system("cls"); 
                int Pil;
                Perhitungan_Keliling();
                    cout<<"||++++++++++++++++++++++++++++++++++||\n";
                    cout<<"|| ==== PERHITUNGAN KELILING ====   ||\n";
                    cout<<"||1. KELILING PERSEGI               ||\n";
                    cout<<"||2. KELILING PERSEGI PANJANG        ||\n";
                    cout<<"||3. KELILING SEGITIGA SAMA KAKI    ||\n";
                    cout<<"||++++++++++++++++++++++++++++++++++||\n";
                    cout<<"||PILIH :";cin>>pil;

                  if(pil == 1)
                    {
                        PK.Persegi();
                        cout<<endl;
                        goto atas;
                    }
                     else if(pil == 2)
                    {
                        PK.Persegi_Panjang();
                        cout<<endl;
                          goto atas;
                    }
                     else if(pil == 3)
                    {
                        PK.Segitiga();
                        cout<<endl;
                        goto atas;
                    }
                break;
            case 3:
                Exit();
                break;

        }  

        return 0;

     }
