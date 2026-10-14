// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PressurePlateMechanismTrigger_AncientSlab_C::UserConstructionScript (13 bytes)
void BP_PressurePlateMechanismTrigger_AncientSlab_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTrigger_AncientSlab_C::ReceiveBeginPlay (22 bytes)
void BP_PressurePlateMechanismTrigger_AncientSlab_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PressurePlateMechanismTrigger_AncientSlab();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTrigger_AncientSlab_C::ExecuteUbergraph_BP_PressurePlateMechanismTrigger_AncientSlab (90 bytes)
void BP_PressurePlateMechanismTrigger_AncientSlab_C::ExecuteUbergraph_BP_PressurePlateMechanismTrigger_AncientSlab()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    APressurePlateMechanismTriggerBase::AddAnimationComponent(Button, idx_242459);
    return;
}
