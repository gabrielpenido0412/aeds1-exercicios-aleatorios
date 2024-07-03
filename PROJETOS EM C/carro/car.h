#ifndef CAR_H
#define CAR_H
class car {
    private:
        double capacidade;
        double consumo;
        double combustivel_disponivel;
        double distancia;
    public:
        car(double capacidade, double consumo);
        void abastecer(double);
        void mover(double);
        double getcombustivel();
        double getdistancia();
};
#endif // CAR_H


