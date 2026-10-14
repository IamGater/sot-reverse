// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AILargeShip_StandardHull_Damage_C::UserConstructionScript (13 bytes)
void BP_AILargeShip_StandardHull_Damage_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_AILargeShip_StandardHull_Damage_C::ReceiveBeginPlay (22 bytes)
void BP_AILargeShip_StandardHull_Damage_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage();
    return;
}

// Recovered Kismet: BP_AILargeShip_StandardHull_Damage_C::ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage (202 bytes)
void BP_AILargeShip_StandardHull_Damage_C::ExecuteUbergraph_BP_AILargeShip_StandardHull_Damage()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_48;
L_48:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(BaseDamageMask);
    if (!CallFunc_IsValid_ReturnValue) goto L_C7;
    this->ReceiveBeginPlay();
L_C7:
    return;
}
