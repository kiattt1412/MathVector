#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <crtdbg.h>
#include <memory>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>
#define _CRTDBG_MAP_ALLOC

#include "Vec2i.h"
#include "Vec3i.h"

using namespace std;

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	cout << " - Vector 2D - " << endl;
	Vec2i v1(1, 1);
	Vec2i v2(2, 2);
	Vec2i v3(3, 5);

	cout << endl;
	cout << " (1,1) Magnitude : " << v1.magnitude << endl;
	cout << " (1,1) MagnitudeSq : " << v1.magnitudeSq << endl;
	Vec2i v1add57 = v1.add(Vec2i(5, 7));
	Vec2i v1sub57 = v1.subtract(Vec2i(5, 7));
	cout << " v1 Add (5,7) : " << "(" << v1add57.x << "," << v1add57.y <<")" << endl;
	Vec2i v1plus = Vec2i(1, 2) + Vec2i(2, 3);
	cout << " (1,2) + (2,3) : " << "(" << v1plus.x << "," << v1plus.y << ")" <<endl;
	v1plus += Vec2i(2,3);
	cout << " (3,5) += (2,3) : " << "(" << v1plus.x << "," << v1plus.y << ")" << endl;
	v1plus -= Vec2i(2,3);
	cout << " (5,8) -= (2,3) : " << "(" << v1plus.x << "," << v1plus.y << ")" << endl;
	Vec2i v25(2, 5);
	Vec2i vrsMul = v25 * 3;
	cout << " (2,5) * 3 : " << "(" << vrsMul.x << "," << vrsMul.y << ")" << endl;
	vrsMul *= 2;
	cout << " (6,15) *= 2 : " << "(" << vrsMul.x << "," << vrsMul.y << ")" << endl;
	Vec2i v26(2, 6);
	Vec2i vrsDiv = v26 / 3;
	cout << " (2,6) / 3 : " << "(" << vrsDiv.x << "," << vrsDiv.y << ")" << endl;
	vrsDiv /= 2;
	cout << " (0.67,2) /= 2 : " << "(" << vrsDiv.x << "," << vrsDiv.y << ")" << endl;
	cout << " v1 Sub (5,7) : " << "(" << v1sub57.x << "," << v1sub57.y << ")" << endl;
	cout << " (1,1) normalized : " << "(" << v1.xNor << "," << v1.yNor << ")" << endl;
	cout << " (2,2) dot (3,5) : " << v2.dot(v3) << endl;
	cout << " (2,2) cross (3,5) : " << v2.cross(v3) << endl;
	cout << " v1 add (3,4) Magnitude : " << Vec2i(1,1).add(Vec2i(2, 3)).magnitude << endl;
	cout << " v1 Angle : " << v1.angle(Vec2i(1,0)) << endl;
	cout << " Distance (0,0) and (3,4) : " << Vec2i(0, 0).distance(Vec2i(3, 4)) << endl;
	cout << " (3,5) scaled by 5 :" << Vec2i(3, 5).scale(5).x << "," << Vec2i(3, 5).scale(5).y << endl << endl;
	cout << " ------------------------------------------------------------------------- " << endl << endl; 
	cout << " - Vector 3D - " << endl << endl;
	Vec3i v4(1, 1, 1);
	cout << " v4(1,1,1) - X : " << v4.x << " ,Y : " << v4.y << " ,Z : " << v4.z << endl;
	cout << " v4 Magnitude : " << v4.magnitude << endl;
	cout << " v4 MagnitudeSq : " << v4.magnitudeSq << endl;
	cout << " (2,3,5) + (6,1,1) : (" << Vec3i(2, 3, 5).add(Vec3i(6,1,1)).x << "," << Vec3i(2, 3, 5).add(Vec3i(6, 1, 1)).y << "," << Vec3i(2, 3, 5).add(Vec3i(6, 1, 1)).z << ")" << endl;
	cout << " (2,3,5) - (6,1,1) : (" << Vec3i(2, 3, 5).subtract(Vec3i(6, 1, 1)).x << "," << Vec3i(2, 3, 5).subtract(Vec3i(6, 1, 1)).y << "," << Vec3i(2, 3, 5).subtract(Vec3i(6, 1, 1)).z << ")" << endl;
	Vec3i v0(0, 0, 0);
	v0 += Vec3i(1, 1, 1);
	cout << " (0,0,0) += (1,1,1) : " << "(" << v0.x << "," << v0.y << "," << v0.z << ")" << endl;
	v0 *= 5;
	cout << " (1,1,1) *= 5 : " << "(" << v0.x << "," << v0.y << "," << v0.z << ")" << endl;
	v0 /= 2;
	cout << " (5,5,5) /= 2 : " << "(" << v0.x << "," << v0.y << "," << v0.z << ")" << endl;
	v0 -= Vec3i(0.5,0.5,0.5);
	cout << " (2.5,2.5,2.5) -= (0.5,0.5,0.5) : " << "(" << v0.x << "," << v0.y << "," << v0.z << ")" << endl;
	cout << " (2,3,5) dot (6,1,1) : " << Vec3i(2, 3, 5).dot(Vec3i(6, 1, 1)) << endl;
	cout << " (1,2,3) cross (1,5,7) : " << Vec3i(1, 2, 3).cross(Vec3i(1, 5, 7)).x << "," << Vec3i(1, 2, 3).cross(Vec3i(1, 5, 7)).y << "," << Vec3i(1, 2, 3).cross(Vec3i(1, 5, 7)).z << endl;
	cout << " Angle between (1,2,3) and (1,5,7) : " << Vec3i(1, 2, 3).angle(Vec3i(1, 5, 7)) << endl;
	cout << " (1,1,1) normalized : " << "(" << Vec3i(1,1,1).xNor << "," << Vec3i(1, 1, 1).yNor << "," << Vec3i(1, 1, 1).zNor <<")" << endl;
	cout << " Distance (7,4,3) and (17,6,2) : " << Vec3i(7, 4, 3).distance(Vec3i(17, 6, 2)) << endl;
	getchar();
	return 0;

}
