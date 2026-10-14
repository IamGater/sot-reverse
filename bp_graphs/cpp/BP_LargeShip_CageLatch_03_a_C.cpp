// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LargeShip_CageLatch_03_a_C::GetClosestInteractionPoint (111 bytes)
void BP_LargeShip_CageLatch_03_a_C::GetClosestInteractionPoint()
{
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_LargeShip_CageLatch_03_a_C::UserConstructionScript (3 bytes)
void BP_LargeShip_CageLatch_03_a_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_LargeShip_CageLatch_03_a_C::OnAnimationStarted (22 bytes)
void BP_LargeShip_CageLatch_03_a_C::OnAnimationStarted()
{
    ExecuteUbergraph_BP_LargeShip_CageLatch_03_a();
    return;
}

// Recovered Kismet: BP_LargeShip_CageLatch_03_a_C::OnAnimationCompleted (22 bytes)
void BP_LargeShip_CageLatch_03_a_C::OnAnimationCompleted()
{
    ExecuteUbergraph_BP_LargeShip_CageLatch_03_a();
    return;
}

// Recovered Kismet: BP_LargeShip_CageLatch_03_a_C::ExecuteUbergraph_BP_LargeShip_CageLatch_03_a (592 bytes)
void BP_LargeShip_CageLatch_03_a_C::ExecuteUbergraph_BP_LargeShip_CageLatch_03_a()
{
L_A:
    this->OnAnimationCompleted();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_A;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue2 = MechanismTriggerComponent->GetTriggerState();
    auto K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetTriggerState_ReturnValue2;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_FE;
    K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetTriggerState_ReturnValue2;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_24D;
    K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetTriggerState_ReturnValue2;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_24D;
L_FE:
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_20E;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = MechanismTriggerComponent->GetTriggerState();
    auto K2Node_SwitchEnum_CmpSuccess = CallFunc_GetTriggerState_ReturnValue;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_24D;
    K2Node_SwitchEnum_CmpSuccess = CallFunc_GetTriggerState_ReturnValue;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_21D;
    K2Node_SwitchEnum_CmpSuccess = CallFunc_GetTriggerState_ReturnValue;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_24D;
L_20E:
    this->OnAnimationStarted();
L_21D:
L_24D:
    return;
}
