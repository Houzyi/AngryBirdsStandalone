#define DEGTORAD 0.0174532925199432957f
#define RADTODEG 57.295779513082320876f

#define SIZESCALE 40

#include "Level.h"
#include <iostream>

LevelObject::LevelObject( double x, double y, double angle, Object* object )
						: x(x), y(y), angle(angle), object(object)
{
	if ( object->material->bodyType == '0' ) {
		bodyDef.type = b2_dynamicBody; 
	} else {
		bodyDef.type = b2_staticBody; 
	}

	bodyDef.position.Set(x, y*-1);

	char shapeType = object->shape->shapeType();

	if ( shapeType == 'r' || shapeType == 'p' ) {
		std::cout<<angle<<std::endl;
		bodyDef.angle = (180-(angle))*DEGTORAD;
	}

	/*b2PolygonShape polyShape;
	b2CircleShape circleShape;

	if ( shapeType == 'r' ) {
		RectangleShape* shape = (RectangleShape*)(object->shape);
		polyShape.SetAsBox( shape->width/SIZESCALE, shape->height/SIZESCALE );
		bodyFixtureDef.shape = &polyShape;
	} else if ( shapeType == 'c' ) {
		CircleShape* shape = (CircleShape*)(object->shape);
		circleShape.m_radius = shape->radius/SIZESCALE*2;
		bodyFixtureDef.shape = &circleShape;
	}

	bodyFixtureDef.density = object->material->density;
	bodyFixtureDef.friction = object->material->friction;
	bodyFixtureDef.restitution = object->material->restitution;*/

	std::cout<<"made level object"<<std::endl;
}

Level::Level( std::vector< LevelObject* > objects )
			: objects(objects)
{
	std::cout<<"made level"<<std::endl;
}

void Level::addObject( LevelObject* object)
{
	objects.push_back( object );
}
