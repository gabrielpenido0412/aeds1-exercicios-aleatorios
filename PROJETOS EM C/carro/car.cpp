#include "Car.h"
#include <string.h>
car::car(double capacidade, double consumo){
    this->capacidade=capacidade;
     this->consumo=consumo;
      this->distancia=0;
       this->combustivel_disponivel=0;
}
void car::abastecer(double quant){
    if(combustivel_disponivel<50){
        combustivel_disponivel+=quant;
    }
}
void car::mover(double d){
    double combustivel_necessario=d*consumo;
    if(combustivel_necessario<combustivel_disponivel){
        distancia+=d;
        combustivel_disponivel-=combustivel_necessario;
    }else{
        double distancia_possivel=combustivel_disponivel/consumo;
        distancia+=distancia_possivel;
        combustivel_disponivel=0;
    }
}
double car:: getcombustivel(){
    return combustivel_disponivel;
}
double car:: getdistancia(){
    return distancia;
}
