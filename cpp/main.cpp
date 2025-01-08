/*
    Program: NumberAnalyzer
    Amaç: Bu proje, kullanıcı tarafından girilen sayıyı işaret yönünden analiz eder ve analiz sonucunu ekrana yazdırır.
    Yeni Özellikler: Döngü desteği sayesinde artık birden fazla sayı analiz edilebilir.
    Sürüm: 1.1.0
    Yazar: Burhan Arıkan
*/

#include <iostream>

int main() {
    char choice; // Kullanıcının devam etmek isteyip istemediğini tutar.
    
    do { // Döngü başlangıcı
        /* programın giriş mesajını yazdırır. */
        std::cout << "Welcome to NumberAnalyzer!" << std::endl;
        
        /* kullanıcıdan sayı alır. */
        int number;
        std::cout << "Enter a number to analyze: ";
        std::cin >> number;

        /* sayının işaret durumunu (pozitif, negatif veya 0) kontrol eder ve ekrana yazdırır. */
        if (number > 0) {
            std::cout << "The number is positive." << std::endl;
        } else if (number < 0) {
            std::cout << "The number is negative." << std::endl;
        } else {
            std::cout << "The number is zero." << std::endl;
        }

        /* Kullanıcıya devam etmek isteyip istemediğini sorar. */
        std::cout << "Would you like to analyze another number? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y'); // Kullanıcı 'Y' ya da 'y' girerse döngü devam eder.

    std::cout << "Thank you for using NumberAnalyzer! Goodbye!" << std::endl;

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

do {

yapılacakları belirten kodlar

} while (koşul);
    bu do - while döngüsüdür. önce do bloğu içindeki kodlar çalıştırılır. 
        sonra while () içindeki koşula bakılır. 
            koşul doğru olduğu sürece 
                do bloğu içindeki kodlar tekrar çalıştılır.

choice == 'Y' || choice == 'y') -> choice 'Y'ye VEYA 'y'ye eşitse doğru sonuç veren mantıksal ifade.
    == eşitlik sorgular (eşit mi? sorusunun cevabını döner, true veya false)
        || mantıksal VEYA anlamına gelir. (koşullardan en az biri doğruysa çalışır.)
*/
