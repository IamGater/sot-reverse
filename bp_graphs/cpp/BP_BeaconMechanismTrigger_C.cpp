// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_BeaconMechanismTrigger_C::GetClosestInteractionPoint (135 bytes)
void BP_BeaconMechanismTrigger_C::GetClosestInteractionPoint()
{
    auto CallFunc_GetTransform_ReturnValue = this->GetTransform();
    auto CallFunc_TransformLocation_ReturnValue = CallFunc_GetTransform_ReturnValue;
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::GetObjectDisplayName (88 bytes)
void BP_BeaconMechanismTrigger_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::UserConstructionScript (3 bytes)
void BP_BeaconMechanismTrigger_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::Server_OnBeaconLit (40 bytes)
void BP_BeaconMechanismTrigger_C::Server_OnBeaconLit()
{
    ExecuteUbergraph_BP_BeaconMechanismTrigger();
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::OnTimerExpired (22 bytes)
void BP_BeaconMechanismTrigger_C::OnTimerExpired()
{
    ExecuteUbergraph_BP_BeaconMechanismTrigger();
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::Client_OnBeaconLit (22 bytes)
void BP_BeaconMechanismTrigger_C::Client_OnBeaconLit()
{
    ExecuteUbergraph_BP_BeaconMechanismTrigger();
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::Client_OnBeaconExtinguished (22 bytes)
void BP_BeaconMechanismTrigger_C::Client_OnBeaconExtinguished()
{
    ExecuteUbergraph_BP_BeaconMechanismTrigger();
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::ReceiveBeginPlay (22 bytes)
void BP_BeaconMechanismTrigger_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_BeaconMechanismTrigger();
    return;
}

// Recovered Kismet: BP_BeaconMechanismTrigger_C::ExecuteUbergraph_BP_BeaconMechanismTrigger (477 bytes)
void BP_BeaconMechanismTrigger_C::ExecuteUbergraph_BP_BeaconMechanismTrigger()
{
L_A:
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_57;
L_57:
    bool idx_240883 = ABeacon::IsLit();
    if (!idx_240883) goto L_A;
    bool idx_240879 = MechanismTrigger->ActivateTrigger(idx_240888);
    if (!idx_240876) goto L_1DA;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, idx_240889, false);
    bool idx_240881 = MechanismTrigger->DeactivateTrigger();
    ExtinguishFlame();
L_1DA:
    return;
}
