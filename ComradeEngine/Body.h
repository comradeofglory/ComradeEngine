#pragma once
#include "SFML/Graphics.hpp"
#include "Collider.h"

using sf::Vector2i;

//Класс описывает физическую модель тела. Имеет модель коллизии, размерные
//характеристики, механические характеристики и параметр, принимающий значения
//RigidBody, KinematicBody, StaticBody и описывающий механические свойства тела:
//StaticBody - не имеет возможности двигаться, имеет параметры размерности и
//коллизии, передвижение не обрабатывается движком. Подходит для описания 
//статических объектов: мебель, разбитые 
//автомобили и т.д.;
//KinematicBody - имеет возможность передвигаться по упрощенным законам, не
//учитывая таких параметров как масса, трение и т.д. Поэтому имеет те же
//параметры, что и StaticBody, а так же параметр скорости. Передвижение 
//обрабатывается движком. Подходит для: пуль и пр.;
//RigidBody - имеет полную физическую модель, включает все предыдущее, а так же
//учитывает параметры ускорения, трения, параметров поверхности, упругость и т.д.
//
// Имеет параметр ID равный ID сущности, которой соответствует модель.
//

class Body
{
public:
	unsigned short ID;	//ID модели

	Collider collider;	//модель коллизии
	Vector2f position;	//горизонтальная позиция
	short positionZ;	//вертикальная позиция
	Vector2i size;		//размер
	
	enum BodyType { StaticBody, KinematicBody, RigidBody };
	BodyType bodyType;	//Тип модели

	Vector2f velocity;		//скорость
	float maxVelocity;		//максимальная скорость
	Vector2f acceleration;	//ускорение
	float mass;				//масса
	float friction;			//трение

	void init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
		Vector2f _position, short _positionZ, Vector2i _size);
	void init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
		Vector2f _position, short _positionZ, Vector2i _size, float _maxVelocity);
	void init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
		Vector2f _position, short _positionZ, Vector2i _size, float _maxVelocity, 
		float _mass, float _friction);
};

