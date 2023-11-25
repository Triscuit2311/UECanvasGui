#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class VictoryBPLibrary.TKMathFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector VectorRadiansToDegrees(const struct FVector& RadVector);
		struct FVector VectorDegreesToRadians(const struct FVector& DegVector);
		bool SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
		float SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& planePoint, const struct FVector& Point);
		struct FVector SetVectorLength(const struct FVector& A, float Size);
		void SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const class FName& BoneName);
		int32_t RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf);
		int32_t RoundToNearestMultiple(int32_t A, int32_t Multiple);
		int32_t RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf);
		struct FVector ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point);
		int32_t PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point);
		struct FVector2D NegateVector2D(const struct FVector2D& A);
		int32_t NegateInt(int32_t A);
		float NegateFloat(float A);
		bool LineToLineIntersection(struct FVector* IntersectionPoint, const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2);
		bool LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime);
		bool IsPowerOfTwo(int32_t X);
		bool IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
		bool IsMultipleOf(int32_t A, int32_t Multiple);
		bool IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius);
		bool IsEvenNumber(float A);
		struct FVector GridSnap(const struct FVector& A, float Grid);
		struct FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const class FName& BoneName, bool DrawDebugInfo);
		int32_t GetConsoleVariableInt(const class FString& VariableName);
		float GetConsoleVariableFloat(const class FString& VariableName);
		float ConvertPhysicsLinearVelocity(const struct FVector& Velocity, ESpeedUnit SpeedUnit);
		void ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets);
		bool ClosestPointsOnTwoLines(struct FVector* closestPointLine1, struct FVector* closestPointLine2, const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2);
		void ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
		struct FVector ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir);
		struct FVector ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd);
		bool AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2);
		static UClass* StaticClass();
	};

	/**
	 * Class VictoryBPLibrary.VictoryBPHTML
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVictoryBPHTML : public UBlueprintFunctionLibrary
	{
	public:
		void VictoryHTML5_SetCursorVisible(bool MakeVisible);
		bool IsHTML();
		static UClass* StaticClass();
	};

	/**
	 * Class VictoryBPLibrary.VictoryBPFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool WorldType__InPIEWorld(class UObject* WorldContextObject);
		bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
		bool WorldType__InEditorWorld(class UObject* WorldContextObject);
		bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
		class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, class UUserWidget* WidgetClass);
		void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, class UUserWidget* WidgetClass, bool bImmediateOnly);
		void Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyRenderedActors, float MinRecentTime);
		void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyNotRenderedActors, float MinRecentTime);
		bool ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
		bool Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY);
		bool Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY);
		bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY);
		bool Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);
		bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
		void VictorySortIntArray(TArray<int32_t>* IntArray, TArray<int32_t>* IntArrayRef);
		void VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef);
		void VictorySimulateMouseWheel(float Delta);
		void VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, EInputEvent EventType);
		void VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value);
		void VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value);
		void VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value);
		void VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value);
		void VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32_t Value);
		void VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value);
		void VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value);
		void VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value);
		void VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove);
		void VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove);
		bool VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding);
		bool VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding);
		bool VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);
		class FString VictoryPaths__WindowsNoEditorDir();
		class FString VictoryPaths__Win64Dir_BinaryLocation();
		class FString VictoryPaths__ScreenShotsDir();
		class FString VictoryPaths__SavedDir();
		class FString VictoryPaths__LogsDir();
		class FString VictoryPaths__GameRootDirectory();
		class FString VictoryPaths__ConfigDir();
		class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, const class FString& MapFolderOffOfContent, const class FString& LevelName, int32_t InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success);
		void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out);
		void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class AActor* ActorClass, TArray<class AVictoryISM*>* CreatedISMActors, bool DestroyOriginalActors, int32_t MinCountToCreateISM);
		bool VictoryIsApplicationRunning(int32_t ProcessId);
		void VictoryIntPlusEquals(int32_t* Int, int32_t Add, int32_t* IntOut);
		void VictoryIntMinusEquals(int32_t* Int, int32_t Sub, int32_t* IntOut);
		struct FVictoryInputAxis VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent);
		struct FVictoryInput VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent);
		float VictoryGetSoundVolume(class USoundClass* SoundClassObject);
		struct FVector2D VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		struct FVector VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		class FString VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		struct FRotator VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		int32_t VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		float VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		struct FLinearColor VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		bool VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
		class FString VictoryGetApplicationName(int32_t ProcessId);
		void VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings);
		void VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings);
		void VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings);
		void VictoryFloatPlusEquals(float* Float, float Add, float* FloatOut);
		void VictoryFloatMinusEquals(float* Float, float Sub, float* FloatOut);
		void VictoryCreateProc(int32_t* ProcessId, const class FString& FullPathOfProgramToRun, TArray<class FString> CommandlineArgs, bool Detach, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory);
		void VictoryAppendInline(class FString* String, const class FString& ToAppend, class FString* Result, bool AppendNewline);
		class FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
		void Victory_SaveStringToOSClipboard(const class FString& ToClipboard);
		bool Victory_SavePixels(const class FString& FullFilePath, int32_t Width, int32_t Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool sRGB, class FString* ErrorString);
		class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32_t* Width, int32_t* Height, TArray<struct FLinearColor>* OutPixels);
		class UTexture2D* Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32_t* Width, int32_t* Height);
		void Victory_GetStringFromOSClipboard(class FString* FromClipboard);
		bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32_t* TextureWidth, int32_t* TextureHeight, TArray<struct FLinearColor>* PixelArray);
		bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32_t X, int32_t Y, struct FLinearColor* PixelColor);
		class FString Victory_GetGRHIAdapterName();
		void Victory_GetGPUInfo(class FString* DeviceDescription, class FString* Provider, class FString* DriverVersion, class FString* DriverDate);
		class FString Victory_GetGPUBrand();
		bool Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int32_t ImageHeight, int32_t X, int32_t Y, struct FLinearColor* FoundColor);
		EPathFollowingRequestResult Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FVector& Dest, class UNavigationQueryFilter* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe);
		float VerticalFOV(float HorizontalFOV, float AspectRatio);
		struct FVector2D Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
		struct FVector2D Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
		void UTCToLocal(const struct PCoreUObject_FDateTime& UTCTime, struct PCoreUObject_FDateTime* LocalTime);
		void UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance);
		struct FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FVector& InVector);
		struct FVector TransformVectorToActorSpace(class AActor* Actor, const struct FVector& InVector);
		class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid);
		class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid);
		bool TraceData__GetTraceDataFromSkeletalMeshSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class USkeletalMeshComponent* Mesh, const struct FRotator& TraceRotation, float TraceLength, const class FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness);
		bool TraceData__GetTraceDataFromCharacterSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class AActor* TheCharacter, const struct FRotator& TraceRotation, float TraceLength, const class FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness);
		int32_t Text_ToInt(const class FText& Text, bool UseDotForThousands);
		float Text_ToFloat(const class FText& Text, bool UseDotForThousands);
		bool Text_IsNumeric(const class FText& Text);
		bool StringIsEmpty(const class FString& Target);
		void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, class FString* TheString, int32_t Precision, bool IncludeLeadingZero);
		void String__ExplodeString(TArray<class FString>* OutputStrings, const class FString& InputString, const class FString& Separator, int32_t Limit, bool bTrimElements);
		class FString String__CombineStrings_Multi(const class FString& A, const class FString& B);
		class FString String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel);
		class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, class AActor* ActorClass, const class FName& Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding);
		void SetGenericTeamId(class AActor* Target, uint8_t NewTeamId);
		void SetComponentTickRate(class UActorComponent* Component, float Seconds);
		void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);
		void ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers);
		void Selection_SelectionBox(class UObject* WorldContextObject, TArray<class AActor*>* SelectedActors, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, class AActor* ClassFilter);
		void seedRandWithTime();
		void seedRandWithEntropy();
		void seedRand(int32_t Seed);
		bool ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution);
		void SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames);
		void Rendering__UnFreezeGameRendering();
		void Rendering__FreezeGameRendering();
		void RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo);
		void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UUserWidget* WidgetClass);
		void RealWorldTime__GetTimePassedSincePreviousTime(const class FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours);
		void RealWorldTime__GetDifferenceBetweenTimes(const class FString& PreviousTime1, const class FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours);
		class FString RealWorldTime__GetCurrentOSTime(int32_t* MilliSeconds, int32_t* Seconds, int32_t* Minutes, int32_t* Hours12, int32_t* Hours24, int32_t* Day, int32_t* Month, int32_t* Year);
		int32_t RandInt_uniDis_MT();
		int32_t RandInt_uniDis();
		int32_t RandInt_MINMAX_uniDis_MT(int32_t iMin, int32_t iMax);
		int32_t RandInt_MINMAX_uniDis(int32_t iMin, int32_t iMax);
		float RandFloat_uniDis_MT();
		float RandFloat_uniDis();
		float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);
		float RandFloat_MINMAX_uniDis(float iMin, float iMax);
		bool RandBool_Bernoulli_MT(float fBias);
		bool RandBool_Bernoulli(float fBias);
		struct FVector2D ProjectWorldToScreenPosition(const struct FVector& WorldLocation);
		void PointDistanceToPlane(const struct FPlane& Plane, const struct FVector& Point, float* Distance);
		bool PlayerState_GetPlayerID(class APlayerController* ThePC, int32_t* PlayerId);
		bool PlayerController_GetControllerID(class APlayerController* ThePC, int32_t* ControllerId);
		bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed);
		bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FVector& InitLocation, const struct FRotator& InitRotation);
		bool Physics__IsRagDoll(class AActor* TheCharacter);
		bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation);
		bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation);
		bool Physics__EnterRagDoll(class AActor* TheCharacter);
		bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32_t>* Widths, TArray<int32_t>* Heights, TArray<int32_t>* RefreshRates, bool IncludeRefreshRates);
		void OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XboxOne, bool* HTML5, bool* APPLE);
		void Open_URL_In_Web_Browser(const class FString& TheURL);
		bool NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
		bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, EComponentMobility NewMobility);
		void MinOfIntArray(TArray<int32_t> IntArray, int32_t* IndexOfMinValue, int32_t* MinValue);
		void MinOfFloatArray(TArray<float> FloatArray, int32_t* IndexOfMinValue, float* MinValue);
		void MaxOfIntArray(TArray<int32_t> IntArray, int32_t* IndexOfMaxValue, int32_t* MaxValue);
		void MaxOfFloatArray(TArray<float> FloatArray, int32_t* IndexOfMaxValue, float* MaxValue);
		float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
		void Loops_ResetBPRunawayCounter();
		class UTexture2D* LoadTexture2D_FromFileByExtension(const class FString& ImagePath, bool* IsValid, int32_t* OutWidth, int32_t* OutHeight);
		class UTexture2D* LoadTexture2D_FromDDSFile(const class FString& FullFilePath);
		bool LoadStringFromFile(class FString* Result, const class FString& FullFilePath);
		bool LoadStringArrayFromFile(TArray<class FString>* StringArray, int32_t* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines);
		class UObject* LoadObjectFromAssetPath(class UObject* ObjectClass, const class FName& Path, bool* IsValid);
		bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset);
		void JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match);
		void JoyGraphicsSettings__FullScreen_Set(EJoyGraphicsFullScreen NewSetting);
		EJoyGraphicsFullScreen JoyGraphicsSettings__FullScreen_Get();
		bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
		bool JoyFileIO_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
		bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UUserWidget* WidgetClass);
		bool IsStandAlone(class UObject* WorldContextObject);
		bool IsPointOnPlane(const struct FPlane& Plane, const struct FVector& Point, float Tolerance);
		bool IsAlphaNumeric(const class FString& String);
		class UPanelSlot* InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content);
		float HorizontalFOV(float VerticalFOV, float AspectRatio);
		void HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance);
		bool HasSubstring(const class FString& SearchIn, const class FString& SubString, ESearchCase SearchCase, ESearchDir SearchDir);
		void GraphicsSettings__SetFrameRateToBeUnbound();
		void GraphicsSettings__SetFrameRateCap(float NewValue);
		class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, const class FName& Name);
		bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult);
		bool GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition);
		struct FVector GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation);
		void GetUTCFromUnixTimeStamp(int32_t UnixTimeStamp, struct PCoreUObject_FDateTime* UTCTime);
		void GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int32_t* UnknownId);
		int32_t GetUnixTimeStamp(const struct PCoreUObject_FDateTime& UTCTime);
		float GetTimeAlive(class AActor* Target);
		bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions);
		struct FRotator GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation);
		int32_t GetPlayerUniqueNetID();
		class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, const class FString& PlayerStartName);
		class FName GetObjectPath(class UObject* Obj);
		void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels);
		struct FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance);
		class FName GetHeadMountedDisplayDeviceType();
		uint8_t GetGenericTeamId(class AActor* Target);
		class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, class UUserWidget* WidgetClass, bool TopLevelOnly);
		float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FVector& Point, struct FVector* ClosestPointOnCollision);
		float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2);
		float GetCreationTime(class AActor* Target);
		struct FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
		struct FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
		class FString GetCommandLine();
		class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class AActor* ActorClass, const struct FVector& Center, float Radius, bool* IsValid);
		class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class AActor* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid);
		void GetBoxContainingWorldPoints(TArray<struct FVector> Points, struct FVector* Center, struct FVector* Extent);
		int32_t GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const class FName& StartingBoneName, TArray<class FName>* BoneNames);
		struct FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);
		struct FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);
		void FlushPressedKeys(class APlayerController* PlayerController);
		void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32_t MaxFlashCount, int32_t FlashFrequencyMilliseconds);
		bool FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting);
		bool FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, TArray<class FString> SaveText, bool AllowOverWriting);
		bool EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
		void DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32_t NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines);
		void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FVector& Endpoint, const class FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
		void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FVector& Endpoint, const class FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
		void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration);
		bool DoesMaterialHaveParameter(class UMaterialInterface* Mat, const class FName& Parameter);
		float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FVector& TestPoint, struct FVector* ClosestSurfacePoint);
		bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations);
		class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32_t Width, int32_t Height, const struct FLinearColor& ClearColor, float Gamma);
		class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, class UPrimitiveComponent* CompClass, const class FName& Name, const struct FVector& Location, const struct FRotator& Rotation);
		struct FPlane CreatePlane(const struct FVector& Center, const struct FVector& Normal);
		class UObject* CreateObject(class UObject* WorldContextObject, class UObject* TheObjectClass);
		bool CreateMD5Hash(const class FString& FileToHash, const class FString& FileToStoreHashTo);
		int32_t CountOccurrancesOfSubString(const class FString& Source, const class FString& SubString, ESearchCase SearchCase);
		struct FRotator Conversions__VectorToRotator(const struct FVector& TheVector);
		void Conversions__StringToVector(const class FString& String, struct FVector* ConvertedVector, bool* IsValid);
		void Conversions__StringToRotator(const class FString& String, struct FRotator* ConvertedRotator, bool* IsValid);
		void Conversions__StringToColor(const class FString& String, struct FLinearColor* ConvertedColor, bool* IsValid);
		struct FVector Conversions__RotatorToVector(const struct FRotator& TheRotator);
		void Conversions__ColorToString(const struct FLinearColor& Color, class FString* ColorAsString);
		int32_t Conversion__FloatToRoundedInteger(float IN_Float);
		void constructRand();
		void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups);
		bool CompareMD5Hash(const class FString& MD5HashFile1, const class FString& MD5HashFile2);
		class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, bool* IsValid, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset);
		bool ClientWindow__GameWindowIsForeGroundInOS();
		bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);
		struct FRotator Character__GetControllerRotation(class AActor* TheCharacter);
		bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
		bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
		bool Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
		bool Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
		float Calcs__ClosestPointToSourcePoint(const struct FVector& Source, TArray<struct FVector> OtherPoints, struct FVector* ClosestPoint);
		void Array_Sort(TArray<int32_t> TargetArray, bool bAscendingOrder, const class FName& VariableName);
		bool Array_IsValidIndex(TArray<int32_t> TargetArray, int32_t Index);
		class FString AppendMultiple(const class FString& A, const class FString& B);
		bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw);
		bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw);
		void AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo);
		void AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot);
		void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups);
		bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);
		void Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray);
		class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid);
		class FString Accessor__GetNameAsString(class UObject* TheObject);
		class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid);
		static UClass* StaticClass();
	};

	/**
	 * Class VictoryBPLibrary.VictoryISM
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AVictoryISM : public AActor
	{
	public:
		class UInstancedStaticMeshComponent*                         Mesh;                                                    // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
