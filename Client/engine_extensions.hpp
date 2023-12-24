#pragma once

namespace engine_extensions
{
	// This is the Pi val used in the engine from 4.1 -> 5+
	static constexpr double UE4_PI = 3.1415926535897932384626433832795;

	float delta(const SDK::FVector2D& a, const SDK::FVector2D& b);
	SDK::FVector2D lerp(const SDK::FVector2D& start, const SDK::FVector2D& end, const float alpha);
	SDK::FVector get_bone_world_pos(SDK::USkeletalMeshComponent* mesh, int32_t bone_id);

	SDK::FVector offset(const SDK::FVector& origin, const SDK::FVector& direction, float distance);
	SDK::FVector get_left_from_forward_vector(const SDK::FVector& forward);
	SDK::FVector2D lerp(const SDK::FVector2D& start, const SDK::FVector2D& end, float alpha);
	SDK::FVector subtract(const SDK::FVector& a, const SDK::FVector& b);
	SDK::FVector add(const SDK::FVector& a, const SDK::FVector& b);
	SDK::FVector multiply(const SDK::FVector& v, float scalar);
	float dot(const SDK::FVector& a, const SDK::FVector& b);
	SDK::FVector cross(const SDK::FVector& a, const SDK::FVector& b);
	SDK::FVector normalize(const SDK::FVector& v);
	SDK::FRotator calc_rotation(const SDK::FVector& start, const SDK::FVector& target);
	float distance(const SDK::FVector& a, const SDK::FVector& b);
	SDK::FVector forward_vector(const SDK::FRotator& rot);


	bool IsVisible(const SDK::FVector& player_cam_loc, const SDK::FVector& world_pos);
	bool RaycastSimple(const SDK::FVector& origin, const SDK::FVector& direction, float distance, SDK::FHitResult& res);

	template<typename T, typename Func>
	void ForEach(const SDK::TArray<T>& array, Func function);



	SDK::FLinearColor rgb_to_flinear(int r, int g, int b);
	SDK::FLinearColor hex_to_flinear(const std::string& hex);

	bool is_point_in_rect(const SDK::FVector2D& pt, const SDK::FVector2D& origin, const SDK::FVector2D& size);
}

