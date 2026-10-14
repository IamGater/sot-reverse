// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DecalGlow_C::StartGlowEffect (582 bytes)
void BP_DecalGlow_C::StartGlowEffect()
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

// Recovered Kismet: BP_DecalGlow_C::StartReaction (36 bytes)
void BP_DecalGlow_C::StartReaction()
{
    StartGlowEffect();
    return;
}

// Recovered Kismet: BP_DecalGlow_C::StopReaction (50 bytes)
void BP_DecalGlow_C::StopReaction()
{
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    return;
}

// Recovered Kismet: BP_DecalGlow_C::CollectDecalMaterials (535 bytes)
void BP_DecalGlow_C::CollectDecalMaterials()
{
    if (!GatheredMaterials) goto L_14;
L_14:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DecalActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1BE;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_Array_Get_Item->CreateDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DecalMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
L_1BE:
    bool GatheredMaterials = true;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_DecalGlow_C::UserConstructionScript (3 bytes)
void BP_DecalGlow_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_DecalGlow_C::ReceiveBeginPlay (22 bytes)
void BP_DecalGlow_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_DecalGlow();
    return;
}

// Recovered Kismet: BP_DecalGlow_C::ExecuteUbergraph_BP_DecalGlow (13 bytes)
void BP_DecalGlow_C::ExecuteUbergraph_BP_DecalGlow()
{
    return;
}
