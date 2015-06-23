/* Hello World program */

#include<stdio.h>
#include "my_header.h"
#include "my_header2.h"

int main(void)
{
    printf("Hello World\n");
    printf("Defined in header file my_head.h  ONE = %d\n", ONE);
    printf("Defined in header file my_head2.h TWO = %d\n", TWO);
    
    return 0;
}
