#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int res, num, bin, cont, numbin;
    cont=0;
    bin=0;

    printf("Escribir un numero: ");
    scanf("%d", & num);

    do{
        res=num%2;
        bin=bin+pow(10,cont*res);
        cont++;
        num=num/2;

    }while(num>1);

    numbin=bin+pow(10, cont);
    printf("Su numero es: %d ", numbin);
    return 0;
}
