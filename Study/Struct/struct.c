#include <stdio.h>
#include <string.h>

//Definição da estrutura de uma tabela, por exemplo.

typedef struct 
{
    char    id[10];
    char    name[50];
    int age;
    int grades[5];
} Student_data;

//Se não tivesse usado o typedef era o mesmo input na função.
void    print_student(Student_data student)
{
    printf("Name: %s\n", student.name);
    printf("ID: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grades: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", student.grades[i]);
    printf("\n");
}

int main(void)
{
    Student_data uatilla = {"00001", "Uatilla", 26}; //criando uma linha para o usuário na tabela.
    printf("My 1 PID: %s", get)
    //Preencher o conteúdo dessa linha em cada coluna da tabela.
    /*strcpy(uatilla.id, "00001");
    strcpy(uatilla.name, "uatilla");
    uatilla.age = 26;
    uatilla.grades[0] = 7;
    uatilla.grades[1] = 8;
    uatilla.grades[2] = 8;
    uatilla.grades[3] = 9;
    uatilla.grades[4] = 10;*/

    //Acessar o conteúdo inserido;
    print_student(uatilla);   

    return (0);
}