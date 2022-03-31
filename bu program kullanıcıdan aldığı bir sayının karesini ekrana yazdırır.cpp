#include <iostream>
using namespace std;
int main()
{
double sayi1, karesi;
setlocale(LC_ALL,"Turkish");
cout << "bu program kullanıcıdan aldığı bir sayının karesini ekrana yazdırır."<<endl;
cout << "bir sayı giriniz";
cin >> sayi1;
karesi = sayi1 * sayi1;
cout << "girdiğiniz sayının karesi" << karesi<<endl;
return 0;
}