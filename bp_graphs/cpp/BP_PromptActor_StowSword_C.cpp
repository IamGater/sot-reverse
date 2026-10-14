// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_StowSword_C::UserConstructionScript (3 bytes)
void BP_PromptActor_StowSword_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_StowSword_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_StowSword_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_StowSword();
    return;
}

// Recovered Kismet: BP_PromptActor_StowSword_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_StowSword_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_StowSword();
    return;
}

// Recovered Kismet: BP_PromptActor_StowSword_C::ExecuteUbergraph_BP_PromptActor_StowSword (592 bytes)
void BP_PromptActor_StowSword_C::ExecuteUbergraph_BP_PromptActor_StowSword()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275902);
    idx_275902* idx_275906 = Cast<idx_275902*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275906);
    if (!K2Node_DynamicCast_bSuccess) goto L_24D;
    auto idx_275909 = idx_275906;
    idx_275909 = idx_275909;
    idx_275909 = idx_275909;
    idx_275909 = idx_275909;
    idx_275909 = idx_275909;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275909);
    if (!CallFunc_IsValid_ReturnValue) goto L_24D;
L_24D:
    return;
}

// Recovered Kismet: BP_PromptActor_StowSword_C::BroadcastToListeners__DelegateSignature (3 bytes)
void BP_PromptActor_StowSword_C::BroadcastToListeners__DelegateSignature()
{
    return;
}
