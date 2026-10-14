// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::OnRep_Intensity (26 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::OnRep_Intensity()
{
    UpdateIntensity(Intensity);
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::UserConstructionScript (3 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::UpdateIntensity (1592 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::UpdateIntensity()
{
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(LightGroup);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item6);
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = NewIntensity;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(ParticleGroup);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Array_Get_Item4;
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable3;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Array_Get_Item;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::StartReaction (36 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::StartReaction()
{
    StartSequence();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::StopReaction (50 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::StopReaction()
{
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::UserConstructionScript (3 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::FadeInCurve__FinishedFunc (22 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::FadeInCurve__FinishedFunc()
{
    ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::FadeInCurve__UpdateFunc (22 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::FadeInCurve__UpdateFunc()
{
    ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::FadeOutCurve__FinishedFunc (22 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::FadeOutCurve__FinishedFunc()
{
    ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::FadeOutCurve__UpdateFunc (22 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::FadeOutCurve__UpdateFunc()
{
    ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::ReceiveBeginPlay (22 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::StartSequence (22 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::StartSequence()
{
    ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp();
    return;
}

// Recovered Kismet: BP_TreasureRoom_LightGroupIntensityLerp_C::ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp (2100 bytes)
void BP_TreasureRoom_LightGroupIntensityLerp_C::ExecuteUbergraph_BP_TreasureRoom_LightGroupIntensityLerp()
{
    UpdateIntensity(FadeOutCurve_Intensity_F5674B2742B88366167A9B86ACDE7CAA);
    UpdateIntensity(Intensity);
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(LightGroup);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    int CallFunc_Array_Add_ReturnValue4 = UKismetArrayLibrary::Array_Add(LightIntensities, CallFunc_Array_Get_Item3);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(ParticleGroup);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    FVector CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_Array_Get_Item2->K2_GetComponentScale();
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(VFXScales, CallFunc_K2_GetComponentScale_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_377:
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue3 = AActor::GetComponentsByClass(StaticMeshComponent);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_Array_Get_Item->CreateDynamicMaterialInstance();
    CallFunc_GetComponentsByClass_ReturnValue3 = AActor::GetComponentsByClass(StaticMeshComponent);
    float CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue->K2_GetScalarParameterValue(MaterialParameterName);
    int CallFunc_Array_Add_ReturnValue3 = UKismetArrayLibrary::Array_Add(MaterialIntensities, CallFunc_K2_GetScalarParameterValue_ReturnValue);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    CallFunc_GetComponentsByClass_ReturnValue3 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue3);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable3;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(LightComponent);
    auto LightGroup = CallFunc_GetComponentsByClass_ReturnValue;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(ParticleSystemComponent);
    auto ParticleGroup = CallFunc_GetComponentsByClass_ReturnValue2;
    if (!FadeOut) goto L_377;
    UpdateIntensity(FadeInCurve_Intensity_21E1218941E9E789C183C996BC255F61);
    return;
}
