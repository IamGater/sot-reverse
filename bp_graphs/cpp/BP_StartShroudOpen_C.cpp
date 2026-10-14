// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_StartShroudOpen_C::OnBeginCustom (220 bytes)
void BP_StartShroudOpen_C::OnBeginCustom()
{
    idx_283249* idx_283252 = Cast<idx_283249*>(shroud);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283252);
    if (!K2Node_DynamicCast_bSuccess) goto L_82;
    this->SignalComplete();
L_82:
    return;
}
