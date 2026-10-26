#include<iostream>
#include<cmath>
using namespace std;
class shape{
    public:
    virtual void draw(){
    cout<<"draw the shape:"<<endl;
}
};
class circle: public shape{
    int radius;
    public:
    void draw(){
        cout<<"the circle is:"<<endl;
    cout<<"enter the radius of circle:";
    cin>>radius; 
    float aspect_ratio = 2.0; 
    for (int y = -radius; y <= radius; y++) {
        for (int x = -radius * aspect_ratio; x <= radius * aspect_ratio; x++) {
            
    float distance = pow(x / aspect_ratio, 2) +pow(y, 2);
    if (distance > pow(radius - 0.5, 2) && distance < pow(radius + 0.5, 2)) {
    cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    }
};
class rectangle : public shape{
    int width,height;
    public:
    void draw(){
        cout<<"the rectangle is:"<<endl;
        cout<<"enter the widhth and height of rectangle:";
        cin>>width;
        cin>>height;
         

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << "* ";
            } else {
               
                cout << "  "; 
            }
        }
        cout << endl;
    }
    }
};
int main(){
    shape S;
    circle C;
    rectangle R;
    shape *S1=&C;
    S1->draw();
    shape *S2=&R;
    S2->draw();
    return 0;
}
