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

	Screen &move(pos r, pos c) { cursor = r * width + c; return *this; }

	Screen &set(char ch){ contents[cursor] = ch; return *this; }
	Screen &set(pos r, pos col, char ch){ contents[r*width + col] = ch; return *this; }

	Screen &display(std::ostream &os){do_display(os); return *this;}
	const Screen &display(std::ostream &os) const {do_display(os); return  *this;}

private:
    pos cursor;
    pos height, width;
    std::string contents;
	void do_display(std::ostream &os) const { os << contents;}

};


int main()
{
	Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

	system("pause");
	return 0;
}
