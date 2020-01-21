#include <stdio.h>
#include "throttle.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	throttle control;
	int user_input;
	
	control.set_top_position(50);
	
	cout << "Top position set to " << endl;
	control.mySwitch(10);
	return 0;
}
