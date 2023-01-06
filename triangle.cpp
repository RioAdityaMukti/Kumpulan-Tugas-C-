#include <iostream>

using namespace std;

//variabel
int main() {
 int i, j, k, nomor;
 char chrt, align, sort;
 
 //output
 cout << "================================\n";
 cout << "====== ALL TRIANGLE CHARS ======\n";
 cout << "================================\n";
 
 cout << "Input height  : "; cin >> nomor;
 cout << "Input character : "; cin >> chrt;
 
 cout << "--------------------------------\n";
 
 do {
  cout << "Alignment (l/c/r) : "; cin >> align;
 } while (align != 'l' && align != 'L' && align != 'c' && align != 'C' && align != 'r' && align != 'R');
 
 
 do {
  cout << "Sorting (a/d) : "; cin >> sort;
 } while (sort != 'a' && sort != 'A' && sort != 'd' && sort != 'D');
 
 cout << "================================\n";
 
 switch (align)
    {
    case 'l': case 'L':
        switch (sort)
        {
        case 'a': case 'A':
            for(int i = 1; i <= nomor; i++)
            {
                for(int j=1;j<=i;j++){
                cout<<chrt;
            }
                cout<<endl;
            }
            return 0;
            break;
        case 'd': case 'D':
            for(int i = nomor; i >= 1; i--)
            {
                for(int j=1;j<=i;j++){
                cout<<chrt;
            }
                cout<<endl;
            }
            return 0;
            break;
        default:
            break;
        }
        break;
    case 'c': case 'C':
    switch (sort)
        {
        case 'a': case 'A':
            for(int i = 1, j = 0, k = 0; i <= nomor; i++){
                for(j = 1; j <= nomor-i; j++){
                    cout <<" ";
                }
                for (k=0; k<2*i-1; k++){
                    cout<<chrt;
                }
                cout << endl;
            }    
            return 0;
            break;
        case 'd': case 'D':
            for(int i=1; i<=nomor; i++){
                for(int j=1; j<i; j++) {
                    cout << " ";
                }
                for(int k=i; k<=nomor; k++){
                    cout<<chrt;
                }
                for(int k=i; k<nomor; k++){
                cout<<chrt;
                }
                cout << endl;
            }
            return 0;
            break;
        default:
            break;
        }
        break;
    case 'r': case 'R':
        switch (sort)
        {
        case 'a': case 'A':
            for (int i=1; i<=nomor; i++){
                for (int j=nomor-i; j>0; j--) {
                    cout<<" ";
                }
                for (int k=1; k<=i; k++)
                {
                    cout<<chrt;
                }
                cout<<endl;
            }
            break;
        case 'd': case 'D':
            for (int i=1; i<=nomor; i++)
            {
                for (int j=1; j<i; j++){
                    cout << " ";
                }
                for (int k=1; k<=nomor-i+1; k++){
                    cout << chrt;
                }
                cout << endl;
            }
            return 0;
            break;
        default:
            break;
        }
        break;
    default:
        break;;
    }
}
