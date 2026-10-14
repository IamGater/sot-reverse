// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Lantern_C::CreateLanternDynamicMaterial (579 bytes)
void BP_Lantern_C::CreateLanternDynamicMaterial()
{
    int CallFunc_GetNumMaterials_ReturnValue = ThirdPersonMesh->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = ThirdPersonMesh->GetMaterial(Temp_int_Variable);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Lantern_C::UserConstructionScript (3 bytes)
void BP_Lantern_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Lantern_C::OnAttachFirstPerson (3 bytes)
void BP_Lantern_C::OnAttachFirstPerson()
{
    return;
}

// Recovered Kismet: BP_Lantern_C::TurnOff (3 bytes)
void BP_Lantern_C::TurnOff()
{
    return;
}

// Recovered Kismet: BP_Lantern_C::TurnOn (3 bytes)
void BP_Lantern_C::TurnOn()
{
    return;
}

// Recovered Kismet: BP_Lantern_C::UserConstructionScript (3 bytes)
void BP_Lantern_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Lantern_C::ReceiveWieldFirstPerson (22 bytes)
void BP_Lantern_C::ReceiveWieldFirstPerson()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::ReceiveWieldThirdPerson (22 bytes)
void BP_Lantern_C::ReceiveWieldThirdPerson()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::ReceiveBeginPlay (22 bytes)
void BP_Lantern_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::ReceiveLightChange (22 bytes)
void BP_Lantern_C::ReceiveLightChange()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::TriggerGlow (22 bytes)
void BP_Lantern_C::TriggerGlow()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::PostMeshChangedBPEvent (40 bytes)
void BP_Lantern_C::PostMeshChangedBPEvent()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::ReceiveFlameData (40 bytes)
void BP_Lantern_C::ReceiveFlameData()
{
    ExecuteUbergraph_BP_Lantern();
    return;
}

// Recovered Kismet: BP_Lantern_C::ExecuteUbergraph_BP_Lantern (13206 bytes)
void BP_Lantern_C::ExecuteUbergraph_BP_Lantern()
{
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue = ALantern::GetColourForFlameOfFateType(DefaultSpotlightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue2 = ALantern::GetColourForFlameOfFateType(DefaultAmbientLightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue3 = ALantern::GetColourForFlameOfFateType(DefaultGlowColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue5 = ALantern::GetColourForFlameOfFateType(DefaultSpotlightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue6 = ALantern::GetColourForFlameOfFateType(DefaultAmbientLightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue7 = ALantern::GetColourForFlameOfFateType(DefaultGlowColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue9 = ALantern::GetColourForFlameOfFateType(DefaultSpotlightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue10 = ALantern::GetColourForFlameOfFateType(DefaultAmbientLightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue11 = ALantern::GetColourForFlameOfFateType(DefaultGlowColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue13 = ALantern::GetColourForFlameOfFateType(DefaultSpotlightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue14 = ALantern::GetColourForFlameOfFateType(DefaultAmbientLightColour);
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue15 = ALantern::GetColourForFlameOfFateType(DefaultGlowColour);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue17 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue15 = Temp_int_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue15) goto L_535;
L_535:
    int CallFunc_Array_Length_ReturnValue16 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue14 = Temp_int_Variable5;
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue16 = ALantern::GetColourForFlameOfFateType();
    auto CallFunc_Add_IntInt_ReturnValue5 = Temp_int_Variable5;
    auto Temp_int_Variable5 = CallFunc_Add_IntInt_ReturnValue5;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Variable2;
    auto Temp_int_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue15 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue13 = Temp_int_Variable2;
    float CallFunc_GetGameTimeInSeconds_ReturnValue4 = UKismetSystemLibrary::GetGameTimeInSeconds();
    bool CallFunc_SelectFloat_ReturnValue2 = true;
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue4;
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue = LanternGlowDynamicMaterial->K2_GetVectorParameterValue();
    auto DefaultGlowColour = CallFunc_K2_GetVectorParameterValue_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Variable3;
    auto Temp_int_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Variable3;
    float CallFunc_GetGameTimeInSeconds_ReturnValue5 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue5;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
L_B26:
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Variable4;
    if (!CallFunc_Less_IntInt_ReturnValue3) goto L_D2A;
    float CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue8 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    float CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue12 = CallFunc_Lerp_ReturnValue8;
    auto CallFunc_Multiply_FloatFloat_ReturnValue19 = CallFunc_Multiply_FloatFloat_ReturnValue12;
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Variable4;
    auto Temp_int_Variable4 = CallFunc_Add_IntInt_ReturnValue4;
L_D2A:
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue3 = CallFunc_Array_Get_Item7->K2_GetVectorParameterValue();
    int CallFunc_Array_Length_ReturnValue10 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue5 = Temp_int_Variable11;
    if (!CallFunc_Less_IntInt_ReturnValue5) goto L_1174;
    auto CallFunc_Add_IntInt_ReturnValue11 = Temp_int_Variable11;
    auto Temp_int_Variable11 = CallFunc_Add_IntInt_ReturnValue11;
    if (!K2Node_Event_SkipFlameColourTransition) goto L_F5A;
L_F5A:
    int CallFunc_Array_Length_ReturnValue11 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue6 = Temp_int_Variable10;
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_SelectFloat_ReturnValue3 = K2Node_Event_SkipFlameColourTransition;
    auto CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue10 = Temp_int_Variable10;
    auto Temp_int_Variable10 = CallFunc_Add_IntInt_ReturnValue10;
L_1174:
    int CallFunc_Array_Length_ReturnValue9 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue4 = Temp_int_Variable12;
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue8 = ALantern::GetColourForFlameOfFateType();
    auto CallFunc_Add_IntInt_ReturnValue12 = Temp_int_Variable12;
    auto Temp_int_Variable12 = CallFunc_Add_IntInt_ReturnValue12;
    float CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue3 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    float CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CurrentExternalLightFactor;
    auto CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue2 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Lerp_ReturnValue2;
    auto CallFunc_Less_FloatFloat_ReturnValue = CurrentThirdPersonMultiplier;
    if (!CallFunc_Less_FloatFloat_ReturnValue) goto L_1726;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Variable7;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_16D3;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Lerp_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue10 = CallFunc_Multiply_FloatFloat_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue7 = Temp_int_Variable7;
    auto Temp_int_Variable7 = CallFunc_Add_IntInt_ReturnValue7;
L_16D3:
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
L_1726:
    auto CallFunc_Greater_FloatFloat_ReturnValue = CurrentThirdPersonMultiplier;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_175A;
L_175A:
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue11 = Temp_int_Variable14;
    if (!CallFunc_Less_IntInt_ReturnValue11) goto L_16D3;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    CallFunc_Lerp_ReturnValue = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Lerp_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue9 = CallFunc_Multiply_FloatFloat_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue14 = Temp_int_Variable14;
    auto Temp_int_Variable14 = CallFunc_Add_IntInt_ReturnValue14;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue4 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Lerp_ReturnValue4;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue5 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_Lerp_ReturnValue5;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue6 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue7 = CallFunc_Lerp_ReturnValue6;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue7 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue8 = CallFunc_Lerp_ReturnValue7;
    auto CallFunc_Add_IntInt_ReturnValue6 = Temp_int_Variable6;
    auto Temp_int_Variable6 = CallFunc_Add_IntInt_ReturnValue6;
    int CallFunc_Array_Length_ReturnValue12 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue8 = Temp_int_Variable6;
    float CallFunc_GetGameTimeInSeconds_ReturnValue3 = UKismetSystemLibrary::GetGameTimeInSeconds();
    bool CallFunc_SelectFloat_ReturnValue = true;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue3;
    int CallFunc_Array_Length_ReturnValue14 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue10 = Temp_int_Variable8;
    if (!CallFunc_Less_IntInt_ReturnValue10) goto L_1F75;
    auto CallFunc_Add_IntInt_ReturnValue8 = Temp_int_Variable8;
    auto Temp_int_Variable8 = CallFunc_Add_IntInt_ReturnValue8;
L_1F75:
    int CallFunc_Array_Length_ReturnValue13 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue9 = Temp_int_Variable9;
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue12 = ALantern::GetColourForFlameOfFateType();
    auto CallFunc_Add_IntInt_ReturnValue9 = Temp_int_Variable9;
    auto Temp_int_Variable9 = CallFunc_Add_IntInt_ReturnValue9;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue10 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue11 = CurrentExternalLightFactor;
    auto CallFunc_Multiply_FloatFloat_ReturnValue13 = CallFunc_Multiply_FloatFloat_ReturnValue11;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue9 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue14 = CallFunc_Lerp_ReturnValue9;
    auto CallFunc_Less_FloatFloat_ReturnValue2 = CurrentThirdPersonMultiplier;
    if (!CallFunc_Less_FloatFloat_ReturnValue2) goto L_24D4;
    int CallFunc_Array_Length_ReturnValue5 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue17 = Temp_int_Variable17;
    if (!CallFunc_Less_IntInt_ReturnValue17) goto L_D2A;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    CallFunc_Lerp_ReturnValue8 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    CallFunc_Multiply_FloatFloat_ReturnValue12 = CallFunc_Lerp_ReturnValue8;
    auto CallFunc_Multiply_FloatFloat_ReturnValue20 = CallFunc_Multiply_FloatFloat_ReturnValue12;
    auto CallFunc_Add_IntInt_ReturnValue17 = Temp_int_Variable17;
    auto Temp_int_Variable17 = CallFunc_Add_IntInt_ReturnValue17;
L_24D4:
    auto CallFunc_Greater_FloatFloat_ReturnValue2 = CurrentThirdPersonMultiplier;
    if (!CallFunc_Greater_FloatFloat_ReturnValue2) goto L_B26;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue11 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue15 = CallFunc_Lerp_ReturnValue11;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue12 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue16 = CallFunc_Lerp_ReturnValue12;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue13 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue17 = CallFunc_Lerp_ReturnValue13;
    CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2 = ALantern::GetUnaryRaisedBlendFactor();
    auto CallFunc_Lerp_ReturnValue14 = CallFunc_GetUnaryRaisedBlendFactor_ReturnValue2;
    CallFunc_GetUnaryActiveBlendFactor_ReturnValue2 = ALantern::GetUnaryActiveBlendFactor();
    auto CallFunc_Multiply_FloatFloat_ReturnValue18 = CallFunc_Lerp_ReturnValue14;
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue2 = CallFunc_Array_Get_Item4->K2_GetVectorParameterValue();
    int CallFunc_Array_Length_ReturnValue8 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue12 = Temp_int_Variable15;
    if (!CallFunc_Less_IntInt_ReturnValue12) goto L_29DA;
    auto CallFunc_Add_IntInt_ReturnValue15 = Temp_int_Variable15;
    auto Temp_int_Variable15 = CallFunc_Add_IntInt_ReturnValue15;
L_29DA:
    int CallFunc_Array_Length_ReturnValue6 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue16 = Temp_int_Variable16;
    FLinearColor CallFunc_GetColourForFlameOfFateType_ReturnValue4 = ALantern::GetColourForFlameOfFateType();
    auto CallFunc_Add_IntInt_ReturnValue16 = Temp_int_Variable16;
    auto Temp_int_Variable16 = CallFunc_Add_IntInt_ReturnValue16;
    int CallFunc_Array_Length_ReturnValue7 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue7 = Temp_int_Variable13;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_SelectFloat_ReturnValue4 = K2Node_Event_WantChangeAnimation;
    auto CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue13 = Temp_int_Variable13;
    auto Temp_int_Variable13 = CallFunc_Add_IntInt_ReturnValue13;
    if (!K2Node_Event_WantChangeAnimation) goto L_2D37;
L_2D37:
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue4 = CallFunc_Array_Get_Item13->K2_GetVectorParameterValue();
    if (!true) goto L_2E23;
L_2E23:
    FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue5 = CallFunc_Array_Get_Item19->K2_GetVectorParameterValue();
    if (!true) goto L_2F0F;
L_2F0F:
    CreateLanternDynamicMaterial();
    auto CallFunc_Conv_ColorToLinearColor_ReturnValue = SpotLight;
    auto DefaultSpotlightColour = CallFunc_Conv_ColorToLinearColor_ReturnValue;
    auto DefaultAmbientLightColour = AmbientLightSource;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = LanternTriggerGlow->CreateDynamicMaterialInstance();
    auto LanternTriggerGlowDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = LanternGlow->CreateDynamicMaterialInstance();
    auto LanternGlowDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    CallFunc_GetGameTimeInSeconds_ReturnValue5 = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue5;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    CreateLanternDynamicMaterial();
    return;
}
