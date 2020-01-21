#ifndef THROTTLE_H
#define THROTTLE_H

class throttle
{
	
public:
	throttle();
	~throttle();
	
	void set_top_position(int new_top);
	void my_switch(int amount);
	bool is_on();

private: 
	int position;
	int top_position;
};

#endif // THROTTLE_H
