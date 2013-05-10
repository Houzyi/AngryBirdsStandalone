#include "Shape.h"
#include <iostream>

#define SIZESCALE 40


CircleShape::CircleShape( double radius, double offsetX, double offsetY )
              : radius(radius), offsetX(offsetX), offsetY(offsetY)
{
	//shape.m_radius = radius/SIZESCALE*2;

	sfCircShape = sf::CircleShape(radius/SIZESCALE*2);

    std::cout<<"made circle"<<std::endl;
}

RectangleShape::RectangleShape( double width, double height )
                    : width(width), height(height)
{
	//shape.SetAsBox( width/SIZESCALE, height/SIZESCALE );

	sfRectShape = sf::RectangleShape(sf::Vector2f(width, height));

    std::cout<<"made rect"<<std::endl;
}

PolygonShape::PolygonShape( int vertexCount, std::vector< std::array< double, 2 > > vertices )
				: vertexCount(vertexCount), vertices(vertices)
{
    std::cout<<"made polygon"<<std::endl;
}

/*void CircleShape::draw(sf::RenderWindow* window) 
{
	
}

void RectangleShape::draw(sf::RenderWindow* window) 
{
	window->draw(*sfShape);
}
/*
char Shape::type = 's';
char CircleShape::type = 'c';
char RectangleShape::type = 'r';
char PolygonShape::type = 'p';*/