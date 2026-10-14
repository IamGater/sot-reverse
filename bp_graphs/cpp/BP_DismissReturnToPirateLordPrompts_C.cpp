// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DismissReturnToPirateLordPrompts_C::OnBeginCustom (128 bytes)
void BP_DismissReturnToPirateLordPrompts_C::OnBeginCustom()
{
    BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C* idx_282824 = Cast<BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C*>(Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282824);
    if (!K2Node_DynamicCast_bSuccess) goto L_7D;
    this->SignalComplete();
L_7D:
    return;
}
