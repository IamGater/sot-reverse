// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PlaceableReactionMechanismAction_C::UserConstructionScript (3 bytes)
void BP_PlaceableReactionMechanismAction_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PlaceableReactionMechanismAction_C::BndEvt__MechanismAction_K2Node_ComponentBoundEvent_18_OnMechanismActionStateChangedDelegate__DelegateSignature (94 bytes)
void BP_PlaceableReactionMechanismAction_C::BndEvt__MechanismAction_K2Node_ComponentBoundEvent_18_OnMechanismActionStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_PlaceableReactionMechanismAction();
    return;
}

// Recovered Kismet: BP_PlaceableReactionMechanismAction_C::OnTimerExpired (22 bytes)
void BP_PlaceableReactionMechanismAction_C::OnTimerExpired()
{
    ExecuteUbergraph_BP_PlaceableReactionMechanismAction();
    return;
}

// Recovered Kismet: BP_PlaceableReactionMechanismAction_C::ExecuteUbergraph_BP_PlaceableReactionMechanismAction (282 bytes)
void BP_PlaceableReactionMechanismAction_C::ExecuteUbergraph_BP_PlaceableReactionMechanismAction()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_ComponentBoundEvent_NewState;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_117;
    auto CallFunc_Greater_FloatFloat_ReturnValue = Delay;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_EF;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, Delay, false);
L_EF:
    APlaceableReaction::TriggerReaction();
    APlaceableReaction::TriggerReaction();
L_117:
    return;
}
