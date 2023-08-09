/* summator.cpp */

#include "summator.h"

void summator::add(int p_value) {
	count += p_value;
}

void summator::reset() {
	count = 0;
}

int summator::get_total() const {
	return count;
}

void summator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &summator::add);
	ClassDB::bind_method(D_METHOD("reset"), &summator::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &summator::get_total);
}

summator::summator() {
	count = 0;
}
