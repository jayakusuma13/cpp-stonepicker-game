#include <iostream>
using namespace std;

int main(){

    int batuawal, batu1, batu2, batutotal, batusave1, batusave2, turn1, turn2;


    cout << "specify how much stones are available" << "\n";
    cin >> batuawal;


    while(batuawal>=0){

        turn1 = false;
        turn2 = false;

        //giliran pemain 1
        while(turn1 == false){
            cout << "Choose how many stones player 1 want to take : " << "\n";
            cin >> batu1;

            //validasi input
            if(batu1 > 4 || batu1 < 1){
                cout << "The picked stones must between 1 and 4" << "\n";

            }else if(batuawal < batu1){
                cout << "There is not enough stones available to take :(" << "\n";

            }else{
                batuawal = batuawal-batu1;
                batusave1 = batusave1 + batu1;
                cout << "Stones available : " << batuawal << "\n";
                turn1 = true;
            };
        }


        if(batuawal == 0){
          if(batusave1 < batusave2){
            cout << "player 2 won!" << "\n";
          }else{
            cout << "player 1 won!" << "\n";
          }
          break;
        };

        
        while(turn2 == false){
            cout << "Choose how many stones player 2 want to take : " << "\n";
            cin >> batu2;
            //validasi input
            if(batu2 > 4 || batu2 < 1){
                cout << "The picked stones must between 1 and 4" << "\n";

            }else if(batuawal < batu2){
                cout << "There is not enough stones available to take :(" << "\n";

            }else{
                batuawal = batuawal-batu2;
                batusave2 = batusave2 + batu2;
                cout << "Stones available : " << batuawal << "\n";
                turn2 = true;
            };
        }



    };
    return 0;
}
