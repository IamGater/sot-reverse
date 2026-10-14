// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_InitialiseMedallionLockMechanism_C::OnBegin (40 bytes)
void BP_Shroudbreaker_InitialiseMedallionLockMechanism_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_InitialiseMedallionLockMechanism();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_InitialiseMedallionLockMechanism_C::ExecuteUbergraph_BP_Shroudbreaker_InitialiseMedallionLockMechanism (662 bytes)
void BP_Shroudbreaker_InitialiseMedallionLockMechanism_C::ExecuteUbergraph_BP_Shroudbreaker_InitialiseMedallionLockMechanism()
{
L_A:
    this->GetVariables(idx_227630);
    idx_229474* idx_229481 = Cast<idx_229474*>(idx_227630);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_229481);
    if (!K2Node_DynamicCast_bSuccess) goto L_1DB;
    this->GetVariables(idx_227631);
    idx_229472* idx_229480 = Cast<idx_229472*>(idx_227631);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_229480);
    if (!K2Node_DynamicCast_bSuccess2) goto L_A;
    this->GetVariables(idx_229475);
    this->SignalComplete();
L_1DB:
    return;
}
