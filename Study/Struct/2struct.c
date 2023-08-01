#include <stdio.h>
#include <string.h>

//Definição da estrutura de uma tabela, por exemplo.

typedef struct 
{
    int x;
    int y;
} point;

typedef struct {
     point pt1;
     point pt2;
} rect;

int main(void)
{
    point pt1 = {3, 4}; 
    point pt2 = {8, 12};//criando uma linha para o usuário na tabela.

    rect screen = {pt1, pt2};
    
    printf("%d", screen.pt1.x);
    printf("\n%p", &(screen.pt1.x));

    return (0);
}