#include <iostream>

int main() {
    /*programın giriş mesajı*/
    std::cout << "Welcome to NumberAnalyzer!" << std::endl;
    
    /*kullanıcıdan sayı alır*/
    int number;
    std::cout << "Enter a number to analyze: ";
    std::cin >> number;

    /*sayının işaret durumunu (pozitif, negatif veya 0)
    ekrana yazdırır.
    */
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}

/*
c++ açıklamaları:

std::cin >> number; -> Kullanıcıdan bir değer alır 
    ve bu değeri number değişkenine atar.

number > 0 -> Bu bir koşuldur. (number değişkeninin değeri 
    0'dan büyükse true, değilse false döndürür.)

if(birinci koşul) {
birinci koşul sağlanırsa çalıştırılacak kodlar;
} else if (ikinci koşul) {
birinci koşul sağlanmazsa ancak
    ikinci koşul sağlanırsa çalıştırılacak kodlar;
} else {
hiç bir koşul sağlanamazsa çalıştırılacak kodlar;
}
    bu if - else if - else ifadelerini barındıran yapı 
        bir karar yapısıdır.
*/