// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_KillGoldHoarder_C::OnBegin (40 bytes)
void BP_KillGoldHoarder_C::OnBegin()
{
    idx:286128();
    return;
}

// Recovered Kismet: BP_KillGoldHoarder_C::fn_idx_286128 (172 bytes)
void BP_KillGoldHoarder_C::fn_idx_286128()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    TreasureRoom* idx_286129 = Cast<TreasureRoom*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286129);
    if (!K2Node_DynamicCast_bSuccess) goto L_A9;
L_A9:
    return;
}
