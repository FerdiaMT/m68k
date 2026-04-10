#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <m68k.h>

int main()
{
    printf("HEllo\n");

    m68k processor;

    step_processor();

    return 0;
}