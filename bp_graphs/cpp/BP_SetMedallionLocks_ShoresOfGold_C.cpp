// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetMedallionLocks_ShoresOfGold_C::OnBegin (40 bytes)
void BP_SetMedallionLocks_ShoresOfGold_C::OnBegin()
{
    ExecuteUbergraph_BP_SetMedallionLocks_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_SetMedallionLocks_ShoresOfGold_C::ExecuteUbergraph_BP_SetMedallionLocks_ShoresOfGold (227 bytes)
void BP_SetMedallionLocks_ShoresOfGold_C::ExecuteUbergraph_BP_SetMedallionLocks_ShoresOfGold()
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
