#include<iostream>

using namespace std;

class singleton
{
  int a;
  static singleton *instance;
  singleton (const singleton &) {}
  singleton operator = (const singleton &){}
  singleton ():a(10) {}
  public:
    static singleton *getinstance()
    {
      if(!instance)
      {
        instance = new singleton();
      }
      return instance;
    }
   void func()
   {
      cout<<"Singleton Class: "<<a<<endl;
   }
};

singleton *singleton::instance = NULL;

int main()
{
  //singleton s1;
  //s1.func();
 singleton *s2 = singleton::getinstance();
  s2->func();
  return 0;  
}
