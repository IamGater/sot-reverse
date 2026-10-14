// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ActivateMurk_C::OnBeginCustom (224 bytes)
void BP_ActivateMurk_C::OnBeginCustom()
{
    idx_228905* idx_228907 = Cast<idx_228905*>(Murk);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_228907);
    if (!K2Node_DynamicCast_bSuccess) goto L_7E;
    this->SignalComplete();
L_7E:
    return;
}
