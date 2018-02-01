#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <iostream>
using namespace std;


class Example{

private: // As variáveis membro são privadas (encapsulamento)

    int number1;
    int number2;

public: // Os métodos são públicos

    Example();	// Método construtor padrão, sem parâmetros

    Example(int n1, int n2); // Método construtor com parâmetros

    ~Example();	// Método destrutor

    void setNumber1(int n1);	// Métodos modificadores set
    void setNumber2(int n2);

    int sum(); // Método para realizar a soma de duas variáveis int
};

#endif // EXAMPLE_H
