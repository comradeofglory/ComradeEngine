#include "Body.h"

void Body::init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
	Vector2f _position, short _positionZ, Vector2i _size) {
	ID = _ID;
	bodyType = _bodyType;
	collider.init(_collider);
	position = _position;
	positionZ = _positionZ;
	size = _size;
}
void Body::init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
	Vector2f _position, short _positionZ, Vector2i _size, float _maxVelocity) {
	ID = _ID;
	bodyType = _bodyType;
	collider.init(_collider);
	position = _position;
	positionZ = _positionZ;
	size = _size;
	maxVelocity = _maxVelocity;
}
void Body::init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
	Vector2f _position, short _positionZ, Vector2i _size, float _maxVelocity, 
	float _mass, float _friction){
	ID = _ID;
	bodyType = _bodyType;
	collider.init(_collider);
	position = _position;
	positionZ = _positionZ;
	size = _size;
	maxVelocity = _maxVelocity;
	mass = _mass;
	friction = friction;
}

