#include <iostream>

using namespace std;  
  
// Fonksiyon prototipleri :  
void decToBin();  
void binToDec();  
  
int main(){  
      
    choice :  
      
    cout << "Press 0 to convert from decimal to binary" << endl;  
    cout << "Press 1 to convert from binary to decimal" << endl;  
    cout << "Press 2 to exit" << endl;  
      
    char vote;  
    cin >> vote;  
      
    switch (vote) {  
        case '0':  
            decToBin();  
            break;  
        case '1':  
            binToDec();  
            break;  
        case '2':  
            cout << "Program Over" << endl;  
            break;  
        default:  
            cout << "! Incorrect entry !" << endl;  
            goto choice;  
            break;  
    }  
      
    return 0;  
}  
  
void decToBin(){  
      
    long input;  
      
    cout << "Enter a decimal number : ";  
    cin >> input;  
      
    // Çeviri :  
      
    int n = 0, bin[100];  
      
    while (input > 0) {  
          
        if (input%2 == 0)  
            bin[n] = 0;  
        else  
            bin[n] = 1;  
          
        input /= 2;  
        n++;  
    }  
      
    cout << "Binary value : ";  
      
    for (n = n-1; 0 <= n; n--) {  
        cout << bin[n];  
    }  
      
    cout << endl << endl;  
      
    main();  
}  
  
void binToDec(){  
      
    long input;  
      
    enterNumber :  
      
    cout << "Enter a binary number : ";  
    cin >> input;  
      
    // Çeviri :  
    long dec = 0, num, s = 1;  
    while (input > 0)  
    {  
        num = input % 10;  
        dec = dec + num * s;  
        s = s * 2;  
        input = input / 10;  
    }  
      
    cout << "Decimal value : " << dec << endl << endl;  
      
    main();  
}