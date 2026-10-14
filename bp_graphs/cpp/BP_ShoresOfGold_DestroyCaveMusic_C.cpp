// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ShoresOfGold_DestroyCaveMusic_C::OnBegin (40 bytes)
void BP_ShoresOfGold_DestroyCaveMusic_C::OnBegin()
{
    idx:285101();
    return;
}

// Recovered Kismet: BP_ShoresOfGold_DestroyCaveMusic_C::fn_idx_285101 (161 bytes)
void BP_ShoresOfGold_DestroyCaveMusic_C::fn_idx_285101()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_94;
L_94:
    this->SignalComplete();
    return;
}
