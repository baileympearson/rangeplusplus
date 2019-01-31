#ifndef RANGEPLUSPLUS_RANGE_H
#define RANGEPLUSPLUS_RANGE_H

class range {
	int _begin, _end, _step, _cur;


	range(int begin,int end,int step, int cur) : _begin(begin),
													_end(end),
													_step(step),
													_cur(cur)	{}

public:
	range(int n) : _begin(0), _end(n), _step(1), _cur(_begin) {}
	range(int begin,int end) : _begin(begin), _end(end), _step(1),_cur(begin) {}
	range(int begin,int end,int step) : _begin(begin), _end(end), _step(step), _cur(begin) {
		if (step == 0)
			throw std::invalid_argument("'step' parameter cannot be zero");
	}

	bool operator==(const range& rhs) const {
		return !(*this != rhs);
	}
	bool operator!=(const range& ) const {
		if (_step > 0) {
			return _cur < _end;
		} else {
			return _cur > _end;
		}
	}

	range& operator++() {
		_cur += _step;
		return *this;
	}

	range operator++(int) {
		range tmp(*this);
		++*this;
		return tmp;
	}

	// returns _cur
	int operator*() const {
		return _cur;
	}

	// returns a range object with _cur set to _begin
	range begin() {
		return *this;
	}

	// returns a range object with _cur set to _end
	range end() {
		return range(_begin, _end, _step, _end);
	}
};
#endif
