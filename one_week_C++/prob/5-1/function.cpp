#include "function.h"

int Function::max(int n1, int n2){
	if (n1 < n2){
		return n2;
	}
	return n1;
}

int Function::min(int n1, int n2){
	return -max(-n1,-n2);
}
