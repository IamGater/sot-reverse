// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetTrapdoorLock_MaidenVoyage_C::OnBeginCustom (189 bytes)
void BP_SetTrapdoorLock_MaidenVoyage_C::OnBeginCustom()
{
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = Lock->GetComponentInterfaceByClass(LockableInterface);
    TScriptInterface<ULockableInterface> UniqueObjectNameForCooking_AsLockable_Interface = TScriptInterface<ULockableInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsLockable_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_B0;
L_B0:
    this->SignalComplete();
    return;
}

// Recovered Kismet: BP_SetTrapdoorLock_MaidenVoyage_C::OnBegin (40 bytes)
void BP_SetTrapdoorLock_MaidenVoyage_C::OnBegin()
{
    ExecuteUbergraph_BP_SetTrapdoorLock_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_SetTrapdoorLock_MaidenVoyage_C::ExecuteUbergraph_BP_SetTrapdoorLock_MaidenVoyage (227 bytes)
void BP_SetTrapdoorLock_MaidenVoyage_C::ExecuteUbergraph_BP_SetTrapdoorLock_MaidenVoyage()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = CallFunc_GetVariables_OutStruct->GetComponentInterfaceByClass(LockableInterface);
    TScriptInterface<ULockableInterface> UniqueObjectNameForCooking_AsLockable_Interface = TScriptInterface<ULockableInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsLockable_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_D6;
L_D6:
    this->SignalComplete();
    return;
}
