// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_EnchantedCompass_C::UserConstructionScript (3 bytes)
void BP_EnchantedCompass_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_EnchantedCompass_C::ReceiveBeginPlay (22 bytes)
void BP_EnchantedCompass_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_EnchantedCompass();
    return;
}

// Recovered Kismet: BP_EnchantedCompass_C::TriggerRetargetEffect (22 bytes)
void BP_EnchantedCompass_C::TriggerRetargetEffect()
{
    ExecuteUbergraph_BP_EnchantedCompass();
    return;
}

// Recovered Kismet: BP_EnchantedCompass_C::OnIsWielded (40 bytes)
void BP_EnchantedCompass_C::OnIsWielded()
{
    ExecuteUbergraph_BP_EnchantedCompass();
    return;
}

// Recovered Kismet: BP_EnchantedCompass_C::ReceiveEndPlay (40 bytes)
void BP_EnchantedCompass_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_EnchantedCompass();
    return;
}

// Recovered Kismet: BP_EnchantedCompass_C::ExecuteUbergraph_BP_EnchantedCompass (927 bytes)
void BP_EnchantedCompass_C::ExecuteUbergraph_BP_EnchantedCompass()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_49;
L_49:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = FXMesh->CreateDynamicMaterialInstance();
    auto RetargetGlowDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    bool CallFunc_IsServer_ReturnValue2 = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue2) goto L_114;
L_114:
    bool CallFunc_IsServer_ReturnValue3 = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue3) goto L_186;
L_186:
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    if (!K2Node_CustomEvent_WieldedEvent) goto L_328;
L_328:
    return;
}
