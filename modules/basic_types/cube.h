#ifndef CUBE_H
#define CUBE_H

#include "scene/3d/physics_body_3d.h"
#include "forward_decs.h"

class cube : public RigidBody3D {
	GDCLASS(cube, RigidBody3D)

protected:
	// static void _bind_methods();

	std::unique_ptr<MeshInstance3D> _mesh_instance;
	std::unique_ptr<BoxShape3D> _shape;
public:
	cube();
};

#endif // CUBE_H
