
#include <stdio.h>

using namespace std;

int arrayInput[400] = {
    -1, -1, -1, -1, -1, -1,  1,  3,  3,  3,  3,  3,  3,  1, -1, -1, -1, -1, -1, -1,  
    -1, -1, -1, -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1, -1, -1, -1,  
    -1, -1, -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1, -1, -1,  
    -1, -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1, -1,  
    -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1,  
    -1,  2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2, -1,  
    1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1,  
    1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1,  
    2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2,  
    2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2,  
    2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2,  
    2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2,  
    1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1,  
    1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1,  
    -1,  2,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  2, -1,  
    -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1,  
    -1, -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1, -1,  
    -1, -1, -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1, -1, -1,  
    -1, -1, -1, -1,  1,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  1, -1, -1, -1, -1,  
    -1, -1, -1, -1, -1, -1,  1,  3,  3,  3,  3,  3,  3,  2, -1, -1, -1, -1, -1, -1  
};

int arrayOutput [400] ;
int cantidadAsumar = 0;
int seimprime = 0;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 400; i++)
    {
        if (arrayInput[i]==-1)
        {
            arrayOutput[i]=-1;
        }
        if (arrayInput[i]>-1)
        {
            arrayOutput[i]=cantidadAsumar;
            cantidadAsumar = cantidadAsumar + arrayInput[i];
        }   
        seimprime = arrayOutput[i];
        printf("%d \n" , seimprime);        
    }    
    return 0;
}
