// 成员初始化顺序是根据声明的顺序来进行初始化的，所以会报错

//修改为如下
struct X {
  X (int i, int j): base(i), rem(base % j) { }
  int base, rem;
};