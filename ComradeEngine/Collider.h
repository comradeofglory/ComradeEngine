#pragma once
#include "SFML/Graphics.hpp"
using sf::Vector2f;

//Класс включает в себя модель коробки коллизии, может иметь прямоугольную
//или круглую форму. Имеет метод инициализации.

class Collider
{
public:
	Vector2f size;
	float radius;
	enum Form { Rectangle, Circle };	//форма модели
	Form form;
	unsigned short collisionLayer;		//уровень коллизии

	void init(Form _form, float _radius, unsigned short _collisionLayer);
	void init(Form _form, Vector2f _size, unsigned short _collisionLayer);
	void init(Collider _collider);
};

