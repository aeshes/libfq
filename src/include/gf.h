#ifndef GF_H
#define GF_H

#include <cstdint>

namespace fq
{
	using gf_symbol = uint8_t;

	gf_symbol add(gf_symbol a, gf_symbol b);
	gf_symbol sub(gf_symbol a, gf_symbol b);
	gf_symbol mul(gf_symbol a, gf_symbol b, uint32_t mod);
	gf_symbol div(gf_symbol a, gf_symbol b, uint32_t mod);
	gf_symbol exp(gf_symbol a, uint32_t exp, uint32_t mod);
}

#endif
