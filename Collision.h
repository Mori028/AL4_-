#pragma once

#include "CollisionPrimitive.h"

/// <summary>
/// 当たり判定ヘルパークラス
/// </summary>
class Collision
{
public:
	/// <summary>
	/// 球と平面の当たり判定
	/// </summary>
	static bool CheckSphere2Plane(const Sphere& sphere, const Plane&
		plane, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// 球と平面の当たり判定
	/// </summary>
	static void ClosestPtPoint2Triangle(const DirectX::XMVECTOR& point,
		const Triangle& triangle, DirectX::XMVECTOR* closest);

	/// <summary>
	/// 球と法線付き三角形の当たりチェック
	/// </summary>
	static bool CheckSphere2Triangle(const Sphere& sphere, const Triangle&
		triangle, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// レイと平面の当たり判定
	/// </summary>
	static bool CheckRay2Plane(const Ray& ray, const Plane& plane,
		float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// レイと法線付き三角形の当たり判定
	/// </summary>
	static bool CheckRay2Triangle(const Ray& ray, const Triangle&
		triangle, float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);

	/// <summary>
	/// レイと球の当たり判定
	/// </summary>
	static bool CheakRay2Shere(const Ray& ray, const Sphere& sphere,
		float* distance = nullptr, DirectX::XMVECTOR* inter = nullptr);
};