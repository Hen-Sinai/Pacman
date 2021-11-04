#ifndef _BREADCRUMB_H_
#define _BREADCRUMB_H_

using namespace std;
#include "Position.h"
#include "io_utils.h"

class BreadCrumb
{
	Position position; //need to initilize
	const char figure = '*';

	// COLOR
public:
	void setPosition(int x, int y)
	{
		position.setPosition(x, y);
	}
	//ליצור פונקציה שבודקת התנגשות
};
#endif
