#include "counter.h"

int Counter::all_count=0;

Counter::Counter() : number(0)
{
}
Counter::~Counter() 
{
}
void Counter::count(){
	number++;
}
void Counter::reset(){
	number = 0;
}
int Counter::getCount(){
	all_count = all_count +  number;
	return number;
}
int Counter::getAllCount(){
	return all_count;
}
	


