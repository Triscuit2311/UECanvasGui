#include "pch.h"
#include "engine_extensions.hpp"

namespace engine_extensions
{
	SDK::FVector2D lerp(const SDK::FVector2D& start, const SDK::FVector2D& end, const float alpha) {
		return { start.X + alpha * (end.X - start.X) ,start.Y + alpha * (end.Y - start.Y) };
	}

	SDK::FVector get_bone_world_pos(SDK::USkeletalMeshComponent* mesh, const int32_t bone_id)
	{
		return mesh->GetSocketLocation(mesh->GetBoneName(bone_id));
	}

	//
	// bool IsVisible(const SDK::FVector& player_cam_loc, const SDK::FVector& world_pos)
	// {
	// 	SDK::FHitResult res;
	//
	// 	SDK::TArray<SDK::AActor*> ignored_actors = {};
	// 	SDK::FLinearColor trace_col = {
	// 		255, 0, 0, 255
	// 	};
	// 	SDK::FLinearColor hit_col = {
	// 		0, 255, 0, 255
	// 	};
	// 	SDK::TArray<SDK::EPhysicalSurface> surfs_to_ignore = {};
	//
	// 	if (!g_GameData->KismetSystemLibrary->LineTraceSingle(
	// 		GWORLD,
	// 		player_cam_loc,
	// 		world_pos,
	// 		SDK::ETraceTypeQuery::TraceTypeQuery5,
	// 		true, // For transparency checks
	// 		ignored_actors,
	// 		SDK::EDrawDebugTrace::None,
	// 		&res,
	// 		true,
	// 		trace_col,
	// 		hit_col,
	// 		0.0f))
	// 	{
	// 		return true;
	// 	}
	// 	return false;
	// }
	//
	// bool RaycastSimple(const SDK::FVector& origin, const SDK::FVector& direction, float distance, SDK::FHitResult& res)
	// {
	// 	const SDK::FVector world_pos = Offset(origin, direction, distance);
	//
	// 	SDK::TArray<SDK::AActor*> ignored_actors = {};
	// 	SDK::FLinearColor trace_col = {
	// 		255, 0, 0, 255
	// 	};
	// 	SDK::FLinearColor hit_col = {
	// 		0, 255, 0, 255
	// 	};
	// 	SDK::TArray<SDK::EPhysicalSurface> surfs_to_ignore = {};
	//
	// 	if (!g_GameData->KismetSystemLibrary->LineTraceSingle(
	// 		GWORLD,
	// 		origin,
	// 		world_pos,
	// 		SDK::ETraceTypeQuery::TraceTypeQuery5,
	// 		true, // For transparency checks
	// 		ignored_actors,
	// 		SDK::EDrawDebugTrace::None,
	// 		&res,
	// 		true,
	// 		trace_col,
	// 		hit_col,
	// 		0.0f))
	// 	{
	// 		return true;
	// 	}
	// 	return false;
	// }
	//


	SDK::FVector offset(const SDK::FVector& origin, const SDK::FVector& direction, const float distance) {
		SDK::FVector vec;
		vec.X = origin.X + direction.X * distance;
		vec.Y = origin.Y + direction.Y * distance;
		vec.Z = origin.Z + direction.Z * distance;
		return vec;
	}

	SDK::FVector get_left_from_forward_vector(const SDK::FVector& forward) {
		const SDK::FVector up_vector = { 0.0f, 0.0f, 1.0f };

		SDK::FVector left_vector;
		left_vector.X = up_vector.Y * forward.Z - up_vector.Z * forward.Y;
		left_vector.Y = up_vector.Z * forward.X - up_vector.X * forward.Z;
		left_vector.Z = up_vector.X * forward.Y - up_vector.Y * forward.X;

		return left_vector;
	}

	SDK::FVector subtract(const SDK::FVector& a, const SDK::FVector& b) {
		return { a.X - b.X, a.Y - b.Y, a.Z - b.Z };
	}

	SDK::FVector add(const SDK::FVector& a, const SDK::FVector& b) {
		return { a.X + b.X, a.Y + b.Y, a.Z + b.Z };
	}

	SDK::FVector multiply(const SDK::FVector& v, const float scalar) {
		return { v.X * scalar, v.Y * scalar, v.Z * scalar };
	}

	float dot(const SDK::FVector& a, const SDK::FVector& b) {
		return a.X * b.X + a.Y * b.Y + a.Z * b.Z;
	}

	SDK::FVector cross(const SDK::FVector& a, const SDK::FVector& b) {
		return {
			a.Y * b.Z - a.Z * b.Y,
			a.Z * b.X - a.X * b.Z,
			a.X * b.Y - a.Y * b.X
		};
	}

	SDK::FVector normalize(const SDK::FVector& v) {
		const float length = sqrt(v.X * v.X + v.Y * v.Y + v.Z * v.Z);
		return {v.X / length, v.Y / length, v.Z / length};
	}


	SDK::FRotator subtract(const SDK::FRotator& a, const SDK::FRotator& b) {
		return {a.Pitch - b.Pitch, a.Yaw - b.Yaw, a.Roll - b.Roll};
	}

