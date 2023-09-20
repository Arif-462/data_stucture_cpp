#include <bits/stdc++.h>
using namespace std;

class Cuboid
{
private:
    int length, width, height;

public:
    Cuboid()
    {
        length=0;
        width=0;
        height=0;
    }
    Cuboid(int length, int width, int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }
    int getVolume()
    {
        return length*width*height;
    }
    int getSurfaceArea()
    {
        return 2*length*width+2*length*height+2*height*width;
    }
};

bool comp1(Cuboid a, Cuboid b)
{
    return a.getVolume() < b.getVolume();
}
bool comp2(Cuboid a, Cuboid b)
{
    return a.getSurfaceArea() < b.getSurfaceArea();
}

int main()
{
    vector<Cuboid> a;
    a.push_back(Cuboid(2,5,6));
    a.push_back(Cuboid(3,6,1));
    a.push_back(Cuboid(1,4,2));
    a.push_back(Cuboid(2,3,2));
    a.push_back(Cuboid(5,2,4));

    sort(a.begin(), a.end(), comp1);
    for(int i=0; i<5; i++){
        cout<<"The Volume is: "<<a[i].getVolume()<<endl;
    }

    sort(a.begin(), a.end(), comp2);
    for(int i=0; i<5; i++){
        cout<<"The Surface Area is: "<<a[i].getSurfaceArea()<<endl;
    }
    return 0;
}


/*

#include<bits/stdc++.h>
using namespace std;
class cuboid
{
private:
    int length;
    int width;
    int height;
public:
    cuboid()
    {
        length=0;
        width=0;
        height=0;
    }

    cuboid(int l, int w, int h)
    {
        length=l;
        width=w;
        height=h;
    }
    void getVolume()
    {
        cout<<length*width*height<<" ";
    }
    int  getSurfaceArea()
    {
        int res=2*length*width + 2*length*height + 2*height*width;
        return res;
    }
//    bool operator<(cuboid s)
//    {
//        return length < length;
//    }

    bool comp(cuboid a, cuboid b)
    {
        return a.getSurfaceArea()<b.getSurfaceArea();
    }
};

int main()
{

    vector<cuboid>s;

    s.push_back(cuboid(2, 3, 5));
    sort(s.begin(), s.end(), comp);
    s.getVolume();
    cout<<s.etSurfaceArea()<<"\n";

    cout<<"\n";
    return 0;
}
*/
