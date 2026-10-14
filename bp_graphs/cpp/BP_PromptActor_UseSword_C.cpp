// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_UseSword_C::UserConstructionScript (3 bytes)
void BP_PromptActor_UseSword_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_UseSword_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_UseSword_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_UseSword();
    return;
}

// Recovered Kismet: BP_PromptActor_UseSword_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_UseSword_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_UseSword();
    return;
}

// Recovered Kismet: BP_PromptActor_UseSword_C::DismissAllPrompts (22 bytes)
void BP_PromptActor_UseSword_C::DismissAllPrompts()
{
    ExecuteUbergraph_BP_PromptActor_UseSword();
    return;
}

// Recovered Kismet: BP_PromptActor_UseSword_C::ExecuteUbergraph_BP_PromptActor_UseSword (699 bytes)
void BP_PromptActor_UseSword_C::ExecuteUbergraph_BP_PromptActor_UseSword()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275916);
    idx_275916* idx_275920 = Cast<idx_275916*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275920);
    if (!K2Node_DynamicCast_bSuccess) goto L_2B8;
    auto idx_275921 = idx_275920;
    idx_275921 = idx_275921;
    idx_275921 = idx_275921;
    idx_275921 = idx_275921;
    idx_275921 = idx_275921;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275921);
    if (!CallFunc_IsValid_ReturnValue) goto L_2B8;
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(idx_275921);
    if (!CallFunc_IsValid_ReturnValue2) goto L_2B8;
L_2B8:
    return;
}
