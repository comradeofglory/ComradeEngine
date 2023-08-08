#pragma once
#include "SFML/Graphics.hpp"
using sf::Vector2f;

//����� �������� � ���� ������ ������� ��������, ����� ����� �������������
//��� ������� �����. ����� ����� �������������.

class Collider
{
public:
	Vector2f size;
	float radius;
	enum Form { Rectangle, Circle };	//����� ������
	Form form;
	unsigned short collisionLayer;		//������� ��������

	void init(Form _form, float _radius, unsigned short _collisionLayer);
	void init(Form _form, Vector2f _size, unsigned short _collisionLayer);
	void init(Collider _collider);
};

