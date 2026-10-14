// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DeactivateMurk_C::OnBeginCustom (224 bytes)
void BP_DeactivateMurk_C::OnBeginCustom()
{
    idx_282746* idx_282748 = Cast<idx_282746*>(Murk);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282748);
    if (!K2Node_DynamicCast_bSuccess) goto L_7E;
    this->SignalComplete();
L_7E:
    return;
}
