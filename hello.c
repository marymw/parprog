#include <stdio.h>
#include <omp.h>

int main()
{
    #pragma omp parallel
    {
        // Код внутри блока выполняется параллельно.
        printf("Hello! \n");
    }
    return;
}