	SDK::FRotator add(const SDK::FRotator& a, const SDK::FRotator& b) {
		return {a.Pitch + b.Pitch, a.Yaw + b.Yaw, a.Roll + b.Roll};
	}

	SDK::FRotator multiply(const SDK::FRotator& r, const float scalar) {
		return {r.Pitch * scalar, r.Yaw * scalar, r.Roll * scalar};
	}

	float dot(const SDK::FRotator& a, const SDK::FRotator& b) {
		// this might not make much sense for rotations
		return a.Pitch * b.Pitch + a.Yaw * b.Yaw + a.Roll * b.Roll;
	}

	SDK::FRotator cross(const SDK::FRotator& a, const SDK::FRotator& b) {
		// Cross product is not defined for rotations in the same way as it is for vectors
		return SDK::FRotator();
	}

	SDK::FRotator normalize(const SDK::FRotator& r) {
		// Normalizing a rotation might mean ensuring all angles are within a certain range
		return SDK::FRotator(fmod(r.Pitch, 360.0f), fmod(r.Yaw, 360.0f), fmod(r.Roll, 360.0f));
	}

	SDK::FRotator lerp(const SDK::FRotator& start, const SDK::FRotator& end, float t) {
		SDK::FRotator result;

		// Helper function to compute the shortest angle difference
		auto shortest_angle = [](const float start, const float end) {
			float diff = fmodf(end - start, 360.0f);
			if (diff > 180.0f) {
				diff -= 360.0f;
			}
			else if (diff < -180.0f) {
				diff += 360.0f;
			}
			return diff;
			};

		result.Pitch = start.Pitch + shortest_angle(start.Pitch, end.Pitch) * t;
		result.Yaw = start.Yaw + shortest_angle(start.Yaw, end.Yaw) * t;
		result.Roll = start.Roll + shortest_angle(start.Roll, end.Roll) * t;

		return result;
	}

	SDK::FRotator calc_rotation(const SDK::FVector& start, const SDK::FVector& target) {
		const SDK::FVector delta = target - start;
#pragma warning(disable:4244)
		// Calculate Yaw
		const float yaw = atan2f(delta.Y, delta.X) * (180.0f / UE4_PI);

		// Calculate Pitch
		const float dist_2d = sqrtf(delta.X * delta.X + delta.Y * delta.Y);
		const float pitch = atan2f(delta.Z, dist_2d) * (180.0f / UE4_PI);

		// Maybe for lean
		constexpr float roll = 0.0f;
#pragma warning(default:4244)
		return { pitch, yaw, roll };
	}


	float calculate_rotation_distance(const SDK::FRotator& start, const SDK::FRotator& end) {
		const SDK::FRotator delta = end - start;
		return abs(delta.Pitch) + abs(delta.Yaw) + abs(delta.Roll);
	}

	SDK::FRotator smooth_rotate_distance_based(const SDK::FRotator& start, const SDK::FRotator& end, float maxDegreesPerFrame) {
		const float distance = calculate_rotation_distance(start, end);
		const float t = min(maxDegreesPerFrame / distance, 1.0f);
		return lerp(start, end, t);
	}



	template<typename T, typename Func>
	void ForEach(const SDK::TArray<T>& array, Func function) {
		for (int32_t i = 0; i < array.Count(); ++i) {
			function(array[i]);
		}
	}

	float distance(const SDK::FVector& a, const SDK::FVector& b)
	{
		return std::sqrt((b.X - a.X) * (b.X - a.X) + (b.Y - a.Y) * (b.Y - a.Y) + (b.Z - a.Z) * (b.Z - a.Z));
	}

	constexpr float degrees_to_radians(const float degrees) {
		return degrees * static_cast<float>(UE4_PI) / 180.0f;
	}

	SDK::FVector forward_vector(const SDK::FRotator& rot)
	{
		const float pitch_rad = degrees_to_radians(rot.Pitch);
		const float yaw_rad = degrees_to_radians(rot.Yaw);
		return {
			cos(pitch_rad) * cos(yaw_rad),
			cos(pitch_rad) * sin(yaw_rad),
			sin(-pitch_rad)
		};
	}

	SDK::FLinearColor rgb_to_flinear(const int r, const int g, const int b)
	{
		return { static_cast<float>(r) / 255.0f,static_cast<float>(g) / 255.0f,static_cast<float>(b) / 255.0f ,1.0f };
	}

	SDK::FLinearColor hex_to_flinear(const std::string& hex)
	{
		if (hex.size() != 7 || hex[0] != '#')
		{
			return {0,0,0,1};
		}
		int r, g, b;
		std::sscanf(hex.c_str(), "#%02x%02x%02x", &r, &g, &b);
		return {static_cast<float>(r) / 255.0f, static_cast<float>(g) / 255.0f, static_cast<float>(b) / 255.0f, 1.0f};
	}

	bool is_point_in_rect(const SDK::FVector2D& pt, const SDK::FVector2D& origin, const SDK::FVector2D & size)
	{
		if (pt.X < origin.X) return false;
		if (pt.X > origin.X + size.X) return false;
		if (pt.Y < origin.Y) return false;
		if (pt.Y > origin.Y + size.Y) return false;
		return true;
	}
}
