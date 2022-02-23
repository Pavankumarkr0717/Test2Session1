#include<stdio.h>
float my_sqrt(float n)
{
  float start,end,mid;
  start = 0,end = n;
  while((end - start)>=0.000001)
  {
  mid = (start + end)/2;
    if(mid*mid < n)
      start = mid;
    if(mid*mid >= n)
      end = mid; 
    }
  return mid;
}
  void input(float *x1,float *y1,float *x2,float *y2)
{
    printf("enter two points (x1,y1) x2,x2) ; ");
    scanf("(%f,%f) (%f,%f)", x1, y1, x2, y2);
  } 
  void find_distance(float x1,float y1,float x2,float y2,float *distanve){ 
    float a = x2 - x1, b = y2 - y1;
    }
  void output(float x1,float y1,float x2,float y2,float distance)
{
    printf("the distance b/w (%f,%f) and (%f,%f) is %f\n", x1, y1, x2, y2, distance);
}
  int main()
{
    float a1, a2, b1, b2;
    float ans;
    input(&a1, &a2, &b1, &b2);
    find_distance(a1 , a2, b1, b2, &ans);
    output(a1, a2, b1, b2, ans);
    return 0;
  }
  