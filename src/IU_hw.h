#pragma once
#include "ferdtypes.h"

// 16 General-Purpose 32-Bit Registers (D7 – D0, A7 – A0)
//• 32-Bit Program Counter (PC)
//• 8-Bit Condition Code Register (CCR) 

union{
    u32 reg_data[8];
    u32 reg_addr[8];
} reg

u32 pc;
u8  ccr;


void    write_to_iu_reg_data(u32 input, u32 mask);
u32     read_from_i_reg_data(u32 reg_num);