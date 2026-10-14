// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton2_C::UserConstructionScript (3 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton2_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton2_C::Blueprint_OnMechanismReachedMaximum (22 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton2_C::Blueprint_OnMechanismReachedMaximum()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton2();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton2_C::ReceiveBeginPlay (22 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton2_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton2();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton2_C::Blueprint_OnMechanismMovedAwayFromMaximum (22 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton2_C::Blueprint_OnMechanismMovedAwayFromMaximum()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton2();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton2_C::BndEvt__IntentBasedMechanismActionComponent_K2Node_ComponentBoundEvent_69_OnMechanismResetDelegate__DelegateSignature (40 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton2_C::BndEvt__IntentBasedMechanismActionComponent_K2Node_ComponentBoundEvent_69_OnMechanismResetDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton2();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton2_C::ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton2 (701 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton2_C::ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton2()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_2BA;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = ChildActor->GetComponentsByClass(MechanismTriggerComponent);
    bool idx_241956 = CallFunc_Array_Get_Item->ResetMechanism();
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_2BA;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = ChildActor->GetComponentsByClass(MechanismTriggerComponent);
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = CallFunc_Array_Get_Item2->GetTriggerState();
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_GetTriggerState_ReturnValue;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_2BA;
    bool CallFunc_ActivateTrigger_ReturnValue = MechanismTrigger->ActivateTrigger();
    bool CallFunc_HasAuthority_ReturnValue3 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue3) goto L_2BA;
    bool CallFunc_DeactivateTrigger_ReturnValue = MechanismTrigger->DeactivateTrigger();
L_2BA:
    return;
}
