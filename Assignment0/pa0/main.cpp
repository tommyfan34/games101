#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>


int main(){

    float pi = std::acos(-1);
    float alpha = 45.0f / 180.0 * pi;

    Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
    Eigen::Matrix3f R;
    R << std::cos(alpha), -std::sin(alpha), 0.0, 
         std::sin(alpha), std::cos(alpha), 0.0, 
         0.0, 0.0, 1.0;
    Eigen::Matrix3f T;
    T << 1.0f, 0.0f, 1.0f,
         0.0f, 1.0f, 2.0f,
         0.0f, 0.0f, 1.0f;
    Eigen::Vector3f res = T * R * p;
    std::cout << res << std::endl;

    // result is 1.70711, 4.12132, 1
    system("pause");
    return 0;
}