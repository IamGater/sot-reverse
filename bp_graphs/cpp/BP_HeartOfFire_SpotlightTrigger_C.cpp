// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::SetTriggerExtents (811 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::SetTriggerExtents()
{
    BoxComponent* idx_278863 = Cast<BoxComponent*>(CollisionComponent);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_278863);
    if (!K2Node_DynamicCast_bSuccess) goto L_7E;
L_7E:
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(CollisionComponent);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    FText idx_278858 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::UserConstructionScript (13 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::PlayerEntered (22 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::PlayerEntered()
{
    ExecuteUbergraph_BP_HeartOfFire_SpotlightTrigger();
    return;
}

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::PlayerExited (22 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::PlayerExited()
{
    ExecuteUbergraph_BP_HeartOfFire_SpotlightTrigger();
    return;
}

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_257_ComponentBeginOverlapSignature__DelegateSignature (112 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_257_ComponentBeginOverlapSignature__DelegateSignature()
{
    ExecuteUbergraph_BP_HeartOfFire_SpotlightTrigger();
    return;
}

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_260_ComponentEndOverlapSignature__DelegateSignature (76 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_260_ComponentEndOverlapSignature__DelegateSignature()
{
    ExecuteUbergraph_BP_HeartOfFire_SpotlightTrigger();
    return;
}

// Recovered Kismet: BP_HeartOfFire_SpotlightTrigger_C::ExecuteUbergraph_BP_HeartOfFire_SpotlightTrigger (1724 bytes)
void BP_HeartOfFire_SpotlightTrigger_C::ExecuteUbergraph_BP_HeartOfFire_SpotlightTrigger()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(Light);
    if (!CallFunc_IsValid_ReturnValue2) goto L_6B9;
L_9B:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Light);
    if (!CallFunc_IsValid_ReturnValue) goto L_E1;
L_E1:
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(idx_278852, idx_278867);
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, idx_278867);
    auto Light = CallFunc_FinishSpawningActor_ReturnValue;
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_9B;
    PlayerEntered();
    PlayerExited();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(K2Node_ComponentBoundEvent_OtherActor2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_284;
    APawn* CallFunc_GetPlayerPawn_ReturnValue = UGameplayStatics::GetPlayerPawn();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue2 = K2Node_DynamicCast_AsAthena_Player_Character2;
    if (!CallFunc_EqualEqual_ObjectObject_ReturnValue2) goto L_6B9;
L_284:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(K2Node_ComponentBoundEvent_OtherActor2);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(K2Node_ComponentBoundEvent_OtherActor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_4FD;
    APawn* idx_278860 = UGameplayStatics::GetPlayerPawn();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character;
    if (!CallFunc_EqualEqual_ObjectObject_ReturnValue) goto L_6B9;
L_4FD:
    FString idx_278859 = UKismetSystemLibrary::GetDisplayName(K2Node_ComponentBoundEvent_OtherActor);
    FText idx_278858 = UKismetTextLibrary::Conv_StringToText(idx_278859);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    FText CallFunc_Format_ReturnValue2 = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array2);
L_6B9:
    return;
}
