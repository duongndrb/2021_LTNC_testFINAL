#include<bits/stdc++.h>
struct Rectangle {
    double x_bottom,y_bottom,x_top,y_top;
    Rectangle(double x1,double y1, double x2 , double y2)
    {
        x_bottom = x1;
        y_bottom = y1;
        x_top = x2;
        y_top = y2;
    };
    double calculate_area()
    {
        double kq = (x_top-x_bottom)*(y_top-y_bottom);
        if(kq <0 ) return -kq;
        return kq;
    };
    bool check_point(double xA,double yA)
    {
        return xA <= x_top && xA>= x_bottom && yA<=y_top&&yA>= y_bottom;
    };
};
