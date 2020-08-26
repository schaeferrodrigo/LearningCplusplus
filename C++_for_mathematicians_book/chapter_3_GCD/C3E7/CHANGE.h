#ifndef CHANGE_H
#define CHANGE_H

/*
* Functions to change variables from cartesian coordinates to polar coordinates
and from polar coordinates to cartesian cordinates
*/


/*
* From cartesian cordinates to polar
*@param x axis, y axis
*@change to r radius and t angle
*/

void xy2polar(double x , double y , double& r , double& t);

/*
*From polar coordinates to cartesian
*@param r radius and t angle
*@change to x axes and t axes
*/

void polar2xy(double r, double t, double& x, double& y);

#endif
