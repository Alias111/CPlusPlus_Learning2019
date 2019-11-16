#ifndef CPLUSPLUSINHERITANCE_CSPACE_H
#define CPLUSPLUSINHERITANCE_CSPACE_H
//##########################################
#include "app.h"

namespace CSpace
{
	class Entity {
	public:
		float X, Y;

		void Move(float xa, float ya);
	};
	// Inherits from class 'Entity'
	class Player:public Entity {
	public:
		const char* Name;

		void PrintName();
		std::string Concat(int num);
	};
}
//##########################################
#endif //CPLUSPLUSINHERITANCE_CSPACE_H
