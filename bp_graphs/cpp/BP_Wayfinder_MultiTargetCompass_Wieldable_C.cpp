// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::CalculateDesiredYaw (38 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::CalculateDesiredYaw()
{
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::UserConstructionScript (3 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::AddTargetImpl (3 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::AddTargetImpl()
{
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::GetTargetLocation (1345 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::GetTargetLocation()
{
    float CallFunc_GetFloatMax_ReturnValue = APrototypeMultiTargetEnchantedCompass::GetFloatMax();
    auto Distance = CallFunc_GetFloatMax_ReturnValue;
    TArray<FVector> CallFunc_BP_GetTargetLocations_ReturnValue = APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_BP_GetTargetLocations_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_44B;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_BP_GetTargetLocations_ReturnValue = APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations();
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(WielderLocation, CallFunc_MakeVector_ReturnValue);
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    CallFunc_BP_GetTargetLocations_ReturnValue = APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations();
    CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    CallFunc_Distance_ReturnValue = UVectorMaths::Distance(WielderLocation, CallFunc_MakeVector_ReturnValue);
    Distance = CallFunc_Distance_ReturnValue;
    CallFunc_BP_GetTargetLocations_ReturnValue = APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations();
    CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    auto Location = CallFunc_MakeVector_ReturnValue;
L_44B:
    auto TargetLocation = Location;
    auto CallFunc_Subtract_VectorVector_ReturnValue = Location;
    auto CallFunc_GetYawFromVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
    auto TargetYaw = CallFunc_GetYawFromVector_ReturnValue;
    auto TargetDistance = Distance;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::UserConstructionScript (3 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::ReceiveTick (40 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::ReceiveTick()
{
    ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable();
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::ReceiveBeginPlay (22 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable();
    return;
}

// Recovered Kismet: BP_Wayfinder_MultiTargetCompass_Wieldable_C::ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable (3284 bytes)
void BP_Wayfinder_MultiTargetCompass_Wieldable_C::ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable()
{
L_F:
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto CallFunc_Add_FloatFloat_ReturnValue = Temp_float_Variable;
    auto OutputYaw = CallFunc_Add_FloatFloat_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(WobbleCurves);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_F;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Subtract_FloatFloat_ReturnValue5 = MaxTrackingDistance;
    auto CallFunc_Subtract_FloatFloat_ReturnValue7 = TargetDistance;
    auto CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue7;
    float CallFunc_GetFloatValue_ReturnValue2 = CallFunc_Array_Get_Item->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue2);
    auto CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_GetFloatValue_ReturnValue2;
    auto CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Array_Get_Item2;
    float CallFunc_AngleMod360_ReturnValue = UAngleMaths::AngleMod360(CallFunc_Add_FloatFloat_ReturnValue2);
    CallFunc_Subtract_FloatFloat_ReturnValue5 = MaxTrackingDistance;
    CallFunc_Subtract_FloatFloat_ReturnValue7 = TargetDistance;
    CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue7;
    CallFunc_GetFloatValue_ReturnValue2 = CallFunc_Array_Get_Item->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue2);
    float CallFunc_GetFloatValue_ReturnValue3 = CallFunc_Array_Get_Item->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue2);
    CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_GetFloatValue_ReturnValue2;
    CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Array_Get_Item2;
    CallFunc_AngleMod360_ReturnValue = UAngleMaths::AngleMod360(CallFunc_Add_FloatFloat_ReturnValue2);
    auto CallFunc_DegSin_ReturnValue = CallFunc_AngleMod360_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_DegSin_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue6;
    auto Temp_float_Variable = CallFunc_Add_FloatFloat_ReturnValue5;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    FRotator CallFunc_K2_GetComponentRotation_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->K2_GetComponentRotation();
    auto CallFunc_GetForwardVector_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
    auto CallFunc_GetYawFromVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = TargetYaw;
    auto CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue2;
    float CallFunc_AngleMod180_ReturnValue = UAngleMaths::AngleMod180(CallFunc_Subtract_FloatFloat_ReturnValue3);
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_AngleMod180_ReturnValue;
    auto YawAcceleration = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = TargetDistance;
    auto CallFunc_Subtract_FloatFloat_ReturnValue4 = MinTrackingDistance;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    if (!CallFunc_GreaterEqual_FloatFloat_ReturnValue) goto L_AA1;
    auto CallFunc_Multiply_FloatFloat_ReturnValue5 = K2Node_Event_DeltaSeconds;
    auto CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue5;
    auto BaseYaw = CallFunc_Add_FloatFloat_ReturnValue4;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = YawDamping;
    auto CallFunc_Subtract_FloatFloat_ReturnValue8 = YawAcceleration;
    auto CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Subtract_FloatFloat_ReturnValue8;
    auto CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue4;
    auto YawVelocity = CallFunc_Add_FloatFloat_ReturnValue3;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(WobbleCurves);
L_AA1:
    CallFunc_Subtract_FloatFloat_ReturnValue = TargetDistance;
    CallFunc_Subtract_FloatFloat_ReturnValue4 = MinTrackingDistance;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    float CallFunc_GetFloatValue_ReturnValue = SpinCurve->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue);
    auto CallFunc_Subtract_FloatFloat_ReturnValue6 = CallFunc_GetFloatValue_ReturnValue;
    YawAcceleration = CallFunc_Subtract_FloatFloat_ReturnValue6;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
L_BE2:
    AActor* CallFunc_GetWielder_ReturnValue2 = GetWielder();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_GetWielder_ReturnValue2->K2_GetActorLocation();
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    GetTargetLocation(CallFunc_MakeVector_ReturnValue);
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_BE2;
    return;
}
