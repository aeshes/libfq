#ifndef GF_H
#define GF_H

#include <cstdint>

namespace fq
{
	using gf_symbol = uint8_t;

	gf_symbol gf_add(gf_symbol a, gf_symbol b);
	gf_symbol gf_sub(gf_symbol a, gf_symbol b);
	gf_symbol gf_mul(gf_symbol a, gf_symbol b, uint32_t mod);
	gf_symbol gf_div(gf_symbol a, gf_symbol b, uint32_t mod);
	gf_symbol gf_exp(gf_symbol a, uint32_t exp, uint32_t mod);
}

#endif
