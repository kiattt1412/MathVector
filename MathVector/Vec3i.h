#pragma once
class Vec3i
{
public:
	Vec3i();
	Vec3i(float x, float y , float z);
	~Vec3i();

	float x, y, z;
	float xNor , yNor,zNor;
	float magnitude, magnitudeSq;
	//float angleAlpha, angleBeta, angleGamma;

	Vec3i& add(Vec3i other);
	Vec3i& subtract(Vec3i other);
	Vec3i& scale(float scl);
	float angle(Vec3i other);
	float distance(Vec3i other);
	int dot(Vec3i other);
	Vec3i& cross(Vec3i other);
	float calMagnitude();
	float calMagnitudeSq();
	void normalize();
	void setnewProperty();
	friend Vec3i operator+(Vec3i left, Vec3i right);
	friend Vec3i operator-(Vec3i left, Vec3i right);
	Vec3i &operator*(float const& other);
	Vec3i &operator*=(float const& other);
	Vec3i &operator/(float const& other);
	Vec3i &operator/=(float const& other);
	Vec3i &operator+=(Vec3i const& other);
	Vec3i &operator-=(Vec3i const& other);
	bool operator==(const Vec3i &other) const;

};

