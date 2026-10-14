// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_RecurringPromptWithExclusionZones_C::UserConstructionScript (13 bytes)
void BP_PromptActor_RecurringPromptWithExclusionZones_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_RecurringPromptWithExclusionZones_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_RecurringPromptWithExclusionZones_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_RecurringPromptWithExclusionZones();
    return;
}

// Recovered Kismet: BP_PromptActor_RecurringPromptWithExclusionZones_C::ExecuteUbergraph_BP_PromptActor_RecurringPromptWithExclusionZones (524 bytes)
void BP_PromptActor_RecurringPromptWithExclusionZones_C::ExecuteUbergraph_BP_PromptActor_RecurringPromptWithExclusionZones()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275945);
    idx_275945* idx_275951 = Cast<idx_275945*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275951);
    if (!K2Node_DynamicCast_bSuccess) goto L_209;
    auto PromptCoordinator = idx_275951;
    idx_275951 = idx_275951;
    idx_275951 = idx_275951;
    idx_275951 = idx_275951;
    idx_275951 = idx_275951;
    idx_275951 = idx_275951;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
L_209:
    return;
}
