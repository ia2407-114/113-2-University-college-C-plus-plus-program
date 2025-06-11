#include <iostream>
#include "Pet.h" 
using namespace std;



int main()
{
   int entry = 1;
   string pet_type, pet_name;
   unsigned int birthdate_m,birthdate_d,birthdate_y; // Declare variables of the struct type
   unsigned int adoptdate_m,adoptdate_d,adoptdate_y; // Declare variables of the struct type

   

   while (entry!=0)
   {
       try {
           //cout << "輸入領養日期:";
           cout << "輸入寵物領養日(Enter區分:月/日/年):";
           cin >> adoptdate_m >> adoptdate_d >> adoptdate_y;
           //cout << "輸入出生日期:";
           cout << "輸入寵物出生日(Enter區分:月/日/年):";
           cin >> birthdate_m >> birthdate_d >> birthdate_y;
           cout << "輸入寵物類型:";
           cin >> pet_type;
           cout << "輸入寵物名稱:";
           cin >> pet_name;
           Date birth(birthdate_m, birthdate_d, birthdate_y);
           Date adopt(adoptdate_m, adoptdate_d, adoptdate_y);
           Pet manager(pet_type, pet_name, birth, adopt);
           cout << "輸入執行動作(1:繼續執行;0:結束執行):";
           cin >> entry;
           cout << endl;
       }
       catch (invalid_argument&e) {
           cout << "錯誤資訊:" << e.what() << endl;
       }
   }
}