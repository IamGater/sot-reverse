// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DecalGlow_Reverse_C::StartGlowEffect (761 bytes)
void BP_DecalGlow_Reverse_C::StartGlowEffect()
{
    CollectDecalMaterials();
    auto CallFunc_Greater_FloatFloat_ReturnValue = StarterActor;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_2F6;
    UMaterialInstanceDynamic* CallFunc_GetDecalDynamicMaterialInstance_ReturnValue = StepsTriggerActor->GetDecalDynamicMaterialInstance();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = Reveal;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue2;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto StarterActor = StarterActor;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(StarterActor, Stop_sfx_tavern_steps_opening);
L_2F6:
    return;
}

// Recovered Kismet: BP_DecalGlow_Reverse_C::StartReaction (36 bytes)
void BP_DecalGlow_Reverse_C::StartReaction()
{
    StartGlowEffect();
    return;
}

// Recovered Kismet: BP_DecalGlow_Reverse_C::StopReaction (50 bytes)
void BP_DecalGlow_Reverse_C::StopReaction()
{
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    return;
}

// Recovered Kismet: BP_DecalGlow_Reverse_C::CollectDecalMaterials (206 bytes)
void BP_DecalGlow_Reverse_C::CollectDecalMaterials()
{
    if (!CollectedDecalMaterials) goto L_13;
L_13:
    UMaterialInstanceDynamic* CallFunc_GetDecalDynamicMaterialInstance_ReturnValue = StepsTriggerActor->GetDecalDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DecalMaterials, CallFunc_GetDecalDynamicMaterialInstance_ReturnValue);
    bool CollectedDecalMaterials = true;
    return;
}

// Recovered Kismet: BP_DecalGlow_Reverse_C::UserConstructionScript (3 bytes)
void BP_DecalGlow_Reverse_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_DecalGlow_Reverse_C::ReceiveBeginPlay (22 bytes)
void BP_DecalGlow_Reverse_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_DecalGlow_Reverse();
    return;
}

// Recovered Kismet: BP_DecalGlow_Reverse_C::ExecuteUbergraph_BP_DecalGlow_Reverse (13 bytes)
void BP_DecalGlow_Reverse_C::ExecuteUbergraph_BP_DecalGlow_Reverse()
{
    return;
}
