// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_InvisibleMechanismTrigger_C::RefreshDeactivationTimer (178 bytes)
void BP_InvisibleMechanismTrigger_C::RefreshDeactivationTimer()
{
    if (!idx_242202) goto L_AF;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(idx_242213, idx_242203, false);
    auto idx_242210 = CallFunc_K2_SetTimerDelegate_ReturnValue;
L_AF:
    return;
}

// Recovered Kismet: BP_InvisibleMechanismTrigger_C::UserConstructionScript (3 bytes)
void BP_InvisibleMechanismTrigger_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_InvisibleMechanismTrigger_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature (94 bytes)
void BP_InvisibleMechanismTrigger_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_InvisibleMechanismTrigger();
    return;
}

// Recovered Kismet: BP_InvisibleMechanismTrigger_C::AutoDeactivateEvent (22 bytes)
void BP_InvisibleMechanismTrigger_C::AutoDeactivateEvent()
{
    ExecuteUbergraph_BP_InvisibleMechanismTrigger();
    return;
}

// Recovered Kismet: BP_InvisibleMechanismTrigger_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_57_OnMechanismResetDelegate__DelegateSignature (40 bytes)
void BP_InvisibleMechanismTrigger_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_57_OnMechanismResetDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_InvisibleMechanismTrigger();
    return;
}

// Recovered Kismet: BP_InvisibleMechanismTrigger_C::ExecuteUbergraph_BP_InvisibleMechanismTrigger (767 bytes)
void BP_InvisibleMechanismTrigger_C::ExecuteUbergraph_BP_InvisibleMechanismTrigger()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_2FC;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = MechanismTrigger->GetTriggerState();
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_GetTriggerState_ReturnValue;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_2FC;
    bool CallFunc_DeactivateTrigger_ReturnValue = MechanismTrigger->DeactivateTrigger();
    auto K2Node_SwitchEnum_CmpSuccess = K2Node_ComponentBoundEvent_NewState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_180;
    K2Node_SwitchEnum_CmpSuccess = K2Node_ComponentBoundEvent_NewState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_2FC;
    K2Node_SwitchEnum_CmpSuccess = K2Node_ComponentBoundEvent_NewState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_2FC;
L_180:
    if (!idx_242202) goto L_2FC;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, idx_242203, false);
    auto idx_242210 = CallFunc_K2_SetTimerDelegate_ReturnValue;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue2 = MechanismTrigger->GetTriggerState();
    auto CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_GetTriggerState_ReturnValue2;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue2) goto L_2FC;
    bool idx_242208 = MechanismTrigger->DeactivateTrigger();
L_2FC:
    return;
}
