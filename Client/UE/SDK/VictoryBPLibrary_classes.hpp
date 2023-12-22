#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class VictoryBPLibrary.TKMathFunctionLibrary
class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTKMathFunctionLibrary* GetDefaultObj();

	struct FVector VectorRadiansToDegrees(const struct FVector& RadVector);
	struct FVector VectorDegreesToRadians(const struct FVector& DegVector);
	bool SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	float SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& PlanePoint, const struct FVector& Point);
	struct FVector SetVectorLength(const struct FVector& A, float Size);
	void SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, class FName BoneName);
	int32 RoundToUpperMultiple(int32 A, int32 Multiple, bool SkipSelf);
	int32 RoundToNearestMultiple(int32 A, int32 Multiple);
	int32 RoundToLowerMultiple(int32 A, int32 Multiple, bool SkipSelf);
	struct FVector ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point);
	int32 PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point);
	struct FVector2D NegateVector2D(const struct FVector2D& A);
	int32 NegateInt(int32 A);
	float NegateFloat(float A);
	bool LineToLineIntersection(struct FVector* IntersectionPoint, const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2);
	bool LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime);
	bool IsPowerOfTwo(int32 X);
	bool IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	bool IsMultipleOf(int32 A, int32 Multiple);
	bool IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius);
	bool IsEvenNumber(float A);
	struct FVector GridSnap(const struct FVector& A, float Grid);
	struct FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, class FName BoneName, bool DrawDebugInfo);
	int32 GetConsoleVariableInt(const class FString& VariableName);
	float GetConsoleVariableFloat(const class FString& VariableName);
	float ConvertPhysicsLinearVelocity(const struct FVector& Velocity, enum class ESpeedUnit SpeedUnit);
	void ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets);
	bool ClosestPointsOnTwoLines(struct FVector* ClosestPointLine1, struct FVector* ClosestPointLine2, const struct FVector& LinePoint1, const struct FVector& LineVec1, const struct FVector& LinePoint2, const struct FVector& LineVec2);
	void ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
	struct FVector ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir);
	struct FVector ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd);
	bool AreLineSegmentsCrossing(const struct FVector& PointA1, const struct FVector& PointA2, const struct FVector& PointB1, const struct FVector& PointB2);
};

