#include <iostream>
#include <conio.h>
#include <math.h>
#include <dos.h>

using namespace std;
main() {
    mulai:
    int pilihan,bilangan1,bilangan2,hasil;
    cout <<"program fungsi kalkulator\n\n";
    cout <<"========================\n\n";
    cout <<"pilihan menu operasi : \n";
    cout <<"1.Penjumlahan (+)\n";
    cout <<"2.Pengurangan (-)\n";
    cout <<"3.Perkalian (*)\n";
    cout <<"4.Pembagian (/)\n";
    cout <<"0.keluar dari aplikasi\n";
    cout <<"Masukan pilihan anda[0..4] :";
    cin >>pilihan;

        switch(pilihan)
        {

        case 1:
            cout<<"input bilangan 1 = ";cin>>bilangan1;
            cout<<"input bilangan 2 = ";cin>>bilangan2;
            hasil=bilangan1+bilangan2;
            cout<<"Hasil penjumlahan = "<<hasil<<endl<<endl;
            getch();
            goto mulai;
        case 2:
            cout<<"input bilangan 1 = ";cin>>bilangan1;
            cout<<"input bilangan 2 = ";cin>>bilangan2;
            hasil=bilangan1-bilangan2;
            cout<<"Hasil pengurangan = "<<hasil<<endl<<endl;
            getch();
            goto mulai;
        case 3:
            cout<<"input bilangan 1 = ";cin>>bilangan1;
            cout<<"input bilangan 2 = ";cin>>bilangan2;
            hasil=bilangan1*bilangan2;
            cout<<"Hasil perkalian = "<<hasil<<endl<<endl;
            getch();
            goto mulai;
        case 4:
            cout<<"input bilangan 1 = ";cin>>bilangan1;
            cout<<"input bilangan 2 = ";cin>>bilangan2;
            hasil=bilangan1/bilangan2;
            cout<<"Hasil pembagian = "<<hasil<<endl<<endl;
            getch();
            goto mulai;

            default:cout<<"\nTidak ada pilihan,silahkan masukan pilihan yang benar\n\n";
            getch();
            goto mulai;

        }

        getch();
        return 0;
}
