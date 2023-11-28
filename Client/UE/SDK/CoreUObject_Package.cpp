/**
 * Name: ReadyOrNot
 * Version: 2
 */

#include "pch.h"
#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Static Fields
	// --------------------------------------------------
	class TUObjectArray*                                         UObject::GObjects = nullptr;                             // 0x0000(0x0008) PREDEFINED PROPERTY

	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 */
	FVector2D::FVector2D()
	{
		X = 0;
		Y = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 * 		float                                              x
	 * 		float                                              y
	 */
	FVector2D::FVector2D(float x, float y)
	{
		X = x;
		Y = y;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue
	 */
	bool FVector2D::IsValid()
	{
		return X != 0.0f && Y != 0.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 * 		FVector2D&                                         v
	 */
	float FVector2D::Distance(FVector2D& v) const
	{
		return powf(v.X - X, 2) + powf(v.Y - Y, 2);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator +(const FVector2D& other) const
	{
		return FVector2D(X + other.X, Y + other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator +(float scalar) const
	{
		return FVector2D(X + scalar, Y + scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator -(float scalar) const
	{
		return FVector2D(X - scalar, Y - scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator -(const FVector2D& other) const
	{
		return FVector2D(X - other.X, Y - other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator *(float scalar) const
	{
		return FVector2D(X * scalar, Y * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator *(const FVector2D& other) const
	{
		return FVector2D(X * other.X, Y * other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D FVector2D::operator /(float scalar) const
	{
		return FVector2D(X / scalar, Y / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D                                          ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D FVector2D::operator /(const FVector2D& other) const
	{
		return FVector2D(X / other.X, Y / other.Y);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator =(const FVector2D& other)
	{
		X = other.X;
		Y = other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D& FVector2D::operator +=(float scalar)
	{
		X += scalar;
		Y += scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator +=(const FVector2D& other)
	{
		X += other.X;
		Y += other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D& FVector2D::operator -=(float scalar)
	{
		X -= scalar;
		Y -= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator -=(const FVector2D& other)
	{
		X -= other.X;
		Y -= other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		const FVector2D&                                   other
	 */
	FVector2D& FVector2D::operator *=(const FVector2D& other)
	{
		X *= other.X;
		Y *= other.Y;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector2D&                                         ReturnValue
	 * 		float                                              scalar
	 */
	FVector2D& FVector2D::operator *=(float scalar)
	{
		X *= scalar;
		Y *= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 */
	FVector::FVector()
	{
		X = 0;
		Y = 0;
		Z = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 * 		float                                              x
	 * 		float                                              y
	 * 		float                                              z
	 */
	FVector::FVector(float x, float y, float z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		float                                              scalar
	 */
	FVector FVector::operator +(float scalar) const
	{
		return FVector(X + scalar, Y + scalar, Z + scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator +(const FVector& other) const
	{
		return FVector(X + other.X, Y + other.Y, Z + other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		float                                              scalar
	 */
	FVector FVector::operator -(float scalar) const
	{
		return FVector(X - scalar, Y - scalar, Z - scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator -(const FVector& other) const
	{
		return FVector(X - other.X, Y - other.Y, Z - other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		float                                              scalar
	 */
	FVector FVector::operator *(float scalar) const
	{
		return FVector(X * scalar, Y * scalar, Z * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator *(const FVector& other) const
	{
		return FVector(X * other.X, Y * other.Y, Z * other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		float                                              scalar
	 */
	FVector FVector::operator /(float scalar) const
	{
		return FVector(X / scalar, Y / scalar, Z / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector FVector::operator /(const FVector& other) const
	{
		return FVector(X / other.X, Y / other.Y, Z / other.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator =(const FVector& other)
	{
		X = other.X;
		Y = other.Y;
		Z = other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		float                                              scalar
	 */
	FVector& FVector::operator +=(float scalar)
	{
		X += scalar;
		Y += scalar;
		Z += scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator +=(const FVector& other)
	{
		X += other.X;
		Y += other.Y;
		Z += other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		float                                              scalar
	 */
	FVector& FVector::operator -=(float scalar)
	{
		X -= scalar;
		Y -= scalar;
		Z -= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator -=(const FVector& other)
	{
		X -= other.X;
		Y -= other.Y;
		Z -= other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		const FVector&                                     other
	 */
	FVector& FVector::operator *=(const FVector& other)
	{
		X *= other.X;
		Y *= other.Y;
		Z *= other.Z;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector&                                           ReturnValue
	 * 		float                                              scalar
	 */
	FVector& FVector::operator *=(float scalar)
	{
		X *= scalar;
		Y *= scalar;
		Z *= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue
	 */
	bool FVector::IsValid()
	{
		return X != 0.0f && Y != 0.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 * 		FVector&                                           angle
	 */
	void FVector::Normalize360(FVector& angle)
	{
		const float maxX1 = 80.0f;
		
		while (angle.X > maxX1)
			angle.X -= 180.0f;
		while (angle.X < -maxX1)
			angle.X += 180.0f;
		while (angle.Y > 180.0f)
			angle.Y -= 360.0f;
		while (angle.Y < -180.0f)
			angle.Y += 360.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 * 		const FVector&                                     b
	 */
	float FVector::Dot(const FVector& b) const
	{
		return (X * b.X) + (Y * b.Y) + (Z * b.Z);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 */
	float FVector::MagnitudeSqr() const
	{
		return Dot(*this);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 */
	float FVector::Magnitude() const
	{
		return std::sqrtf(MagnitudeSqr());
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FVector                                            ReturnValue
	 */
	FVector FVector::Unit() const
	{
		const float fMagnitude = Magnitude();
		return FVector(X / fMagnitude, Y / fMagnitude, Z / fMagnitude);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 */
	// FRotator FVector::ToRotator() const
	// {
	// 	static constexpr float PI = 3.14159265359f;
	// 	// Pitch, Yaw, Roll
	// 	return FRotator(asinf(Z / Magnitude()) * 180.0f / PI, atan2f(Y, X) * 180.0f / PI, 0.0f);
	// }

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 * 		const FVector&                                     v
	 */
	float FVector::Distance(const FVector& v) const
	{
		return float(sqrtf(powf(v.X - X, 2.0f) + powf(v.Y - Y, 2.0f) + powf(v.Z - Z, 2.0f)));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 * 		FVector&                                           v
	 */
	float FVector::DistanceMeter(FVector& v) const
	{
		return Distance(v) * 0.01f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 */
	FLinearColor::FLinearColor()
	{
		R = 0;
		G = 0;
		B = 0;
		A = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 * 		float                                              lr
	 * 		float                                              g
	 * 		float                                              b
	 * 		float                                              a
	 */
	FLinearColor::FLinearColor(float r, float g, float b, float a)
	{
		R = r;
		G = g;
		B = b;
		A = a;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 */
	FRotator::FRotator()
	{
		Pitch = 0.0f;
		Yaw = 0.0f;
		Roll = 0.0f;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		                                                   ReturnValue
	 * 		float                                              pitch
	 * 		float                                              yaw
	 * 		float                                              roll
	 */
	FRotator::FRotator(float pitch, float yaw, float roll)
	{
		Pitch = pitch;
		Yaw = yaw;
		Roll = roll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator +(float scalar) const
	{
		return FRotator(Pitch + scalar, Yaw + scalar, Roll + scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator +(const FRotator& other) const
	{
		return FRotator(Pitch + other.Pitch, Yaw + other.Yaw, Roll + other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator -(float scalar) const
	{
		return FRotator(Pitch - scalar, Yaw - scalar, Roll - scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator -(const FRotator& other) const
	{
		return FRotator(Pitch - other.Pitch, Yaw - other.Yaw, Roll - other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator *(float scalar) const
	{
		return FRotator(Pitch * scalar, Yaw * scalar, Roll * scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator *(const FRotator& other) const
	{
		return FRotator(Pitch * other.Pitch, Yaw * other.Yaw, Roll * other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		float                                              scalar
	 */
	FRotator FRotator::operator /(float scalar) const
	{
		return FRotator(Pitch / scalar, Yaw / scalar, Roll / scalar);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator FRotator::operator /(const FRotator& other) const
	{
		return FRotator(Pitch / other.Pitch, Yaw / other.Yaw, Roll / other.Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator =(const FRotator& other)
	{
		Pitch = other.Pitch; Yaw = other.Yaw; Roll = other.Roll; return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		float                                              scalar
	 */
	FRotator& FRotator::operator +=(float scalar)
	{
		Pitch += scalar;
		Yaw += scalar;
		Roll += scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator +=(const FRotator& other)
	{
		Pitch += other.Pitch;
		Yaw += other.Yaw;
		Roll += other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		float                                              scalar
	 */
	FRotator& FRotator::operator -=(float scalar)
	{
		Pitch -= scalar;
		Yaw -= scalar;
		Roll -= scalar;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator -=(const FRotator& other)
	{
		Pitch -= other.Pitch;
		Yaw -= other.Yaw;
		Roll -= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator *=(const FRotator& other)
	{
		Pitch *= other.Pitch;
		Yaw *= other.Yaw;
		Roll *= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const float                                        other
	 */
	FRotator& FRotator::operator *=(const float other)
	{
		Pitch *= other;
		Yaw *= other;
		Roll *= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const FRotator&                                    other
	 */
	FRotator& FRotator::operator /=(const FRotator& other)
	{
		Pitch /= other.Pitch;
		Yaw /= other.Yaw;
		Roll /= other.Roll;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator&                                          ReturnValue
	 * 		const float                                        other
	 */
	FRotator& FRotator::operator /=(const float other)
	{
		Pitch /= other;
		Yaw /= other;
		Roll /= other;
		return *this;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue
	 */
	float FRotator::Size() const
	{
		return sqrt(Pitch * Pitch + Yaw * Yaw + Roll * Roll);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FRotator                                           ReturnValue
	 */
	FRotator FRotator::Clamp() const
	{
		FRotator r = { Pitch, Yaw, Roll };
		if (r.Yaw > 180.0f)
			r.Yaw -= 360.0f;
		else if (r.Yaw < -180.0f)
			r.Yaw += 360.0f;
		if (r.Pitch > 180.0f)
			r.Pitch -= 360.0f;
		else if (r.Pitch < -180.0f)
			r.Pitch += 360.0f;
		if (r.Pitch < -89.0f)
			r.Pitch = -89.0f;
		else if (r.Pitch > 89.0f)
			r.Pitch = 89.0f;
		r.Roll = 0.0f;
		return r;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FMatrix                                            ReturnValue
	 * 		const FMatrix&                                     other
	 */
	FMatrix FMatrix::operator *(const FMatrix& other) const
	{
		FMatrix ret;
		
		ret.XPlane.X = XPlane.X * other.XPlane.X + XPlane.Y * other.YPlane.X + XPlane.Z * other.ZPlane.X + XPlane.W * other.WPlane.X;
		ret.XPlane.Y = XPlane.X * other.XPlane.Y + XPlane.Y * other.YPlane.Y + XPlane.Z * other.ZPlane.Y + XPlane.W * other.WPlane.Y;
		ret.XPlane.Z = XPlane.X * other.XPlane.Z + XPlane.Y * other.YPlane.Z + XPlane.Z * other.ZPlane.Z + XPlane.W * other.WPlane.Z;
		ret.XPlane.W = XPlane.X * other.XPlane.W + XPlane.Y * other.YPlane.W + XPlane.Z * other.ZPlane.W + XPlane.W * other.WPlane.W;
		
		ret.YPlane.X = YPlane.X * other.XPlane.X + YPlane.Y * other.YPlane.X + YPlane.Z * other.ZPlane.X + YPlane.W * other.WPlane.X;
		ret.YPlane.Y = YPlane.X * other.XPlane.Y + YPlane.Y * other.YPlane.Y + YPlane.Z * other.ZPlane.Y + YPlane.W * other.WPlane.Y;
		ret.YPlane.Z = YPlane.X * other.XPlane.Z + YPlane.Y * other.YPlane.Z + YPlane.Z * other.ZPlane.Z + YPlane.W * other.WPlane.Z;
		ret.YPlane.W = YPlane.X * other.XPlane.W + YPlane.Y * other.YPlane.W + YPlane.Z * other.ZPlane.W + YPlane.W * other.WPlane.W;
		
		ret.ZPlane.X = ZPlane.X * other.XPlane.X + ZPlane.Y * other.YPlane.X + ZPlane.Z * other.ZPlane.X + ZPlane.W * other.WPlane.X;
		ret.ZPlane.Y = ZPlane.X * other.XPlane.Y + ZPlane.Y * other.YPlane.Y + ZPlane.Z * other.ZPlane.Y + ZPlane.W * other.WPlane.Y;
		ret.ZPlane.Z = ZPlane.X * other.XPlane.Z + ZPlane.Y * other.YPlane.Z + ZPlane.Z * other.ZPlane.Z + ZPlane.W * other.WPlane.Z;
		ret.ZPlane.W = ZPlane.X * other.XPlane.W + ZPlane.Y * other.YPlane.W + ZPlane.Z * other.ZPlane.W + ZPlane.W * other.WPlane.W;
		
		ret.WPlane.X = WPlane.X * other.XPlane.X + WPlane.Y * other.YPlane.X + WPlane.Z * other.ZPlane.X + WPlane.W * other.WPlane.X;
		ret.WPlane.Y = WPlane.X * other.XPlane.Y + WPlane.Y * other.YPlane.Y + WPlane.Z * other.ZPlane.Y + WPlane.W * other.WPlane.Y;
		ret.WPlane.Z = WPlane.X * other.XPlane.Z + WPlane.Y * other.YPlane.Z + WPlane.Z * other.ZPlane.Z + WPlane.W * other.WPlane.Z;
		ret.WPlane.W = WPlane.X * other.XPlane.W + WPlane.Y * other.YPlane.W + WPlane.Z * other.ZPlane.W + WPlane.W * other.WPlane.W;
		
		return ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FMatrix                                            ReturnValue
	 */
	FMatrix FTransform::ToMatrixWithScale() const
	{
		FMatrix OutMatrix;
		OutMatrix.WPlane.X = Translation.X;
		OutMatrix.WPlane.Y = Translation.Y;
		OutMatrix.WPlane.Z = Translation.Z;
		
		const float x2 = Rotation.X + Rotation.X;
		const float y2 = Rotation.Y + Rotation.Y;
		const float z2 = Rotation.Z + Rotation.Z;
		
		{
			const float xx2 = Rotation.X * x2;
			const float yy2 = Rotation.Y * y2;
			const float zz2 = Rotation.Z * z2;
		
			OutMatrix.XPlane.X = (1.0f - (yy2 + zz2)) * Scale3D.X;
			OutMatrix.YPlane.Y = (1.0f - (xx2 + zz2)) * Scale3D.Y;
			OutMatrix.ZPlane.Z = (1.0f - (xx2 + yy2)) * Scale3D.Z;
		}
		
		{
			const float yz2 = Rotation.Y * z2;
			const float wx2 = Rotation.W * x2;
		
			OutMatrix.ZPlane.Y = (yz2 - wx2) * Scale3D.Z;
			OutMatrix.YPlane.Z = (yz2 + wx2) * Scale3D.Y;
		}
		
		{
			const float xy2 = Rotation.X * y2;
			const float wz2 = Rotation.W * z2;
		
			OutMatrix.YPlane.X = (xy2 - wz2) * Scale3D.Y;
			OutMatrix.XPlane.Y = (xy2 + wz2) * Scale3D.X;
		}
		
		{
			const float xz2 = Rotation.X * z2;
			const float wy2 = Rotation.W * y2;
		
			OutMatrix.ZPlane.X = (xz2 + wy2) * Scale3D.Z;
			OutMatrix.XPlane.Z = (xz2 - wy2) * Scale3D.X;
		}
		
		OutMatrix.XPlane.W = 0.0f;
		OutMatrix.YPlane.W = 0.0f;
		OutMatrix.ZPlane.W = 0.0f;
		OutMatrix.WPlane.W = 1.0f;
		
		return OutMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TUObjectArray&                                     ReturnValue
	 */
	TUObjectArray& UObject::GetGlobalObjects()
	{
		return *GObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		std::string                                        ReturnValue
	 */
	std::string UObject::GetName() const
	{
		std::string name(Name.GetName());
		if (Name.Number > 0)
			name += '_' + std::to_string(Name.Number);
		auto pos = name.rfind('/');
		if (pos == std::string::npos)
			return name;
		return name.substr(pos + 1);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		std::string                                        ReturnValue
	 */
	std::string UObject::GetFullName() const
	{
		std::string name;
		if (Class != nullptr)
		{
			std::string temp;
			for (auto p = Outer; p; p = p->Outer)
			{
				temp = p->GetName() + "." + temp;
			}
			name = Class->GetName();
			name += " ";
			name += temp;
			name += GetName();
		}
		return name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 * 		const std::string&                                 name
	 */
	UClass* UObject::FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue
	 * 		UClass*                                            cmp
	 */
	bool UObject::IsA(UClass* cmp) const
	{
		for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
		{
			if (super == cmp)
				return true;
		}
		
		return false;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreUObject.Object.ExecuteUbergraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UObject::ExecuteUbergraph(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(3680);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 * 		class UFunction*                                   function
	 * 		void*                                              parms
	 */
	void UObject::ProcessEvent(class UFunction* function, void* parms)
	{
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, PROCESS_EVENT_INDEX)(this, function, parms);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UObject::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(20);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBuffer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTextBuffer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1574);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UField::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1575);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStruct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UStruct::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1576);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		UObject*                                           ReturnValue
	 */
	UObject* UClass::CreateDefaultObject()
	{
		return GetVFunction<UObject*(*)(UClass*)>(this, CREATE_DEFAULT_OBJECT_INDEX)(this);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UClass::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1579);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDynamicClass::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1583);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptStruct.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UScriptStruct::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1577);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPackage::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1578);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEnum::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1585);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFunction::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1580);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDelegateFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDelegateFunction::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1581);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USparseDelegateFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USparseDelegateFunction::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1582);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPackageMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPackageMap::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1584);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerPlaceholderClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULinkerPlaceholderClass::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1586);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMetaData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1589);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectRedirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UObjectRedirector::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1590);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1591);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoolProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBoolProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1595);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectPropertyBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UObjectPropertyBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1594);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerPlaceholderExportObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULinkerPlaceholderExportObject::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1587);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNumericProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNumericProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1596);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGCObjectReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGCObjectReferencer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1573);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UObjectProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1598);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerPlaceholderFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULinkerPlaceholderFunction::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1588);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnumProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UEnumProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1592);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UByteProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UByteProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1597);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UClassProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1599);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArrayProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UArrayProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1593);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USoftObjectProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1615);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftClassProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USoftClassProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1616);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDelegateProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1600);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UStructProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1618);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPropertyWrapper::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1624);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeakObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWeakObjectProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1622);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStrProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UStrProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1617);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMulticastDelegatePropertyWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMulticastDelegatePropertyWrapper::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1625);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTextProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1623);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUInt16Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUInt16Property::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1619);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMulticastInlineDelegatePropertyWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMulticastInlineDelegatePropertyWrapper::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1626);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoubleProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDoubleProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1601);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUInt32Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUInt32Property::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1620);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFloatProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1602);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UIntProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1603);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUInt64Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUInt64Property::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1621);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt8Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInt8Property::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1604);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt16Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInt16Property::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1605);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInt64Property.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInt64Property::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1606);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterfaceProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInterfaceProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1607);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULazyObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULazyObjectProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1608);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMapProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1609);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMulticastDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMulticastDelegateProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1610);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMulticastInlineDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMulticastInlineDelegateProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1611);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMulticastSparseDelegateProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMulticastSparseDelegateProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1612);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNameProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNameProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1613);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USetProperty::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1614);
		return ptr;
	}

}


