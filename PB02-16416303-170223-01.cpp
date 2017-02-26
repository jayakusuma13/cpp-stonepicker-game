// NIM/Nama : 16416303
// Nama file: PB02-16416303-170223-01.cpp
// Tanggal  : 23 Febuari 2017
// Deskripsi: program permainan ambil batu
#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    int batuawal, batu1, batu2, batutotal, batusave1, batusave2, turn1, turn2;


    cout << "masukkan batu awal" << "\n";
    cin >> batuawal;

    //looping utama
    while(batuawal>=0){
        //set boolean sebagai parameter loop validasi
        turn1 = false;
        turn2 = false;

        //giliran pemain 1
        while(turn1 == false){
            cout << "Masukan jumlah batu yang diambil pemain 1 : " << "\n";
            cin >> batu1;

            //validasi input
            if(batu1 > 4 || batu1 < 1){
                cout << "Jumlah batu harus berada diantara 1 dan 4!" << "\n";

            }else if(batuawal < batu1){
                cout << "Banyak batu yang tersisa lebih sedikit dibanding batu yang diambil :(" << "\n";

            }else{
                batuawal = batuawal-batu1;
                batusave1 = batusave1 + batu1;
                cout << "Banyak batu tersisa : " << batuawal << "\n";
                turn1 = true;
            };
        }

        //cek jumlah batu yang masih tersisa
        if(batuawal == 0){
          if(batusave1 < batusave2){
            cout << "pemain 2 menang!" << "\n";
          }else{
            cout << "pemain 1 menang!" << "\n";
          }
          break;
        };

        //giliran pemain 2
        while(turn2 == false){
            cout << "Masukan jumlah batu yang diambil pemain 2 : " << "\n";
            cin >> batu2;
            //validasi input
            if(batu2 > 4 || batu2 < 1){
                cout << "Jumlah batu harus berada diantara 1 dan 4!" << "\n";

            }else if(batuawal < batu2){
                cout << "Banyak batu yang tersisa lebih sedikit dibanding batu yang diambil :(" << "\n";

            }else{
                batuawal = batuawal-batu2;
                batusave2 = batusave2 + batu2;
                cout << "Banyak batu tersisa : " << batuawal << "\n";
                turn2 = true;
            };
        }



    };
    return 0;
}
