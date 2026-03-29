#include <stdio.h>
#include <math.h> 

int main() {


   // const означає, що значення змінювати не можна
   const float a = -3.0;
   const float b = 4.0;
   const float c = 13.0;
   float y;

   // Обчислення за формулою:
   // y = (a + 4b - c^2) / (2abc)
   // c * c — це c²
   y = (a + 4 * b - c * c) / (2.0 * a * b * c);

   // Виведення початкових даних
   printf("Вхідні дані: a = %.0f, b = %.0f, c = %.0f\n", a, b, c);

   // Виведення результату (6 знаків після коми)
   printf("Результат обчислення y = %.6f\n", y);
 
   return 0; // завершення програми
}
