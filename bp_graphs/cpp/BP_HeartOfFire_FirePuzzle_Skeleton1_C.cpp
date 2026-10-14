// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton1_C::UserConstructionScript (3 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton1_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton1_C::Blueprint_OnMechanismReachedMaximum (22 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton1_C::Blueprint_OnMechanismReachedMaximum()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton1();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton1_C::ReceiveBeginPlay (22 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton1_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton1();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton1_C::Blueprint_OnMechanismMovedAwayFromMaximum (22 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton1_C::Blueprint_OnMechanismMovedAwayFromMaximum()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton1();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Skeleton1_C::ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton1 (243 bytes)
void BP_HeartOfFire_FirePuzzle_Skeleton1_C::ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Skeleton1()
{
    bool CallFunc_DeactivateTrigger_ReturnValue = MechanismTrigger->DeactivateTrigger();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_F0;
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_F0;
    bool CallFunc_ActivateTrigger_ReturnValue = MechanismTrigger->ActivateTrigger();
L_F0:
    return;
}
