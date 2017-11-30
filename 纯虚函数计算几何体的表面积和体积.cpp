#include <bits/stdc++.h>

using namespace std;
//const double pi=acos(-1);
const double pi=3.14;
class container {
protected:
    double radius;
public:
    container() {}
    container(double _r):radius(_r){}
    ~container(){}
    virtual double surface()=0;
    virtual double volume()=0;
};

class cube :public container{
public:
    cube(int _r):container(_r){}
    double surface() {
        return radius*radius*6;
    }
    double volume() {
        return radius*radius*radius;
    }
};
class Sphere: public container {
public:
    Sphere(double _r):container(_r){}
    double surface() {
        return 4.0*pi*radius*radius;
    }
    double volume() {
        return 4.0/3*pi*radius*radius*radius;
    }
    
};
class Cylinder: public container {
private:
    double height;
public:
    Cylinder(double _r,double _h):container(_r),height(_h){}
    ~Cylinder(){};
    double surface() {
        return 2*pi*radius*radius+2*pi*radius*height;
    }
    double volume() {
        return pi*radius*radius*height;
    }
};
int main() {
    freopen("in.txt","r",stdin);
    //cube
    double r,h;
    cout<<"请输入正方体的边长:";
    cin>>r;
    cube cube1(r);
    cout<<"边长为"<<r<<"的正方体的表面积和体积分别为:";
    cout<<cube1.surface()<<" "<<cube1.volume()<<endl;
    
    
    //Sphere
    cout<<"请输入球体的边长:";
    cin>>r;
    Sphere spere1(r);
    cout<<"边长为"<<r<<"的球体的表面积和体积分别为:";
    cout<<spere1.surface()<<" "<<spere1.volume()<<endl;
    
    
    //Cylinder
    cout<<"请输入圆柱的底边变长和高:";
    cin>>r>>h;
    Cylinder cylinder1(r,h);
    cout<<"底面边长为"<<r<<",高为"<<h<<"的圆柱体的表面积和体积分别为:";
    cout<<cylinder1.surface()<<" "<<cylinder1.volume()<<endl;
    return 0;
}
