#include "pch.h"
#include "engine_extensions.hpp"

namespace engine_extensions
{

	SDK::FVector get_bone_world_pos(SDK::USkeletalMeshComponent* mesh, int32_t bone_id)
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


	SDK::FVector offset(const SDK::FVector& origin, const SDK::FVector& direction, float distance) {
		SDK::FVector vec;

		// Calculate the new x, y, and z coordinates
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
		return SDK::FVector(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
	}

	SDK::FVector add(const SDK::FVector& a, const SDK::FVector& b) {
		return SDK::FVector(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
	}

	SDK::FVector multiply(const SDK::FVector& v, float scalar) {
		return SDK::FVector(v.X * scalar, v.Y * scalar, v.Z * scalar);
	}

	float dot(const SDK::FVector& a, const SDK::FVector& b) {
		return a.X * b.X + a.Y * b.Y + a.Z * b.Z;
	}

	SDK::FVector cross(const SDK::FVector& a, const SDK::FVector& b) {
		return SDK::FVector(
			a.Y * b.Z - a.Z * b.Y,
			a.Z * b.X - a.X * b.Z,
			a.X * b.Y - a.Y * b.X
		);
	}

	SDK::FVector normalize(const SDK::FVector& v) {
		float length = sqrt(v.X * v.X + v.Y * v.Y + v.Z * v.Z);
		return SDK::FVector(v.X / length, v.Y / length, v.Z / length);
	}


	SDK::FRotator Subtract(const SDK::FRotator& a, const SDK::FRotator& b) {
		return SDK::FRotator(a.Pitch - b.Pitch, a.Yaw - b.Yaw, a.Roll - b.Roll);
	}

	SDK::FRotator Add(const SDK::FRotator& a, const SDK::FRotator& b) {
		return SDK::FRotator(a.Pitch + b.Pitch, a.Yaw + b.Yaw, a.Roll + b.Roll);
	}

	SDK::FRotator Multiply(const SDK::FRotator& r, float scalar) {
		return SDK::FRotator(r.Pitch * scalar, r.Yaw * scalar, r.Roll * scalar);
	}

	float Dot(const SDK::FRotator& a, const SDK::FRotator& b) {
		// This might not make much sense for rotations
		return a.Pitch * b.Pitch + a.Yaw * b.Yaw + a.Roll * b.Roll;
	}

	SDK::FRotator Cross(const SDK::FRotator& a, const SDK::FRotator& b) {
		// Cross product is not defined for rotations in the same way as it is for vectors
		return SDK::FRotator();
	}

	SDK::FRotator Normalize(const SDK::FRotator& r) {
		// Normalizing a rotation might mean ensuring all angles are within a certain range
		return SDK::FRotator(fmod(r.Pitch, 360.0f), fmod(r.Yaw, 360.0f), fmod(r.Roll, 360.0f));
	}

	SDK::FRotator Lerp(const SDK::FRotator& start, const SDK::FRotator& end, float t) {
		SDK::FRotator result;

		// Helper function to compute the shortest angle difference
		auto shortest_angle = [](float start, float end) {
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


	float CalculateRotationDistance(const SDK::FRotator& start, const SDK::FRotator& end) {
		SDK::FRotator delta = end - start;
		return abs(delta.Pitch) + abs(delta.Yaw) + abs(delta.Roll);
	}

	SDK::FRotator SmoothRotateDistanceBased(const SDK::FRotator& start, const SDK::FRotator& end, float maxDegreesPerFrame) {
		float distance = CalculateRotationDistance(start, end);
		float t = min(maxDegreesPerFrame / distance, 1.0f);
		return Lerp(start, end, t);
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

	constexpr float DegreesToRadians(float degrees) {
		return degrees * static_cast<float>(UE4_PI) / 180.0f;
	}

	SDK::FVector forward_vector(const SDK::FRotator& rot)
	{
		float pitchRad = DegreesToRadians(rot.Pitch);
		float yawRad = DegreesToRadians(rot.Yaw);
		return SDK::FVector(
			cos(pitchRad) * cos(yawRad),
			cos(pitchRad) * sin(yawRad),
			sin(-pitchRad)
		);
	}

	SDK::FLinearColor rgb_to_flinear(int r, int g, int b)
	{
		return { float(r) / 255.0f,float(g) / 255.0f,float(b) / 255.0f ,1.0f };
	}

	SDK::FLinearColor hex_to_flinear(const std::string& hex)
	{
		if (hex.size() != 7 || hex[0] != '#')
		{
			return {0,0,0,1};
		}
		int r, g, b;
		std::sscanf(hex.c_str(), "#%02x%02x%02x", &r, &g, &b);
		return SDK::FLinearColor(float(r) / 255.0f, float(g) / 255.0f, float(b) / 255.0f, 1.0f);
	}
}
