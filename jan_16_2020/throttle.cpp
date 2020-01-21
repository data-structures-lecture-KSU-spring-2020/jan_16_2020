#include "throttle.h"

throttle::throttle()
{
	position = 0;
	top_position = 10;
}

throttle::~throttle()
{
}

void set_top_position(int new_top){
	top_position = new_top;
}

void throttle::my_switch(int amount){
	position += amount;
	if (position < 0){
		position = 0;
	} else if (position > top_position){
		position = top_position;
	} else {
		position += amount;
	}
	
}

bool throttle::is_on(){
	if (position == 0){
		return false;
	}
	return true;
}

