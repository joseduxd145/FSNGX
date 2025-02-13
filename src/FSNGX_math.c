#include <FSNGX_math.h>


uint64_t FSNGX_math_iPow(uint64_t base, uint32_t exp) {
    uint64_t result = 1;
    while(1) {
        if (exp & 1) result *= base;
        exp >>= 1;
        if (!exp) break;
        base *= base;
    }

    return result;
}

uint32_t FSNGX_math_iLog2(uint64_t num) {
    uint32_t index;

    if (num == 0) {
        return 0;
    }

#if defined(__clang__) || defined(__GNUC__)
    index = 63 - (uint32_t)__builtin_clzll(num);

#elif defined(_MSC_VER)
    _BitScanReverse64(&index, num);

#else
    while (n > 1) {
        n >>= 1;  // Desplaza los bits a la derecha.
        index++;
    }

#endif
    return index;
}

uint32_t FSNGX_math_findRange(uint64_t number) {
    uint32_t index;
    //uint64_t lower_limit;
    //uint64_t upper_limit;
    //const uint64_t num = 2;

    if (number < 1) {
        return 0;
    }

    // Calcular el índice del rango usando logaritmo en base 2
    index = FSNGX_math_iLog2(number);

    // El límite inferior del rango es 2^index, y el límite superior es
    // 2^(index+1)
    //lower_limit = ipow(num, index);
    //upper_limit = ipow(num, index + 1);

    return index;
}
