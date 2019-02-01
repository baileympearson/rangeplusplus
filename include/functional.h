#ifndef FUNCTIONAL_H
#define FUNCTIONAL_H

#include <algorithm>

namespace functional {
	template <typename C, typename P>
	C filter(const C& container, P pred) {
		C tmp(container);
		auto it = std::remove_if(tmp.begin(),tmp.end(),pred);
		tmp.erase(it,tmp.end());
		return tmp;
	}

	template <typename C, typename F>
	C map(const C& container, F func) {
		C tmp(container);
		std::transform(tmp.begin(),tmp.end(),tmp.begin(),func);
		return tmp;
	}
}
#endif
