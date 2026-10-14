// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr_C::UserConstructionScript (13 bytes)
void BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr_C::ReceiveBeginPlay (22 bytes)
void BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr_C::ExecuteUbergraph_BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr (118 bytes)
void BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr_C::ExecuteUbergraph_BP_PressurePlateMechanismTrigger_FloorBoards_01a_dvr()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    APressurePlateMechanismTriggerBase::AddAnimationComponent(idx_242397, idx_242399);
    APressurePlateMechanismTriggerBase::AddAnimationComponent(idx_242392, idx_242394);
    return;
}
