#include <iostream>
#include <string>
#include <cstdlib>

class Screen
{
public:
	typedef std::string::size_type pos;

	Screen() : cursor(0), height(0), width(0) {}
	Screen(pos ht , pos wd, char c) :  height(ht), width(wd), contents(ht * wd, c) {}
	
	char get() const { return contents[cursor] ; }
	char get(pos r, pos c) const { return contents[r * width + c]; }
//	Screen &move(pos r, pos c) { return contents[r * width + c]; }

private:
    pos cursor;
    pos height, width;
    std::string contents;

}