/*
Nama        : Raihan Muhammad Aditia
NPM         : 140810170032
Kelas       : B
*/

#include <iostream>
#include <string.h>
using namespace std;

main() {
    int key; 

    	cout << "Shift Chipher";
    	cout << "\n----------------------------------------------------------------- ";
        cout << "\nMasukkan Nama  	: ";
        string teks = "";
        getline(cin >> ws, teks);

        cout << "Massukkan Key   : ";
        cin >> key;
        
        char ch;
        for(int i = 0; teks[i] != '\0'; ++i) {
            ch = teks[i];
            
            if (ch >= 'a' && ch <= 'z') {		//Algoritma Untuk Enkripsi
                ch = ch + key;
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }  
                teks[i] = ch;
            }
            
            else if (ch >= 'A' && ch <= 'Z') {	//Algoritma Untuk Dekripsi
                ch = ch + key;
                if (ch > 'Z') {
                    ch = ch - 'Z' + 'A' - 1;
                }
                teks[i] = ch;
            }
        }
        cout << "\n----------------------------------------------------------------- ";
        cout << "\nHasil Enkripsi Ciphertext     : " << teks << "\n";
        
        for(int i = 0; teks[i] != '\0'; ++i) {
            ch = teks[i];
        
            if(ch >= 'a' && ch <= 'z') {
                ch = ch - key;
                if(ch < 'a') {
                    ch = ch + 'z' - 'a' + 1;
                }
            teks[i] = ch;
            }
    
            else if(ch >= 'A' && ch <= 'Z') {
                ch = ch - key;
                if(ch < 'A') {
                    ch = ch + 'Z' - 'A' + 1;
                }
                teks[i] = ch;
            }
        }
        cout << "Hasil Dekripsi Plaintext      : " << teks << "\n";
        cout << "\n----------------------------------------------------------------- ";
	}

