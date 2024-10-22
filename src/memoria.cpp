#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int   entero = 0;
    bool  booleano = true;
    char  letra = 'A';
    float decimal = 0.5;

    cout<<"Tamaño entero: " <<sizeof(entero) <<endl;
    cout<<"Tamaño booleano: " <<sizeof(booleano) <<endl;
    cout<<"Tamaño letra: " <<sizeof(letra) <<endl;
    cout<<"Tamaño decimal: " <<sizeof(decimal) <<endl;

    return 0;
}
