#include "Collider.h"

void Collider::init(Form _form, float _radius, unsigned short _collisionLayer) {
	form = _form;
	radius = _radius;
	collisionLayer = _collisionLayer;
}
void Collider::init(Form _form, Vector2f _size, unsigned short _collisionLayer) {
	form = _form;
	size = _size;
	collisionLayer = _collisionLayer;
}
void Collider::init(Collider _collider) {
	form = _collider.form;
	size = _collider.size;
	radius = _collider.radius;
	collisionLayer = _collider.collisionLayer;
}

