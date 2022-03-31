#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
	public:
		Counter();
		~Counter();
		void count();
		void reset();
		int getCount();
		static int getAllCount();
	private:
		int number;
		static int all_count;
};


#endif
