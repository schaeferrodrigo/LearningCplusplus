#include <cmath>
#include <iostream>
#include "../examples/uniform.h"
#include <iostream>

using namespace std;


void circle_domain(double radius , double& x , double& y){
  double pi = M_PI;
  double theta = unif(0. , 2*pi);
  if (radius ==0){
    cerr<< "Warning!! radius equal to 0";
  }
  else{
    double r = unif(0., radius);
    x = r*cos(theta);
    y = r*sin(theta);
  }
}

void triangle_domain(double v_y1 ,double  v_z1 , double v_z2 , double& x , double& y){
  if ((v_y1 ==0)|| (v_z2 ==0)){
    std::cerr << "Warning!! This is not a triagle" << '\n';
  }
  else{
  y = unif(0 , v_z2);
  double x_right = (y/v_z2)*(v_z1 - v_y1) + v_z1;
  double x_left = y*(v_z1/v_z2);
  x = unif(x_left, x_right);
  }
}

double oposite_side(double u_1 , double u_2, double v_1, double v_2 , double w_1 ,double w_2, double p_1, double p_2){
  float determinant = (1+u_1 + u_2) * (u_1 + v_1*v_1 + v_2* p_1)*(u_2 + w_1*v_2 + w_2*p_2)
                    + (u_1 + v_1*u_1 + u_2*p_1) *(u_2 + v_1*v_2 + v_2*p_2)*(1+w_1+w_2)
                    + (u_2 + u_1*v_2 + u_2*p_2)* (1+v_1+ v_2)*(u_1 + w_1*v_1  + w_2*p_1 )
                    - (1 + w_1 + w_2) * ( u_1 + v_1 * v_1 +v_2 * p_1) * (u_2 + u_1 * v_2 + u_2 * p_2)
                    - (u_1 + w_1 * v_1 + w_2 * p_1 ) * (u_2 + v_1*v_2 + v_2*p_2)*(1 + u_1 + u_2)
                    - ( u_2 + w_1 * v_2 + w_2 * p_2 ) * ( 1 + v_1 + v_2 ) * ( u_1 + v_1 * u_1 + u_2 * p_1);
  return determinant;
}

float inside_point(double u_1 , double u_2, double v_1, double v_2 , double w_1 ,double w_2, double p_1, double p_2){
  if  ((oposite_side(u_1,u_2,v_1,v_2, w_1, w_2 , p_1,p_2)<= 0.) && (oposite_side(u_1,u_2, w_1, w_2 ,v_1,v_2, p_1,p_2) <= 0.) && (oposite_side(u_1,u_2, p_1,p_2, w_1, w_2 ,v_1,v_2) <0.)){
    return 1;
  }
  else{ return 0;}
}

int main(){
  seed();
  string domain;
  double u_1, u_2, v_1 , v_2, w_1, w_2 , p_1 , p_2;
  cout <<"Type the kind of domain: 'circle' or 'triangle' ";
  cin >> domain;
  long count = 0;
  long number_of_experiments = 100000;
  for (long i = 1; i<= number_of_experiments; i++ ){
    if (domain == "circle"){
      double radius = 1.;
      circle_domain(radius , u_1 , u_2);
      circle_domain(radius , v_1, v_2);
      circle_domain(radius , w_1, w_2);
      circle_domain(radius , p_1, p_2);
    }
    else if(domain == "triangle"){
      double v_y1 = 1. , v_z1 = 0. , v_z2 = 1.;
      triangle_domain(v_y1 , v_z1 , v_z2, u_1, u_2);
      triangle_domain(v_y1 , v_z1 , v_z2, v_1, v_2);
      triangle_domain(v_y1 , v_z1, v_z2 , w_1, w_2);
      triangle_domain(v_y1 , v_z1 , v_z2 , p_1 , p_2);
    }
    else{std::cerr << "invalid domain!!" << '\n';}
    if (inside_point(u_1,u_2,v_1,v_2,w_1,w_2,p_1,p_2) ==1.){count +=1;}
    else if (inside_point(v_1,v_2,u_1,u_2,w_1,w_2,p_1,p_2) ==1.){count+=1;}
    else if (inside_point(w_1,w_2,v_1,v_2,u_1,u_2,p_1,p_2) ==1.){count+=1;}
    else if (inside_point(p_1,p_2,u_1,u_2,v_1,v_2,w_1,w_2) ==1.){count+=1;}
  }
  cout << count<<'\n';
  cout << "P(K) = " <<(number_of_experiments - float(count))/number_of_experiments;
  return 0;
}
