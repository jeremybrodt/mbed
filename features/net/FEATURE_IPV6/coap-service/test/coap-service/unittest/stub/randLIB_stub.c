/*
 * Copyright (c) 2014-2015 ARM Limited. All Rights Reserved.
 */
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include "randLIB.h"
#include "platform/arm_hal_random.h"

#if ((RAND_MAX+1) & RAND_MAX) != 0
#error "RAND_MAX isn't 2^n-1 :("
#endif

int counter = 1;

void randLIB_seed_random(void)
{
}

uint8_t randLIB_get_8bit(void)
{
    return 0;
}

uint16_t randLIB_get_16bit(void)
{
    return 0;
}

uint32_t randLIB_get_32bit(void)
{
    return 0;
}

int8_t randLIB_get_n_bytes_random(uint8_t *data_ptr, uint8_t eight_bit_boundary)
{
    if(data_ptr && eight_bit_boundary > 0){
        data_ptr[0] = counter++%255;
    }
    return 0;
}

uint16_t randLIB_get_random_in_range(uint16_t min, uint16_t max)
{
    return 0;
}

uint32_t randLIB_randomise_base(uint32_t base, uint16_t min_factor, uint16_t max_factor)
{
    return 0;
}
