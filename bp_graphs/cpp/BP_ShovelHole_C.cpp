// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ShovelHole_C::SetFadeInParameters (211 bytes)
void BP_ShovelHole_C::SetFadeInParameters()
{
    return;
}

// Recovered Kismet: BP_ShovelHole_C::SetFadeOutParameters (261 bytes)
void BP_ShovelHole_C::SetFadeOutParameters()
{
    auto CallFunc_Subtract_FloatFloat_ReturnValue = FadeTime;
    return;
}

// Recovered Kismet: BP_ShovelHole_C::UserConstructionScript (232 bytes)
void BP_ShovelHole_C::UserConstructionScript()
{
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = idx_232593->CreateDynamicMaterialInstance();
    auto MeshDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = idx_232591->CreateDynamicMaterialInstance();
    auto DecalDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    return;
}

// Recovered Kismet: BP_ShovelHole_C::OnStateChanged (40 bytes)
void BP_ShovelHole_C::OnStateChanged()
{
    ExecuteUbergraph_BP_ShovelHole();
    return;
}

// Recovered Kismet: BP_ShovelHole_C::ReceiveBeginPlay (22 bytes)
void BP_ShovelHole_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_ShovelHole();
    return;
}

// Recovered Kismet: BP_ShovelHole_C::ExecuteUbergraph_BP_ShovelHole (415 bytes)
void BP_ShovelHole_C::ExecuteUbergraph_BP_ShovelHole()
{
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_InState;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_19C;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    SetFadeOutParameters(CallFunc_Add_FloatFloat_ReturnValue);
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    SetFadeOutParameters(CallFunc_Add_FloatFloat_ReturnValue3);
    CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    SetFadeInParameters(CallFunc_Add_FloatFloat_ReturnValue2);
L_19C:
    return;
}
