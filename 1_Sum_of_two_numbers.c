#include <stdio.h>
#include <math.h>

int Sum_of_two_numbers()
{
    printf("[%s %d]\n",__FUNCTION__,__LINE__);
    printf("[%s %d]\n",__FUNCTION__,__LINE__);

}

int main() 
{
    printf("The first day: call Sum_of_two_numbers\n");
    Sum_of_two_numbers();
}