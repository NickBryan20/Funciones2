#include <iostream>
using namespace std;
int mayor(int num1, int num2, int num3)
{
    int may;
    if(num1 > num2)
        if(num1 > num3)
            may=num1;
        else
            may=num3;
    else
    if(num2 > num3)
        may=num2;
    else
        may=num3;
}
string nombre_mes(int mes)
{
    string aux="";
    if(mes==1)
        aux="Enero";
    else if(mes==2)
            aux="Febrero";
    else if(mes==3)
            aux="Marzo";
    else if(mes==4)
        aux="Abril";
    else if(mes==5)
        aux="Mayo";
    else if(mes==6)
        aux="Junio";
    else if(mes==7)
        aux="Julio";
    else if(mes==8)
        aux="Agosto";
    else if(mes==9)
        aux="Septiembre";
    else if(mes==10)
        aux="Octubre";
    else if(mes==11)
        aux="Noviembre";
    else if(mes==12)
        aux="Diciembre";
    else
        aux = "Mes no disponible";
    return aux;
}
string cuadrado(int filas, char relleno)
{
    string aux="";
    for(int i=1; i<=filas; i++)
    {

        for (i = 1; i <= 10; i++)
            aux += relleno;
        aux=aux+ "\n";
    }
    return aux;

}
bool esPrimo(int num)
{
    int cont=2;
    bool flat=false;
    while(cont <= num/2 && flat==true){
        if( num % cont == 0 )
            flat = false;
        cont++;
    }
    return flat;
}
void imprimePrimo(int n)
{
    int i=1; int j=1;
    while(i<=n)
    {
        j++;
        if (esPrimo(j)==true)
        {
            cout<<" "<< j;
            i++;
        }
    }
}
int sumatoriaPrimos(int n )
{
    int i=1;   int j=1; int suma=0;
    while(i<=n)
    {
        j++;
        if (esPrimo(j))
        {
            suma+=j;    i++;
        }
    }
    return suma;
}
int diaMaximoDelMes(int mes, int anio)
{
    int limite=0;
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        limite=31;
    else if(mes== 2)
        if(anio%4 == 0)
            limite=29;
        else
            limite=28;
    else
        limite=30;

    return limite;

}
int main() {
    int may=mayor(20, 10,8);
    cout<<endl<<"El mayor de 20, 10, 8, es: "<<mayor(20,10,8);
    cout<<endl<<"El mayor de 20, 30, 21, es: "<<mayor(20,30,21);
    cout<<endl<<"EL mayor de  20, 30, 210, es: "<<mayor(20,30,210);

    cout<<endl<<"El mes 5 corresponde a "<<nombre_mes(5);
    cout<<endl<<"El mes 1 corresponde a "<<nombre_mes(1);
    cout<<endl<<"El mes 15 corresponde a "<<nombre_mes(15);
    cout<<endl<<"El mes 6 corresponde a "<<nombre_mes(6);

    cout<<endl;
    cout<<"Imprimiendo figuras"<<endl;
    cout<<cuadrado(5,'a');
    cout<<endl;
    cout<<cuadrado(3,'+');

    cout<<endl<<"Impresion de primos";
    imprimePrimo(5);

    cout<<endl<<"Enero trae" <<diaMaximoDelMes(1,2021)<<" DIAS";
    cout<<endl<<"Diciembre trae" <<diaMaximoDelMes(12,2021)<<" DIAS";
    cout<<endl<<"Junio trae" <<diaMaximoDelMes(6,2021)<<" DIAS";
    cout<<endl<<"Febrero de 2016 trae" <<diaMaximoDelMes(2,2016)<<" DIAS";

    int suma=sumatoriaPrimos(5);
    cout<<suma;
    cout<<sumatoriaPrimos( 5);
    return 0;
}
