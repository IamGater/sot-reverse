// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::GetObjectDisplayName (86 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::UserConstructionScript (3 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::Server_OnBeaconLit (40 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::Server_OnBeaconLit()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::ReceiveBeginPlay (22 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::Client_OnBeaconLit (22 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::Client_OnBeaconLit()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::Client_OnBeaconExtinguished (22 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::Client_OnBeaconExtinguished()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_63_OnMechanismResetDelegate__DelegateSignature (40 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_63_OnMechanismResetDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon();
    return;
}

// Recovered Kismet: BP_HeartOfFire_FirePuzzle_Beacon_C::ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon (362 bytes)
void BP_HeartOfFire_FirePuzzle_Beacon_C::ExecuteUbergraph_BP_HeartOfFire_FirePuzzle_Beacon()
{
    ExtinguishFlame();
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_167;
    bool CallFunc_ActivateTrigger_ReturnValue = MechanismTrigger->ActivateTrigger(K2Node_Event_InInstigator);
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_A8;
L_A8:
    bool CallFunc_IsLit_ReturnValue = ABeacon::IsLit();
    if (!CallFunc_IsLit_ReturnValue) goto L_F0;
L_F0:
L_167:
    return;
}
