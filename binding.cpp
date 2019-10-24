#include <iostream>
#include <math.h>

int gcount = 0;

using namespace std;

class B {
public:
	virtual void f() { 
		cout << "Hello world!\n"; 
	}
	virtual void Tell() { 
		f(); 
	}
};

class D1: virtual public B {
protected:
	void f() { 
		cout << "Hello programmer!\n"; 
	}
};

class D2: public D1 {
public:
	void Tell() { 
		f(); 
	}
};

class stack {
	int top;
	int size;
	int *q;
public:
	stack(int sz = 100) { 
		q = new int [size = sz]; 
		top = 0;
		cout << "New stack of " << size << " at " << q << "\n"; 
	}

	int empty(void) { return top == 0; }
	int full(void) { return top == size; }
	int pop(void) { if(top) return q[--top]; else return top = 0; }
	int push(int x) { if(top < size) return q[top++] = x; else return -x; }
	friend void f1(stack&);

	~stack(void) { 
		f1(*this); 
		cout << "exiting stack " << q << "\n"; 
	}
};

void f1(stack& s) { 
	printf("Size %d\n",s.size); 
}

class gobject {
	gobject *centre;
	gobject *axis;
public:
	gobject(void) {
		centre = NULL;
		axis = NULL;
	}
	virtual void draw(void) {}
};

class line : public gobject {
	int m;
	int c;
};

void f2(void) {
	stack s[4];
}

int main(void) {
	stack s[2], s1(30);
	s[1] = *(new stack(99));
	s[0] = *(new stack(101));

	D2 d2;
	d2.Tell();
	((D1)d2).Tell();
	((B)d2).Tell();
	
	cout << "Here : ";
	D1 d1;
	d1.Tell();
	
	f2();
	
	int i;
	cin >> i;
	
	int a[i];
	a[i-1] = 9;
	i = 0;
	
	int *p = &i;
	cout << sqrt(*((double*)p));
	
	return 0;
}