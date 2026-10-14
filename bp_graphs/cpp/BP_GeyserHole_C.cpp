// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GeyserHole_C::SetFadeOutParameters (253 bytes)
void BP_GeyserHole_C::SetFadeOutParameters()
{
    auto CallFunc_Add_FloatFloat_ReturnValue = FadeTime;
    return;
}

// Recovered Kismet: BP_GeyserHole_C::SetFadeInParameters (211 bytes)
void BP_GeyserHole_C::SetFadeInParameters()
{
    return;
}

// Recovered Kismet: BP_GeyserHole_C::UserConstructionScript (232 bytes)
void BP_GeyserHole_C::UserConstructionScript()
{
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = CrackMesh->CreateDynamicMaterialInstance();
    auto MeshDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CrackDecal->CreateDynamicMaterialInstance();
    auto DecalDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    return;
}

// Recovered Kismet: BP_GeyserHole_C::ReceiveBeginPlay (22 bytes)
void BP_GeyserHole_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_GeyserHole();
    return;
}

// Recovered Kismet: BP_GeyserHole_C::OnStateChanged (40 bytes)
void BP_GeyserHole_C::OnStateChanged()
{
    ExecuteUbergraph_BP_GeyserHole();
    return;
}

// Recovered Kismet: BP_GeyserHole_C::ExecuteUbergraph_BP_GeyserHole (421 bytes)
void BP_GeyserHole_C::ExecuteUbergraph_BP_GeyserHole()
{
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    SetFadeOutParameters(CallFunc_Add_FloatFloat_ReturnValue3);
    CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    SetFadeInParameters(CallFunc_Add_FloatFloat_ReturnValue2);
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    SetFadeOutParameters(CallFunc_Add_FloatFloat_ReturnValue);
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_InState;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_1A2;
L_1A2:
    return;
}