// 0x0 (0x28 - 0x28)
// Class VictoryBPLibrary.VictoryBPFunctionLibrary
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVictoryBPFunctionLibrary* GetDefaultObj();

	bool WorldType__InPIEWorld(class UObject* WorldContextObject);
	bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
	bool WorldType__InEditorWorld(class UObject* WorldContextObject);
	bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
	class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
	void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
	void Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyRenderedActors, float MinRecentTime);
	void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyNotRenderedActors, float MinRecentTime);
	bool ViewportPositionDeproject(class UObject* WorldContextObject, struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
	bool Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);
	bool Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY);
	bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY);
	bool Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);
	bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
	void VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>* IntArrayRef);
	void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>* FloatArrayRef);
	void VictorySimulateMouseWheel(float& Delta);
	void VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, enum class EInputEvent EventType);
	void VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value);
	void VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value);
	void VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value);
	void VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value);
	void VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32 Value);
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
	class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, const class FString& MapFolderOffOfContent, const class FString& LevelName, int32 InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success);
	void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out);
	void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, TArray<class AVictoryISM*>* CreatedISMActors, bool DestroyOriginalActors, int32 MinCountToCreateISM);
	bool VictoryIsApplicationRunning(int32 ProcessId);
	void VictoryIntPlusEquals(int32& Int, int32 Add, int32* IntOut);
	void VictoryIntMinusEquals(int32& Int, int32 Sub, int32* IntOut);
	struct FVictoryInputAxis VictoryGetVictoryInputAxis(struct FKeyEvent& KeyEvent);
	struct FVictoryInput VictoryGetVictoryInput(struct FKeyEvent& KeyEvent);
	float VictoryGetSoundVolume(class USoundClass* SoundClassObject);
	struct FVector2D VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	struct FVector VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	class FString VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	struct FRotator VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	int32 VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	float VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	struct FLinearColor VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	bool VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	class FString VictoryGetApplicationName(int32 ProcessId);
	void VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings);
	void VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings);
	void VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings);
	void VictoryFloatPlusEquals(float& Float, float Add, float* FloatOut);
	void VictoryFloatMinusEquals(float& Float, float Sub, float* FloatOut);
	void VictoryCreateProc(int32* ProcessId, const class FString& FullPathOfProgramToRun, const TArray<class FString>& CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const class FString& OptionalWorkingDirectory);
	void VictoryAppendInline(class FString& String, const class FString& ToAppend, class FString* Result, bool AppendNewline);
	class FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
	void Victory_SaveStringToOSClipboard(const class FString& ToClipboard);
	bool Victory_SavePixels(const class FString& FullFilePath, int32 Width, int32 Height, TArray<struct FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, class FString* ErrorString);
	class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height, TArray<struct FLinearColor>* OutPixels);
	class UTexture2D* Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height);
	void Victory_GetStringFromOSClipboard(class FString* FromClipboard);
	bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32* TextureWidth, int32* TextureHeight, TArray<struct FLinearColor>* PixelArray);
	bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32 X, int32 Y, struct FLinearColor* PixelColor);
	class FString Victory_GetGRHIAdapterName();
	void Victory_GetGPUInfo(class FString* DeviceDescription, class FString* Provider, class FString* DriverVersion, class FString* DriverDate);
	class FString Victory_GetGPUBrand();
	bool Victory_Get_Pixel(TArray<struct FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, struct FLinearColor* FoundColor);
	enum class EPathFollowingRequestResult Victory_AI_MoveToWithFilter(class APawn* Pawn, struct FVector& Dest, TSubclassOf<class UNavigationQueryFilter> FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe);
	float VerticalFOV(float HorizontalFOV, float AspectRatio);
	struct FVector2D Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	void UTCToLocal(struct FDateTime& UTCTime, struct FDateTime* LocalTime);
	void UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance);
	struct FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, struct FVector& InVector);
	struct FVector TransformVectorToActorSpace(class AActor* Actor, struct FVector& InVector);
	class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, struct FVector& TraceStart, struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid);
	class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, struct FVector& TraceStart, struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, class FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid);
	bool TraceData__GetTraceDataFromSkeletalMeshSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class USkeletalMeshComponent* Mesh, struct FRotator& TraceRotation, float TraceLength, class FName Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness);
	bool TraceData__GetTraceDataFromCharacterSocket(struct FVector* TraceStart, struct FVector* TraceEnd, class AActor* TheCharacter, struct FRotator& TraceRotation, float TraceLength, class FName Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness);
	int32 Text_ToInt(class FText& Text, bool UseDotForThousands);
	float Text_ToFloat(class FText& Text, bool UseDotForThousands);
	bool Text_IsNumeric(class FText& Text);
	bool StringIsEmpty(const class FString& Target);
	void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, class FString* TheString, int32 Precision, bool IncludeLeadingZero);
	void String__ExplodeString(TArray<class FString>* OutputStrings, const class FString& InputString, const class FString& Separator, int32 Limit, bool bTrimElements);
	class FString String__CombineStrings_Multi(const class FString& A, const class FString& B);
	class FString String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel);
	class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class FName Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding);
	void SetGenericTeamId(class AActor* Target, uint8 NewTeamId);
	void SetComponentTickRate(class UActorComponent* Component, float Seconds);
	void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);
	void ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers);
	void Selection_SelectionBox(class UObject* WorldContextObject, TArray<class AActor*>* SelectedActors, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, TSubclassOf<class AActor> ClassFilter);
	void SeedRandWithTime();
	void SeedRandWithEntropy();
	void SeedRand(int32 Seed);
	bool ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution);
	void SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames);
	void Rendering__UnFreezeGameRendering();
	void Rendering__FreezeGameRendering();
	void RemoveFromStreamingLevels(class UObject* WorldContextObject, struct FLevelStreamInstanceInfo& LevelInstanceInfo);
	void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
	void RealWorldTime__GetTimePassedSincePreviousTime(const class FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours);
	void RealWorldTime__GetDifferenceBetweenTimes(const class FString& PreviousTime1, const class FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours);
	class FString RealWorldTime__GetCurrentOSTime(int32* MilliSeconds, int32* Seconds, int32* Minutes, int32* Hours12, int32* Hours24, int32* Day, int32* Month, int32* Year);
	int32 RandInt_uniDis_MT();
	int32 RandInt_uniDis();
	int32 RandInt_MINMAX_uniDis_MT(int32 IMin, int32 IMax);
	int32 RandInt_MINMAX_uniDis(int32 IMin, int32 IMax);
	float RandFloat_uniDis_MT();
	float RandFloat_uniDis();
	float RandFloat_MINMAX_uniDis_MT(float IMin, float IMax);
	float RandFloat_MINMAX_uniDis(float IMin, float IMax);
	bool RandBool_Bernoulli_MT(float FBias);
	bool RandBool_Bernoulli(float FBias);
	struct FVector2D ProjectWorldToScreenPosition(struct FVector& WorldLocation);
	void PointDistanceToPlane(struct FPlane& Plane, const struct FVector& Point, float* Distance);
	bool PlayerState_GetPlayerID(class APlayerController* ThePC, int32* PlayerId);
	bool PlayerController_GetControllerID(class APlayerController* ThePC, int32* ControllerId);
	bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed);
	bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, struct FVector& InitLocation, struct FRotator& InitRotation);
	bool Physics__IsRagDoll(class AActor* TheCharacter);
	bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation);
	bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation);
	bool Physics__EnterRagDoll(class AActor* TheCharacter);
	bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32>* Widths, TArray<int32>* Heights, TArray<int32>* RefreshRates, bool IncludeRefreshRates);
	void OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XboxOne, bool* HTML5, bool* APPLE);
	void Open_URL_In_Web_Browser(const class FString& TheURL);
	bool NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, enum class EComponentMobility NewMobility);
	void MinOfIntArray(TArray<int32>& IntArray, int32* IndexOfMinValue, int32* MinValue);
	void MinOfFloatArray(TArray<float>& FloatArray, int32* IndexOfMinValue, float* MinValue);
	void MaxOfIntArray(TArray<int32>& IntArray, int32* IndexOfMaxValue, int32* MaxValue);
	void MaxOfFloatArray(TArray<float>& FloatArray, int32* IndexOfMaxValue, float* MaxValue);
	float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	void Loops_ResetBPRunawayCounter();
	class UTexture2D* LoadTexture2D_FromFileByExtension(const class FString& ImagePath, bool* IsValid, int32* OutWidth, int32* OutHeight);
	class UTexture2D* LoadTexture2D_FromDDSFile(const class FString& FullFilePath);
	bool LoadStringFromFile(class FString* Result, const class FString& FullFilePath);
	bool LoadStringArrayFromFile(TArray<class FString>* StringArray, int32* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines);
	class UObject* LoadObjectFromAssetPath(TSubclassOf<class UObject> ObjectClass, class FName Path, bool* IsValid);
	bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset);
	void JoyIsKey(struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match);
	void JoyGraphicsSettings__FullScreen_Set(enum class EJoyGraphicsFullScreen NewSetting);
	enum class EJoyGraphicsFullScreen JoyGraphicsSettings__FullScreen_Get();
	bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
	bool JoyFileIO_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
	bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
	bool IsStandAlone(class UObject* WorldContextObject);
	bool IsPointOnPlane(struct FPlane& Plane, const struct FVector& Point, float Tolerance);
	bool IsAlphaNumeric(const class FString& String);
	class UPanelSlot* InsertChildAt(class UWidget* Parent, int32 Index, class UWidget* Content);
	float HorizontalFOV(float VerticalFOV, float AspectRatio);
	void HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance);
	bool HasSubstring(const class FString& SearchIn, const class FString& SubString, enum class ESearchCase SearchCase, enum class ESearchDir SearchDir);
	void GraphicsSettings__SetFrameRateToBeUnbound();
	void GraphicsSettings__SetFrameRateCap(float NewValue);
	class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, class FName& Name);
	bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, struct FVector2D& ViewportPosition, enum class ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult);
	bool GetViewportPosition(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition);
	struct FVector GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation);
	void GetUTCFromUnixTimeStamp(int32 UnixTimeStamp, struct FDateTime* UTCTime);
	void GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int32* UnknownId);
	int32 GetUnixTimeStamp(struct FDateTime& UTCTime);
	float GetTimeAlive(class AActor* Target);
	bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions);
	struct FRotator GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation);
	int32 GetPlayerUniqueNetID();
	class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, const class FString& PlayerStartName);
	class FName GetObjectPath(class UObject* Obj);
	void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels);
	struct FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance);
	class FName GetHeadMountedDisplayDeviceType();
	uint8 GetGenericTeamId(class AActor* Target);
	class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
	float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, struct FVector& Point, struct FVector* ClosestPointOnCollision);
	float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2);
	float GetCreationTime(class AActor* Target);
	struct FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
	struct FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
	class FString GetCommandLine();
	class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FVector& Center, float Radius, bool* IsValid);
	class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid);
	void GetBoxContainingWorldPoints(TArray<struct FVector>& Points, struct FVector* Center, struct FVector* Extent);
	int32 GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, class FName StartingBoneName, TArray<class FName>* BoneNames);
	struct FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);
	struct FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);
	void FlushPressedKeys(class APlayerController* PlayerController);
	void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds);
	bool FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting);
	bool FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const TArray<class FString>& SaveText, bool AllowOverWriting);
	bool EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	void DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32 NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines);
	void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, struct FVector& Endpoint, class FName Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
	void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, struct FVector& Endpoint, class FName Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
	void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration);
	bool DoesMaterialHaveParameter(class UMaterialInterface* Mat, class FName Parameter);
	float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, struct FVector& TestPoint, struct FVector* ClosestSurfacePoint);
	bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations);
	class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32 Width, int32 Height, const struct FLinearColor& ClearColor, float Gamma);
	class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, TSubclassOf<class UPrimitiveComponent> CompClass, class FName Name, const struct FVector& Location, const struct FRotator& Rotation);
	struct FPlane CreatePlane(const struct FVector& Center, const struct FVector& Normal);
	class UObject* CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass);
	bool CreateMD5Hash(const class FString& FileToHash, const class FString& FileToStoreHashTo);
	int32 CountOccurrancesOfSubString(const class FString& Source, const class FString& SubString, enum class ESearchCase SearchCase);
	struct FRotator Conversions__VectorToRotator(struct FVector& TheVector);
	void Conversions__StringToVector(const class FString& String, struct FVector* ConvertedVector, bool* IsValid);
	void Conversions__StringToRotator(const class FString& String, struct FRotator* ConvertedRotator, bool* IsValid);
	void Conversions__StringToColor(const class FString& String, struct FLinearColor* ConvertedColor, bool* IsValid);
	struct FVector Conversions__RotatorToVector(struct FRotator& TheRotator);
	void Conversions__ColorToString(struct FLinearColor& Color, class FString* ColorAsString);
	int32 Conversion__FloatToRoundedInteger(float IN_Float);
	void ConstructRand();
	void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
	bool CompareMD5Hash(const class FString& MD5HashFile1, const class FString& MD5HashFile2);
	class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, bool* IsValid, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset);
	bool ClientWindow__GameWindowIsForeGroundInOS();
	bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);
	struct FRotator Character__GetControllerRotation(class AActor* TheCharacter);
	bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
	bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	bool Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
	bool Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	float Calcs__ClosestPointToSourcePoint(struct FVector& Source, TArray<struct FVector>& OtherPoints, struct FVector* ClosestPoint);
	void Array_Sort(TArray<int32>& TargetArray, bool bAscendingOrder, class FName VariableName);
	bool Array_IsValidIndex(TArray<int32>& TargetArray, int32 Index);
	class FString AppendMultiple(const class FString& A, const class FString& B);
	bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, struct FRotator& TheRotation, float* Pitch, float* Yaw);
	bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw);
	void AddToStreamingLevels(class UObject* WorldContextObject, struct FLevelStreamInstanceInfo& LevelInstanceInfo);
	void AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot);
	void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
	bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);
	void Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray);
	class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid);
	class FString Accessor__GetNameAsString(class UObject* TheObject);
	class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid);
};

// 0x0 (0x28 - 0x28)
// Class VictoryBPLibrary.VictoryBPHTML
class UVictoryBPHTML : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVictoryBPHTML* GetDefaultObj();

	void VictoryHTML5_SetCursorVisible(bool MakeVisible);
	bool IsHTML();
};

// 0x8 (0x228 - 0x220)
// Class VictoryBPLibrary.VictoryISM
class AVictoryISM : public AActor
{
public:
	class UInstancedStaticMeshComponent*         Mesh;                                              // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AVictoryISM* GetDefaultObj();

};

}


