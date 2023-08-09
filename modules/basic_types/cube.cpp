/* cube.cpp */

#include "cube.h"

#include "scene/3d/mesh_instance_3d.h"
#include "scene/resources/box_shape_3d.h"
#include "scene/resources/primitive_meshes.h"

cube::cube()
: _mesh_instance{std::make_unique<MeshInstance3D>()}
, _shape{std::make_unique<BoxShape3D>()}
{
	// auto mesh = new BoxMesh();
	// _mesh_instance->set_mesh(mesh);

	this->add_child(_mesh_instance.get());
	// add_child(_shape.get());
}

void cube::_bind_methods() {}
