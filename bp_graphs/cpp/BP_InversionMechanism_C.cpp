// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_InversionMechanism_C::UpdateTriggerState (215 bytes)
void BP_InversionMechanism_C::UpdateTriggerState()
{
    auto K2Node_SwitchEnum_CmpSuccess = ActionState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_5F;
    K2Node_SwitchEnum_CmpSuccess = ActionState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_9C;
L_5F:
    bool CallFunc_DeactivateTrigger_ReturnValue = MechanismTrigger->DeactivateTrigger(Instigator);
L_9C:
    bool CallFunc_ActivateTrigger_ReturnValue = MechanismTrigger->ActivateTrigger(Instigator);
    return;
}

// Recovered Kismet: BP_InversionMechanism_C::UserConstructionScript (3 bytes)
void BP_InversionMechanism_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_InversionMechanism_C::BndEvt__MechanismAction_K2Node_ComponentBoundEvent_9_OnMechanismActionStateChangedDelegate__DelegateSignature (94 bytes)
void BP_InversionMechanism_C::BndEvt__MechanismAction_K2Node_ComponentBoundEvent_9_OnMechanismActionStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_InversionMechanism();
    return;
}

// Recovered Kismet: BP_InversionMechanism_C::ReceiveBeginPlay (22 bytes)
void BP_InversionMechanism_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_InversionMechanism();
    return;
}

// Recovered Kismet: BP_InversionMechanism_C::ExecuteUbergraph_BP_InversionMechanism (212 bytes)
void BP_InversionMechanism_C::ExecuteUbergraph_BP_InversionMechanism()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_D1;
    TEnumAsByte<EMechanismActionState> CallFunc_GetActionState_ReturnValue = MechanismAction->GetActionState();
    UpdateTriggerState(CallFunc_GetActionState_ReturnValue);
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_D1;
    UpdateTriggerState(K2Node_ComponentBoundEvent_NewState, K2Node_ComponentBoundEvent_Instigator);
L_D1:
    return;
}
