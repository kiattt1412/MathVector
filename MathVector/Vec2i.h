#pragma once
class Vec2i
{
public:
	Vec2i();
	Vec2i(float x, float y);
	~Vec2i();
	float x;
	float y;
	float xNor;
	float yNor;
	float magnitude;
	float magnitudeSq;
	float angleX;

	Vec2i& add(Vec2i other);
	Vec2i& subtract(Vec2i other);
	Vec2i& scale(float scl);
	float distance(Vec2i other);
	float angle(Vec2i other);
	int dot(Vec2i other);
	int cross(Vec2i other);
	float calMagnitude();
	float calMagnitudeSq();
	void normalize();
	void setnewProperty();
	friend Vec2i operator+(Vec2i left, Vec2i right);
	friend Vec2i operator-(Vec2i left, Vec2i right);

	Vec2i &operator*(float const& other);
	Vec2i &operator*=(float const& other);
	Vec2i &operator/(float const& other);
	Vec2i &operator/=(float const& other);
	Vec2i &operator+=(Vec2i const& other);
	Vec2i &operator-=(Vec2i const& other);

	bool operator==(const Vec2i &other) const;

};

