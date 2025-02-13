#ifndef FSNGX_MATH_H
#define FSNGX_MATH_H

#include <stdint.h>

extern uint64_t FSNGX_math_iPow(uint64_t base, uint32_t exp);
extern uint32_t FSNGX_math_iLog2(uint64_t num);
extern uint32_t FSNGX_math_findRange(uint64_t number);

#endif
