#ifndef COORDIN_H_
#define COORDIN_H_
//헤더에서는 각종 함수나 구조체를 미리 설정해놓을수 있다.
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif // !COORDIN_H_
