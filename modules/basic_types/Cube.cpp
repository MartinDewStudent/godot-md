/* Cube.cpp */

#include "Cube.h"

#include "scene/3d/mesh_instance_3d.h"
#include "scene/resources/box_shape_3d.h"
#include "scene/3d/collision_shape_3d.h"
#include "scene/resources/primitive_meshes.h"

Cube::Cube() :
		_mesh_instance{ std::make_unique<MeshInstance3D>() }, _shape{ std::make_unique<CollisionShape3D>() } {}

void Cube::_ready() {
	auto mesh = new BoxMesh();
	_mesh_instance->set_mesh(mesh);

	this->add_child(_mesh_instance.get(), false, INTERNAL_MODE_BACK);

	_shape->set_shape(new BoxShape3D());
	this->add_child(_shape.get(), false, INTERNAL_MODE_BACK);
}

// void Cube::_bind_methods() {}
