#pragma once
#include <IU.h>
#include <FPU.h>
#include <ferdtypes.h>

/* Main struct calling decoder, alongside the Integer + Floating Point unit */
typedef struct m68k{
    IU iu;
    FPU fpu;
} m68k;

void step_processor();

void IR_WRITE   (u32 reg    , u8 dest   , int latency   , u32 bit_enable);
void FPR_WRITE  (fp32 reg   , u8 dest   , int latency   , u32 bit_enable);
