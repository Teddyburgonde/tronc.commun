
#include <stdio.h>
#include <stdarg.h>

int partager_bonbon(int nombre_amis, ...)
{
    int total_bonbons;
    int i;

    i = 0;
    total_bonbons = 0;
    
    //initialisation et declaration de variables
    va_list sac_a_dos;
    va_start(sac_a_dos, nombre_amis);
    
    while (i < nombre_amis)
    {
        total_bonbons += va_arg(sac_a_dos, int);
        printf("Donner un bonbon a lami %d\n", i + 1);
        ++i;
    }

    va_end(sac_a_dos);
    return (total_bonbons);
}

int main(void)
{
    int total1 = partager_bonbon(3, 5, 3, 2);
    int total2 = partager_bonbon(5, 1, 2, 3, 4, 5);

    printf("Total de bonbons donnes : %d\n", total1 + total2);
    return (0);
    
}
