// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EquipFlintlock_C::UserConstructionScript (3 bytes)
void BP_PromptActor_EquipFlintlock_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_EquipFlintlock_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EquipFlintlock_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipFlintlock_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EquipFlintlock_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipFlintlock_C::ExecuteUbergraph_BP_PromptActor_EquipFlintlock (587 bytes)
void BP_PromptActor_EquipFlintlock_C::ExecuteUbergraph_BP_PromptActor_EquipFlintlock()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275554);
    idx_275554* idx_275558 = Cast<idx_275554*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275558);
    if (!K2Node_DynamicCast_bSuccess) goto L_248;
    auto idx_275562 = idx_275558;
    idx_275562 = idx_275562;
    idx_275562 = idx_275562;
    idx_275562 = idx_275562;
    idx_275562 = idx_275562;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275562);
    if (!CallFunc_IsValid_ReturnValue) goto L_248;
L_248:
    return;
}
