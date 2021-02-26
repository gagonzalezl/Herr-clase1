#include<iostream>

 int main(int argc, char  **argv) {
   int x = 0;
   for (size_t i = 0; i < 10; i++) {
    std::cout << x << "hola mundo" << '\n';
    x++;
   }
   std::cout << "Gracias" << '\n';
  return 0;
}
