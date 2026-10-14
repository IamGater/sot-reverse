// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_EnchantedSpyglass_C::UserConstructionScript (3 bytes)
void BP_EnchantedSpyglass_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_EnchantedSpyglass_C::ReceiveBeginPlay (22 bytes)
void BP_EnchantedSpyglass_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_EnchantedSpyglass();
    return;
}

// Recovered Kismet: BP_EnchantedSpyglass_C::OnIsWielded (40 bytes)
void BP_EnchantedSpyglass_C::OnIsWielded()
{
    ExecuteUbergraph_BP_EnchantedSpyglass();
    return;
}

// Recovered Kismet: BP_EnchantedSpyglass_C::SpyGlassRaisedFirstPerson (40 bytes)
void BP_EnchantedSpyglass_C::SpyGlassRaisedFirstPerson()
{
    ExecuteUbergraph_BP_EnchantedSpyglass();
    return;
}

// Recovered Kismet: BP_EnchantedSpyglass_C::ReceiveEndPlay (40 bytes)
void BP_EnchantedSpyglass_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_EnchantedSpyglass();
    return;
}

// Recovered Kismet: BP_EnchantedSpyglass_C::ExecuteUbergraph_BP_EnchantedSpyglass (795 bytes)
void BP_EnchantedSpyglass_C::ExecuteUbergraph_BP_EnchantedSpyglass()
{
    this->ReceiveBeginPlay();
    bool CallFunc_IsServer_ReturnValue3 = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue3) goto L_52;
L_52:
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_DE;
L_DE:
    auto CallFunc_Not_PreBool_ReturnValue = K2Node_Event_IsRaised;
    if (!K2Node_CustomEvent_WieldedEvent) goto L_1F0;
    bool CallFunc_GetIsFirstPerson_ReturnValue = AWieldableItem::GetIsFirstPerson();
    if (!CallFunc_GetIsFirstPerson_ReturnValue) goto L_23F;
L_1F0:
L_23F:
    ASpyglass::SpyGlassRaisedFirstPerson(K2Node_Event_IsRaised);
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
    bool CallFunc_IsServer_ReturnValue2 = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue2) goto L_2E6;
L_2E6:
    return;
}
