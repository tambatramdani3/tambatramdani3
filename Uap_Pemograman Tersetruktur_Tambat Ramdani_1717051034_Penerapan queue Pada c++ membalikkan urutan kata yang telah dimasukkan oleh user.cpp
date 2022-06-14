/*
Nama	:Tambat Ramdhani
NPM		:1717051034

UAP PEMOGRAMAN TERSTRUKTUR

STUDI KASUS :

1.Penerapan queue Pada c++
2.pada pemograman yang dibawah ini berfungsi untuk mebmbalikkan urutan kata
yang telah dimasukkan oleh user misal aku menjadi uka
3.Pada kodingan ini tidak menggunakan library stdlib.h

*/

//lIBRARY
#include <iostream> 
#include <conio.h>
#include <string>
#include <windows.h>
#include <vector>


using namespace std;

class Queue
{
    private:
    	
        int queueMaksimal; 
        
        vector<double> queueVector; 
        
        int atas; 

    public:
    	
        Queue(int s) : queueMaksimal(s), atas(-1)
        {
            queueVector.reserve(queueMaksimal); 
        }

        void push(double j) 
        {
        	
            queueVector[++atas] = j; 
            
        }

        double pop() 
        {
            return queueVector[atas--]; 
        } 

        double peek() 
        {
            return queueVector[atas];
        }

        bool jikaKosong() 
        {
            return (atas == -1);
        }

        bool jikaPenuh() 
        {
            return (atas == queueMaksimal-1);
        }
}; 

class Membalik_Kata
{
    private:
        string masukan; 
        string keluaran; 

    public:
        Membalik_Kata(string in) : masukan(in) 
        { }

        string lakukanPembalikan() 
        {
            
            int ukuranTumpukan = masukan.length();

            
            Queue tumpukan(ukuranTumpukan);

            for(int j=0; j<masukan.length(); j++)
            {
                char ch = masukan[j]; 
                tumpukan.push(ch); 
            }
            keluaran = "";
           
            while( !tumpukan.jikaKosong() )
            {
                char ch = tumpukan.pop(); 
                keluaran = keluaran + ch; 
            }
            return keluaran;
        } 
}; 

int main()
{
	
    string masukan, keluaran;
    system ("color 17");
    cout << "--------------------------------------------------------------------------------" <<endl;
    cout << "--------------------------------------------------------------------------------" <<endl;
    cout << "--------------------------------Pemograman QUEUE--------------------------------" <<endl;
    cout << "--------------------------------------------------------------------------------" <<endl;
    cout << "--------------------------------------------------------------------------------" <<endl;
    cout <<endl;
    cout <<endl;
    cout << "Silahkan Masukkan Sebuah Kata: ";
    while(true)
    {
        cin >> masukan; 
        cout << endl;
        if( masukan.length() < 2 )
            break;
        Membalik_Kata pembalik(masukan);
        keluaran = pembalik.lakukanPembalikan();
              cout << "Kata yang dibalik : " << keluaran << endl;
    } 

    getch();
    return 0;
} 
