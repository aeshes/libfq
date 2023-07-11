#include "gf.h"
#include "misc.h"

namespace fq
{
	gf_symbol add(gf_symbol a, gf_symbol b)
	{
		return a ^ b;
	}

	gf_symbol sub(gf_symbol a, gf_symbol b)
	{
		return a ^ b;
	}


	gf_symbol mul(gf_symbol a, gf_symbol b, uint32_t mod)
	{
		gf_symbol result = 0;

		int deg = degree(mod);

		while (a != 0)
		{
			if (a & 1)
				result ^= b;
			a >>= 1;
			b <<= 1;
			if (degree(b) == deg)
				b ^= mod;
		}

		return result;
	}

	gf_symbol exp(gf_symbol a, uint32_t exp, uint32_t mod)
	{
		gf_symbol result = 1;

		while (exp != 0)
		{
			if (exp & 1)
				result = mul(result, a, mod);
			a = mul(a, a, mod);
			exp >>= 1;
		}

		return result;
	}
}

