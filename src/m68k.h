#pragma once
#include <IU.h>
#include <FPU.h>

/* Main struct calling decoder, alongside the Integer + Floating Point unit */
typedef struct m68k{
    IU iu;
    FPU fpu;
} m68k;

void step();