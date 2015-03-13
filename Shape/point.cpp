#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (x < 0 || y < 0){
		throw invalid_argument("Le nombre ne peut pas etre negatif");
	}

}

bool Point::operator == (const Point & point) const
{
	if (this->x == point.x && this->y == point.y){
		return true;
	}
	else{
		return false;
	}
}

bool Point::operator != (const Point & point) const
{
	return !(operator==(point));
}
