/* register_types.cpp */

#include "register_types.h"

#include "Cube.h"
#include "core/object/class_db.h"

void initialize_basic_types_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<Cube>();
}

void uninitialize_basic_types_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// Nothing to do here in this example.
}
