#include <stdio.h>
#include <omp.h>

int main()
{
    //omp_set_num_threads(int num);
    //#pragma omp parallel
    //{
    printf("max tr is %d\n", omp_get_max_threads());
        // Код внутри блока выполняется параллельно.
        printf("Hello! \n");
    //}
    return;
}
