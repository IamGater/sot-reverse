// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetLairLock_C::OnBeginCustom (189 bytes)
void BP_SetLairLock_C::OnBeginCustom()
{
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = Lock->GetComponentInterfaceByClass(LockableInterface);
    TScriptInterface<ULockableInterface> idx_282262 = TScriptInterface<ULockableInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_282262);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_B0;
L_B0:
    this->SignalComplete();
    return;
}
