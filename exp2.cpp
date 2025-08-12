//Shivangi Singh
//24070123148
// B3
#include <iostream>
using namespace std;
class cube{
public:
int height=2.0;
int width=3.0;
int length=5.0;

int volume()
{
  int v;
v=heigth*width*length;
return v;
}
};
int main()
{
  cube cube1;
int vol=cube1.volume();
cout<<"VOLUME : "<<vol<<endl;
}
/*
Output
VOLUME : 30
*/
