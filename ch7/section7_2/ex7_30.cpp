/*
 优点：
 1、更加明确
 2、更少误读
 3、可以使用与成员函数参数名字一样的成员名字
 void setAddr(const std::string &addr) {this->addr = addr;}
 
 缺点：
 1、代码量变多
 2、有时候显得冗余
 std::string getAddr() const { return this->addr; } // unnecessary














*/