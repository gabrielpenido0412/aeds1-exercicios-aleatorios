#include <iostream>
#include "Car.h"
using namespace std;
int main(){
   car carro(50,0.2);
   cout<<"\n"<<carro.getcombustivel();
   carro.abastecer(50);
   carro.mover(20);
   cout<<"\n"<<carro.getcombustivel();
   cout<<"\n"<<carro.getdistancia();
   return 0;
}
