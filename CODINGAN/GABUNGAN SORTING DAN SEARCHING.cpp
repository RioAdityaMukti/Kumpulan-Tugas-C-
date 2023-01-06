#include <iostream>

using namespace std;



void TampilArray(int nilai[20], int n)

{

    for (int i=0; i<n; i++)

    {

        cout<<nilai[i]<<' ';

    }cout<<endl;

}



void Search (int nilai [20], int n)

{

    int key, Ketemu;

    cout<<" \n Masukkan Angka Yang Akan DiCari : "; cin>>key;

    for(int i=0; i<n; i++)

   {

       if (nilai[i] == key)

       {

           Ketemu = 1;

           cout<<" \n Nilai yang dicari berada pada indeks ke- "<<i;

           break;

       }

   }

   cout<<endl;

   if(Ketemu ==0)

   {

       cout<< " Nilai Tidak Ditemukan "<<endl;

   }

}



int main()

{

    int nilai[20];

    int i,n,j,tmp;



    cout<<" \n ===Program Bubble Sort Dan Sequential Search === "<<endl;

    cout<<" \n Masukkan Banyaknya Elemen Array = "; cin>>n;

    cout<<endl;

    for(int i=0; i<n;i++)

    {

        cout<<" Elemen Array Ke-"<<i<<" : ";cin>>nilai[i];

    }

    cout<<"\n Data Sebelum diurut : ";

    TampilArray(nilai,n);

    Search(nilai,n);

    for(int i=1; i<n;i++)

    {

        for(int j=0;j<n-i;j++)

        {

        if (nilai[j] > nilai[j+1])

            {

                tmp=nilai[j];

                nilai[j]= nilai[j+1];

                nilai[j+1] = tmp;

            }

        }

    }

     cout<<" \n\n Data Setelah diurut : ";

     TampilArray(nilai,n);

     Search(nilai,n);



   cout<<" \n ====== RIO ADITYA MUKTI ======= "<<endl;

   return 0;

}
