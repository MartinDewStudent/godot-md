#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "core/object/ref_counted.h"

class summator : public RefCounted {
	GDCLASS(summator, RefCounted);

	int count;

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;

	summator();
};

#endif // SUMMATOR_H
