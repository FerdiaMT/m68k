#pragma once
#include "ferdtypes.h"

// • 8 Floating-Point Data Registers (FP7 – FP0)
// • 16-Bit Floating-Point Control Register (FPCR)
// • 32-Bit Floating-Point Status Register (FPSR)
// • 32-Bit Floating-Point Instruction Address Register (FPIAR) 

u8 reg_fp[8];
u16 FPCR;
u32 FPSR;
u32 FPIAR;

void write_to_fpu_reg_fp(u8 input, u8 mask);
u8 read_from_fpu_reg_fp(u8 reg_num);