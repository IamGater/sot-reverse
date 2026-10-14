// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SwingMechanismAction_Base_C::UserConstructionScript (3 bytes)
void BP_SwingMechanismAction_Base_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_SwingMechanismAction_Base_C::BndEvt__MechanismInteractionComponent_K2Node_ComponentBoundEvent_54_OnMechanismInteractionCollisionShape__DelegateSignature (22 bytes)
void BP_SwingMechanismAction_Base_C::BndEvt__MechanismInteractionComponent_K2Node_ComponentBoundEvent_54_OnMechanismInteractionCollisionShape__DelegateSignature()
{
    ExecuteUbergraph_BP_SwingMechanismAction_Base();
    return;
}

// Recovered Kismet: BP_SwingMechanismAction_Base_C::ReceiveBeginPlay (22 bytes)
void BP_SwingMechanismAction_Base_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_SwingMechanismAction_Base();
    return;
}

// Recovered Kismet: BP_SwingMechanismAction_Base_C::Blueprint_OnStarted (22 bytes)
void BP_SwingMechanismAction_Base_C::Blueprint_OnStarted()
{
    ExecuteUbergraph_BP_SwingMechanismAction_Base();
    return;
}

// Recovered Kismet: BP_SwingMechanismAction_Base_C::Blueprint_OnStopped (22 bytes)
void BP_SwingMechanismAction_Base_C::Blueprint_OnStopped()
{
    ExecuteUbergraph_BP_SwingMechanismAction_Base();
    return;
}

// Recovered Kismet: BP_SwingMechanismAction_Base_C::ExecuteUbergraph_BP_SwingMechanismAction_Base (315 bytes)
void BP_SwingMechanismAction_Base_C::ExecuteUbergraph_BP_SwingMechanismAction_Base()
{
    this->Blueprint_OnStopped();
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_138;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_138;
    this->ReceiveBeginPlay();
    bool CallFunc_HasAuthority_ReturnValue3 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue3) goto L_138;
    this->Blueprint_OnStarted();
L_138:
    return;
}
