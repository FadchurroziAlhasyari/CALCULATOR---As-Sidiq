#include<iostream>
using namespace std;

class Calculator{
      void_pertambahan();
      void_pengurangan();
      void_perkalian();
      void_pembagian();
}

void_pertambahan(){                
      int x, y;
      
      cout<<"OPERASI PENJUMLAHAN"<<endl<<endl;
      cout<<"Masukkan Angka pertama : ";
      cin>>x;
      cout<<"Masukkan Angka kedua  : ";
      cin>>y;
      cout<<"Hasil Penjumlahan : "<< x + y;
  }
void_pengurangan(){                
    int x, y;
    
    cout<<"OPERASI PENGURANGAN"<<endl<<endl;
    cout<<"Masukkan Bilangan Pertama : ";
    cin>>x;
    cout<<"Masukkan Bilangan kedua : ";
    cin>>y;
    cout<<"Hasil Pengurangan = "<<x - y;
}

 void perkalian(){                    
        int x, y;
   
        cout<<"OPERASI PERKALIAN"<<endl<<endl;
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Perkalian : " << x * y << endl;
    }
void_pembagian(){                      //method pembagian
        int x, y;
   
        cout<<"OPERASI PEMBAGIAN"<<endl<<endl;
        cout << "Masukkan Nilai X  : ";
        cin >> x;
        cout << "Masukkan Nilai Y  : ";
        cin >> y;
        cout << "Hasil Pembagian : " << x / y << endl;
    }
