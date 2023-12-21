#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int *hola;//Solo almacena la direccion de memoria de este tipo de variable osea int
    
    //tipos de uso:
    int *ap1:
    
    char *ap1,*ap2;
    
    float *ap2;
    //.
    
    
    int i=5;
    int *p, *q;
    p=&i;
    q=p;
    
    char c="z";
    char *pc=%c;//Señala a la variable c 
    char **ppc=%pc;//Señala a la variable *pc
    char ***pppc=%ppc;//Señala a la variable **pc
    ***pppc="m";//valor DE C se vuelve "M"
    
    cin.get();
    cin.get();
    return 1;
}
