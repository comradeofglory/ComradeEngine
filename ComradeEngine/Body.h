#pragma once
#include "SFML/Graphics.hpp"
#include "Collider.h"

using sf::Vector2i;

//����� ��������� ���������� ������ ����. ����� ������ ��������, ���������
//��������������, ������������ �������������� � ��������, ����������� ��������
//RigidBody, KinematicBody, StaticBody � ����������� ������������ �������� ����:
//StaticBody - �� ����� ����������� ���������, ����� ��������� ����������� �
//��������, ������������ �� �������������� �������. �������� ��� �������� 
//����������� ��������: ������, �������� 
//���������� � �.�.;
//KinematicBody - ����� ����������� ������������� �� ���������� �������, ��
//�������� ����� ���������� ��� �����, ������ � �.�. ������� ����� �� ��
//���������, ��� � StaticBody, � ��� �� �������� ��������. ������������ 
//�������������� �������. �������� ���: ���� � ��.;
//RigidBody - ����� ������ ���������� ������, �������� ��� ����������, � ��� ��
//��������� ��������� ���������, ������, ���������� �����������, ��������� � �.�.
//
// ����� �������� ID ������ ID ��������, ������� ������������� ������.
//

class Body
{
public:
	unsigned short ID;	//ID ������

	Collider collider;	//������ ��������
	Vector2f position;	//�������������� �������
	short positionZ;	//������������ �������
	Vector2i size;		//������
	
	enum BodyType { StaticBody, KinematicBody, RigidBody };
	BodyType bodyType;	//��� ������

	Vector2f velocity;		//��������
	float maxVelocity;		//������������ ��������
	Vector2f acceleration;	//���������
	float mass;				//�����
	float friction;			//������

	void init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
		Vector2f _position, short _positionZ, Vector2i _size);
	void init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
		Vector2f _position, short _positionZ, Vector2i _size, float _maxVelocity);
	void init(unsigned short _ID, BodyType _bodyType, Collider _collider, 
		Vector2f _position, short _positionZ, Vector2i _size, float _maxVelocity, 
		float _mass, float _friction);
};

