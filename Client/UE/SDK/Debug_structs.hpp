#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELoggingOptions : uint8
{
	LO_Viewport                    = 0,
	LO_Console                     = 1,
	LO_Both                        = 2,
	LO_NoLog                       = 3,
	LO_MAX                         = 4,
};

enum class EDebugLogType : uint8
{
	DL_Info                        = 0,
	DL_Success                     = 1,
	DL_Warning                     = 2,
	DL_Error                       = 3,
	DL_Fatal                       = 4,
	DL_MAX                         = 5,
};

enum class EDebugLogComparisonMethod : uint8
{
	CM_Equal_To                    = 0,
	CM_Not_Equal_To                = 1,
	CM_Greater_Than_Or_Equal_To    = 2,
	CM_Less_Than_Or_Equal_To       = 3,
	CM_Greater_Than                = 4,
	CM_Less_Than                   = 5,
	CM_MAX                         = 6,
};

enum class EDebugLogTimeUnit : uint8
{
	DLTU_Nanoseconds               = 0,
	DLTU_Microseconds              = 1,
	DLTU_Milliseconds              = 2,
	DLTU_Seconds                   = 3,
	DLTU_Minutes                   = 4,
	DLTU_Hours                     = 5,
	DLTU_Days                      = 6,
	DLTU_Weeks                     = 7,
	DLTU_Months                    = 8,
	DLTU_Years                     = 9,
	DLTU_Decades                   = 10,
	DLTU_Centuries                 = 11,
	DLTU_Millennium                = 12,
	DLTU_MAX                       = 13,
};

enum class EDebugLogLightUnit : uint8
{
	DLLU_Lumens                    = 0,
	DLLU_Candela                   = 1,
	DLLU_Lux                       = 2,
	DLLU_CandelaPerMeter2          = 3,
	DLLU_MAX                       = 4,
};

enum class EDebugLogFrequencyUnit : uint8
{
	DLFU_Hertz                     = 0,
	DLFU_Kilohertz                 = 1,
	DLFU_Megahertz                 = 2,
	DLFU_Gigahertz                 = 3,
	DLFU_RevolutionsPerMinute      = 4,
	DLFU_MAX                       = 5,
};

enum class EDebugLogForceUnit : uint8
{
	DLFU_Newtons                   = 0,
	DLFU_PoundsForce               = 1,
	DLFU_KilogramsForce            = 2,
};

enum class EDebugLogAngularUnit : uint8
{
	DLAU_Degrees                   = 0,
	DLAU_Radians                   = 1,
	DLAU_MAX                       = 2,
};

enum class EDebugLogSpeedUnit : uint8
{
	DLSU_CentimetersPerSec         = 0,
	DLSU_CentimetersPerHour        = 1,
	DLSU_MicrometersPerSec         = 2,
	DLSU_MicrometersPerHour        = 3,
	DLSU_MillimetersPerSec         = 4,
	DLSU_MillimetersPerHour        = 5,
	DLSU_MetersPerSec              = 6,
	DLSU_MetersPerHour             = 7,
	DLSU_KilometersPerSec          = 8,
	DLSU_KilometersPerHour         = 9,
	DLSU_InchesPerSec              = 10,
	DLSU_InchesPerHour             = 11,
	DLSU_FeetPerSec                = 12,
	DLSU_FeetPerHour               = 13,
	DLSU_MilesPerSec               = 14,
	DLSU_MilesPerHour              = 15,
	DLSU_YardsPerSec               = 16,
	DLSU_YardsPerHour              = 17,
	DLSU_Knots                     = 18,
	DLSU_MAX                       = 19,
};

enum class EDebugLogMassUnit : uint8
{
	DLMU_Microgram                 = 0,
	DLMU_Milligram                 = 1,
	DLMU_Gram                      = 2,
	DLMU_Kilogram                  = 3,
	DLMU_Tonne                     = 4,
	DLMU_Ounce                     = 5,
	DLMU_Pound                     = 6,
	DLMU_Stone                     = 7,
	DLMU_MAX                       = 8,
};

enum class EDebugLogLengthUnit : uint8
{
	DLLU_Centimeter                = 0,
	DLLU_Micrometer                = 1,
	DLLU_Millimeter                = 2,
	DLLU_Meter                     = 3,
	DLLU_Kilometer                 = 4,
	DLLU_Inch                      = 5,
	DLLU_Feet                      = 6,
	DLLU_Mile                      = 7,
	DLLU_NauticalMile              = 8,
	DLLU_Yard                      = 9,
	DLLU_Lightyears                = 10,
};

enum class EDebugLogDataUnit : uint8
{
	DLDU_Bit                       = 0,
	DLDU_Byte                      = 1,
	DLDU_Kilobyte                  = 2,
	DLDU_Megabyte                  = 3,
	DLDU_Gigabyte                  = 4,
	DLDU_Terabyte                  = 5,
	DLDU_Petabyte                  = 6,
	DLDU_MAX                       = 7,
};

enum class EDebugLogVolumeUnit : uint8
{
	DLVU_Litre                     = 0,
	DLVU_Millilitre                = 1,
	DLVU_Gallon                    = 2,
	DLVU_Pint                      = 3,
	DLVU_Quart                     = 4,
	DLVU_MAX                       = 5,
};

enum class EDebugLogTemperatureUnit : uint8
{
	DLTU_Celsius                   = 0,
	DLTU_Fahrenheit                = 1,
	DLTU_Kelvin                    = 2,
};

enum class EDebugLogNumberSystems : uint8
{
	DLNS_Decimal                   = 0,
	DLNS_Binary                    = 1,
	DLNS_Hex                       = 2,
	DLNS_Octal                     = 3,
	DLNS_Roman                     = 4,
	DLNS_MAX                       = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


