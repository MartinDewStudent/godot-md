#ifndef CUBE_H
#define CUBE_H

#include "forward_decs.h"
#include "scene/3d/physics_body_3d.h"

class Cube : public RigidBody3D {
GDCLASS(Cube, RigidBody3D)

protected:
	// static void _bind_methods();
	std::unique_ptr<MeshInstance3D> _mesh_instance;
	std::unique_ptr<CollisionShape3D> _shape;
public:
	Cube();
	void _ready();
};

#endif // CUBE_H
