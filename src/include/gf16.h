#ifndef GF16_H
#define GF16_H

#include <cstdint>
#include <array>

namespace fq
{
    // Таблица индексов
    std::array<uint8_t, 15> exp_table = {
        1, 2, 4, 8, 3, 6, 12, 11, 5, 10, 7, 14, 15, 13, 9 
    };

    // Таблица логарифмов
    std::array<uint8_t, 16> log_table = {
        UINT8_MAX, 0, 1, 4, 2, 8, 5, 10, 3, 14, 9, 7, 6, 13, 11, 12
    };

    inline uint8_t gf_add(uint8_t a, uint8_t b)
    {
        return a ^ b;
    }

    inline uint8_t gf_sub(uint8_t a, uint8_t b)
    {
        return a ^ b;
    }

    inline uint8_t gf_mul(uint8_t a, uint8_t b)
    {
        return exp_table[(log_table[a] + log_table[b]) % 15];
    }

    inline uint8_t gf_inv(uint8_t a)
    {
        return exp_table[15 - log_table[a]];
    }

    inline uint8_t gf_exp(uint8_t a, int exp)
    {
        return exp_table[exp * log_table[a] % 15];
    }
}

#endif