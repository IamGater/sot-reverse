// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DecalGlowWithWind_C::ApplyDisturbanceAtCurrentTime (983 bytes)
void BP_DecalGlowWithWind_C::ApplyDisturbanceAtCurrentTime()
{
    auto CallFunc_Add_FloatFloat_ReturnValue = DeltaTime;
    auto CurrentTime = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = CurrentTime;
    if (!CallFunc_GreaterEqual_FloatFloat_ReturnValue) goto L_3D4;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CurrentTime;
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_2CD;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = Radius;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    CallFunc_Divide_FloatFloat_ReturnValue = CurrentTime;
    float CallFunc_GetFloatValue_ReturnValue = WindScaleCurve->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue);
L_2CD:
    AActor::SetActorTickEnabled(false);
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
L_3D4:
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::StartGlowEffect (582 bytes)
void BP_DecalGlowWithWind_C::StartGlowEffect()
{
    CollectDecalMaterials();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DecalMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::StartReaction (70 bytes)
void BP_DecalGlowWithWind_C::StartReaction()
{
    StartGlowEffect();
    AActor::SetActorTickEnabled(true);
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::StopReaction (61 bytes)
void BP_DecalGlowWithWind_C::StopReaction()
{
    AActor::SetActorTickEnabled(false);
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::CollectDecalMaterials (535 bytes)
void BP_DecalGlowWithWind_C::CollectDecalMaterials()
{
    if (!CollectedMaterials) goto L_14;
L_14:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DecalActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1BE;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_Array_Get_Item->CreateDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DecalMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
L_1BE:
    bool CollectedMaterials = true;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::UserConstructionScript (3 bytes)
void BP_DecalGlowWithWind_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::ReceiveBeginPlay (22 bytes)
void BP_DecalGlowWithWind_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_DecalGlowWithWind();
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::ReceiveTick (40 bytes)
void BP_DecalGlowWithWind_C::ReceiveTick()
{
    ExecuteUbergraph_BP_DecalGlowWithWind();
    return;
}

// Recovered Kismet: BP_DecalGlowWithWind_C::ExecuteUbergraph_BP_DecalGlowWithWind (41 bytes)
void BP_DecalGlowWithWind_C::ExecuteUbergraph_BP_DecalGlowWithWind()
{
    ApplyDisturbanceAtCurrentTime(K2Node_Event_DeltaSeconds);
    return;
}
