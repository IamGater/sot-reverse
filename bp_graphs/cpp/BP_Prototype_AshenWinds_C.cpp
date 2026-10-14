// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285675 (355 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285675()
{
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_160;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_CE;
L_CE:
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character;
    if (!CallFunc_EqualEqual_ObjectObject_ReturnValue) goto L_160;
L_160:
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285649 (458 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285649()
{
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1C7;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_102;
    auto idx_285670 = idx_285670;
    idx_285670 = idx_285670;
L_102:
    ACharacter* CallFunc_GetPlayerCharacter_ReturnValue = UGameplayStatics::GetPlayerCharacter();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character;
    if (!CallFunc_EqualEqual_ObjectObject_ReturnValue) goto L_1C7;
L_1C7:
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285672 (17 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285672()
{
    idx:285680();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285684 (477 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285684()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_1DA;
    auto CallFunc_GetForwardVector_ReturnValue = CallFunc_BreakTransform_Rotation;
    auto CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_BreakTransform_Location;
L_1DA:
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285657 (355 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285657()
{
    if (!idx_285667) goto L_148;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = idx_285656;
    FString CallFunc_Conv_FloatToString_ReturnValue = UKismetStringLibrary::Conv_FloatToString(CallFunc_Subtract_FloatFloat_ReturnValue);
    CallFunc_Subtract_FloatFloat_ReturnValue = idx_285656;
    auto idx_285656 = CallFunc_Subtract_FloatFloat_ReturnValue;
    idx:285680();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_14D;
L_148:
L_14D:
    idx:285682();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285681 (564 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285681()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_285677);
    if (!CallFunc_IsValid_ReturnValue) goto L_231;
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->K2_GetActorLocation();
    FRotator idx_285654 = K2Node_DynamicCast_AsAthena_Player_Character->GetBaseAimRotation();
    auto CallFunc_ComposeRotators_ReturnValue = idx_285661;
    auto CallFunc_GreaterGreater_VectorRotator_ReturnValue = idx_285676;
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    bool CallFunc_K2_SetActorTransform_ReturnValue = idx_285677->K2_SetActorTransform(CallFunc_MakeTransform_ReturnValue, false, CallFunc_K2_SetActorTransform_SweepHitResult, false);
L_231:
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285684 (477 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285684()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_1DA;
    auto CallFunc_GetForwardVector_ReturnValue = CallFunc_BreakTransform_Rotation;
    auto CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_BreakTransform_Location;
L_1DA:
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285683 (351 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285683()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_BF;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = FirstPersonMesh->K2_GetComponentLocation();
L_BF:
    CallFunc_K2_GetComponentLocation_ReturnValue = FirstPersonMesh->K2_GetComponentLocation();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285682 (271 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285682()
{
    float idx_285655 = UFloatMaths::Map(idx_285656, true);
    idx_285655 = UFloatMaths::Map(idx_285656, true);
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285658 (138 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285658()
{
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = FirstPersonMesh->CreateDynamicMaterialInstance();
    auto SkullDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    idx:285682();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285680 (428 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285680()
{
    auto CallFunc_Greater_FloatFloat_ReturnValue = idx_285656;
    auto CallFunc_BooleanAND_ReturnValue = idx_285673;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_69;
    if (!idx_285667) goto L_110;
L_69:
    if (!idx_285667) goto L_1A9;
    idx_285653* idx_285668 = Cast<idx_285653*>(idx_285677);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_285668);
    idx:285675();
    bool idx_285667 = false;
L_110:
    idx_285668 = Cast<idx_285653*>(idx_285677);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_285668);
    idx:285649();
    idx_285667 = true;
L_1A9:
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::UserConstructionScript (3 bytes)
void BP_Prototype_AshenWinds_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::ReceiveBeginPlay (22 bytes)
void BP_Prototype_AshenWinds_C::ReceiveBeginPlay()
{
    idx:285660();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285671 (40 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285671()
{
    idx:285660();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::ReceiveTick (40 bytes)
void BP_Prototype_AshenWinds_C::ReceiveTick()
{
    idx:285660();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285674 (40 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285674()
{
    idx:285660();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::ReceiveEndPlay (40 bytes)
void BP_Prototype_AshenWinds_C::ReceiveEndPlay()
{
    idx:285660();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWinds_C::fn_idx_285660 (998 bytes)
void BP_Prototype_AshenWinds_C::fn_idx_285660()
{
    idx:285672();
    idx:285680();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool idx_285673 = true;
    idx:285672();
    idx_285653* idx_285668 = Cast<idx_285653*>(idx_285677);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_285668);
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    idx_285673 = false;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_180;
L_180:
    idx:285658();
    this->ReceiveBeginPlay();
    idx_285653* idx_285669 = Cast<idx_285653*>(idx_285677);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_285669);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = K2Node_CustomEvent_NewParam2;
    auto CallFunc_Greater_FloatFloat_ReturnValue = idx_285656;
    this->ReceiveTick(K2Node_Event_DeltaSeconds);
    idx:285681();
    idx:285657(K2Node_Event_DeltaSeconds);
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = K2Node_CustomEvent_NewParam;
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
    return;
}
