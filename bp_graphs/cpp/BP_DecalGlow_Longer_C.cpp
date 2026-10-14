// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DecalGlow_Longer_C::StartGlowEffect (756 bytes)
void BP_DecalGlow_Longer_C::StartGlowEffect()
{
    CollectDecalMaterials();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto StartTime = CallFunc_GetGameTimeInSeconds_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DecalMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_tavern_steps_opening);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_DecalGlow_Longer_C::StartReaction (36 bytes)
void BP_DecalGlow_Longer_C::StartReaction()
{
    StartGlowEffect();
    return;
}

// Recovered Kismet: BP_DecalGlow_Longer_C::StopReaction (73 bytes)
void BP_DecalGlow_Longer_C::StopReaction()
{
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    return;
}

// Recovered Kismet: BP_DecalGlow_Longer_C::CollectDecalMaterials (210 bytes)
void BP_DecalGlow_Longer_C::CollectDecalMaterials()
{
    if (!CollectedDecals) goto L_13;
L_13:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = StepsTriggerActor->CreateDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DecalMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    bool CollectedDecals = true;
    return;
}

// Recovered Kismet: BP_DecalGlow_Longer_C::UserConstructionScript (3 bytes)
void BP_DecalGlow_Longer_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_DecalGlow_Longer_C::ReceiveBeginPlay (22 bytes)
void BP_DecalGlow_Longer_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_DecalGlow_Longer();
    return;
}

// Recovered Kismet: BP_DecalGlow_Longer_C::ExecuteUbergraph_BP_DecalGlow_Longer (13 bytes)
void BP_DecalGlow_Longer_C::ExecuteUbergraph_BP_DecalGlow_Longer()
{
    return;
}
