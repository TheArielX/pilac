#include <stdio.h>
#include <stdlib.h>
int init (int i, int p[9])
    {
        for (i=0; i<9; i++)
        {
            p[i]=0;
        }
    }

void push (int i, int p[9])
{

    for (i=0; i<=9; i++)
        {
            if (p[i]==0)
            {
                p[i]=i+1;
                printf("Se asigno el valor %d al espacio de memoria %d\n", p[i], p[i]);
            }
        }
        system("pause");
        system("cls");
}

void pop (int i, int p[9])
{
    for (i=0; i<=9; i++)
    {
        if (p[i]!=0)
        {
            p[i]=i-i;
            printf("Se limpio el espacio de memoria %d\n", p[i+1]);
        }
    }
    system("pause");
    system("cls");
}

void menu(int y, int i, int p)
{
    printf("Menu\nPresione 1 para push\nPresione 2 para pop\nPresione 3 para peek\n");
        scanf("%d", &y);

            if (y==1)
            {
                push(i, p);
                menu(y, i, p);
            }

            if (y==2)
            {
                pop(i, p);
                menu(y, i, p);
            }

}

int main()
{
int y, p[9], i;

    init(i, p);
    menu(y, i, p);
}
