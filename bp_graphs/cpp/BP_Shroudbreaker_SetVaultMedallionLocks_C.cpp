// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SetVaultMedallionLocks_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SetVaultMedallionLocks_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SetVaultMedallionLocks();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SetVaultMedallionLocks_C::ExecuteUbergraph_BP_Shroudbreaker_SetVaultMedallionLocks (302 bytes)
void BP_Shroudbreaker_SetVaultMedallionLocks_C::ExecuteUbergraph_BP_Shroudbreaker_SetVaultMedallionLocks()
{
L_A:
    this->SignalComplete();
    this->GetVariables(idx_227630);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = idx_227630->GetComponentInterfaceByClass(LockableInterface);
    TScriptInterface<ULockableInterface> idx_230475 = TScriptInterface<ULockableInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_230475);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_A;
    return;
}
