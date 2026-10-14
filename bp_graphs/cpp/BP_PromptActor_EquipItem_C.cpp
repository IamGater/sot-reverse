// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EquipItem_C::UserConstructionScript (3 bytes)
void BP_PromptActor_EquipItem_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_EquipItem_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EquipItem_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EquipItem();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipItem_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EquipItem_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EquipItem();
    return;
}

// Recovered Kismet: BP_PromptActor_EquipItem_C::ExecuteUbergraph_BP_PromptActor_EquipItem (634 bytes)
void BP_PromptActor_EquipItem_C::ExecuteUbergraph_BP_PromptActor_EquipItem()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275579);
    idx_275579* idx_275583 = Cast<idx_275579*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275583);
    if (!K2Node_DynamicCast_bSuccess) goto L_277;
    auto idx_275585 = idx_275583;
    idx_275585 = idx_275585;
    idx_275585 = idx_275585;
    idx_275585 = idx_275585;
    idx_275585 = idx_275585;
    idx_275585 = idx_275585;
    idx_275585 = idx_275585;
    idx_275585 = idx_275585;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    UninitializePrompt(idx_275585);
L_277:
    return;
}
