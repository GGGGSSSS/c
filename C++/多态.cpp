#include <iostream>
#include <stdio.h>
using namespace std;

class Animal
{
public:
  virtual void speak()
  {
    cout << "动物在说话" << endl;
  }
};
class Cat : public Animal
{
public:
  // void speak()
  // {
  //   cout << "小猫在说话" << endl;
  // }
};

//执行说话的函数
void doSpeak(Animal &animal)
{
  animal.speak();
};

void test()
{
  Cat cat;
  doSpeak(cat);
};

int main()
{
  test();
  system("pause");
  return 0;
}