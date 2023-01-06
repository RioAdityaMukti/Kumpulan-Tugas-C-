#include <iostream>



using namespace std;







int main() {







    int brs, barisdata, klm, kolomdata, data, k, j;



    int matrix[9][9];



    char again;







    cout << "=============================" << endl;



    cout << "==   Array Multidimensi    ==" << endl;



    cout << "==         Matrix          ==" << endl;



    cout << "==    RIO ADITYA MUKTI     ==" << endl;



    cout << "=============================" << endl;







    do {



        cout << "Input Banyak Baris [1-9] : "; cin >> brs;



    } while (brs < 1 || brs > 9);







    do {



        cout << "Input Banyak Kolom [1-9} : "; cin >> klm;



    } while (brs < 1 || brs > 9);







    cout << "-----------------------------" << endl;



    for (k = 0; k < brs; k++) {



        cout << "|";



        for (j = 0; j < klm; j++) {



            matrix[k][j] = 0;



            cout << " " << matrix[k][j] << " ";



        }



        cout << "|" << endl;



    }



    do {



    	cout << "-----------------------------" << endl;



    	cout << "Input Nilai Data dgn format (baris,kolom=data) contoh: 1,2=8" << endl;



    	cout << "Nilai baris,kolom mulai dari 0, Nilai data antara 1-9" << endl;



    	cout << ": "; scanf("%d,%d=%d", &barisdata, &kolomdata, &data);







    	while (barisdata > brs && kolomdata > klm && (data < 1 || data > 9)) {



        	cout << "format salah" << endl;



        	cout << "Input Nilai Data dgn format (baris,kolom=data) contoh: 1,2=8" << endl;



        	cout << "Nilai baris,kolom mulai dari 0, Nilai data antara 1-9" << endl;



        	cout << ": "; scanf("%d,%d=%d", &barisdata, &kolomdata, &data);



    	}







        cout << "-----------------------------" << endl;



        for (k = 0; k < brs; k++) {



            cout << "|";



            for (j = 0; j < klm; j++) {



                if(k == barisdata && j == kolomdata) {



                    matrix[k][j] = data;



                    cout << " " << matrix [k][j] << " ";



                } else {



                   cout << " " << matrix[k][j] << " ";

                }

        	}

        	cout << "|" << endl;

		}





        cout << "-----------------------------" << endl;

        cout << "Input lagi Nilai Data? (y/n) : "; cin >> again;

        if (again == 'n' || again == 'N') break;

        while (k>brs && j>klm && (data<1||data>9))

    {

        cout<<"format salah";

        cout<<"Input Nilai Data dgn format (baris,kolom=data) contoh: 1,2=8\nNilai baris,kolom mulai dari 0, Nilai data antara 1-9\n: ";

        scanf("%d,%d=%d", &brs, &klm, &data);

    }



    } while (again == 'y' || again == 'Y');





    return 0;

}
