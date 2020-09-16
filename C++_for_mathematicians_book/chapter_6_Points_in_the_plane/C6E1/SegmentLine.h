#ifndef LineSegment_H
#define LineSegment_H

#include "../Point.h"
#include <iostream>

using namespace std;

class SegmentLine {

  private:
    Point P;
    Point Q;

  public:
   SegmentLine();
   SegmentLine(Point PP , Point QQ);

   Point getP() const;
   Point getQ() const;

   void setP(Point PP);
   void setQ(Point QQ);

   double length();
   Point mid_point();  

   bool operator==( const SegmentLine& r) const;
};

ostream& operator<<(ostream& os , const SegmentLine r);


#endif 
