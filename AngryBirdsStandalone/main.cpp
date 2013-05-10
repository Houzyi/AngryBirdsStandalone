
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <stdio.h>
#include "AngryBirds.h"
     
#define PPM 30 // Pixel Per Meters
     
//using namespace sf;
     
int main()
{
    /*bool running = true;
     
    sf::RenderWindow app(sf::VideoMode(800,600,32),"First Test",sf::Style::Close);
     
	//sf::RectangleShape box = sf::RectangleShape::Rectangle(500,20,600,70,Color::White);
    //Shape ground = Shape::Line(50,550,750,200,1,Color::Red);
    
	sf::RectangleShape box(sf::Vector2f(100,50));
	sf::RectangleShape ground(sf::Vector2f(1000,1));
     
    // set up the world
    b2Vec2 gravity(0.0f,9.8f);
    b2World *myWorld = new b2World(gravity);
     
    // box body definition
    b2BodyDef boxBodyDef;
    b2Vec2 boxVelocity;
    boxVelocity.Set(0.0f,-10.0f);
    boxBodyDef.type = b2_dynamicBody;
    boxBodyDef.position.Set(500,20);
    boxBodyDef.linearVelocity = boxVelocity;
     
    // line body definition
    b2BodyDef lineBodyDef;
    lineBodyDef.type = b2_staticBody;
    lineBodyDef.position.Set(50,550);
     
    // create the bodies
    b2Body *boxBody = myWorld->CreateBody(&boxBodyDef);
    b2Body *lineBody = myWorld->CreateBody(&lineBodyDef);
     
    // create the shapes
    b2PolygonShape boxShape;
	b2EdgeShape lineShape;
    boxShape.SetAsBox(50.0f/PPM,25.0f/PPM);
    lineShape.Set(b2Vec2(-1000.0f, 0.0f), b2Vec2(1000.0f, 0.0f));
     
    // add fixtures
    b2FixtureDef boxFixtureDef,lineFixtureDef;
    boxFixtureDef.shape = &boxShape;
    lineFixtureDef.shape = &lineShape;
    boxFixtureDef.density = 1;
     
    boxBody->CreateFixture(&boxFixtureDef);
    lineBody->CreateFixture(&lineFixtureDef);
     
    float timeStep = 1.0f / 20.0f; // 20fps
     
    int velIter = 8;
    int posIter = 3;
     
	while(app.isOpen())
    {
        
     
        myWorld->Step(timeStep, velIter, posIter);
     
     
        b2Vec2 pos = boxBody->GetPosition();
        printf("%f %f\n",pos.x, pos.y);
     
		box.setPosition(pos.x,pos.y);

		app.clear(sf::Color::Black);
     
        app.draw(box);
        app.draw(ground);
        app.display();
    }
     
    app.close();
    delete myWorld;/**/

	AngryBirds* simulation = new AngryBirds();
	simulation->start();
     
    return EXIT_SUCCESS;
}

