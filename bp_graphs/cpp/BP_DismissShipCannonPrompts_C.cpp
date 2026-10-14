// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DismissShipCannonPrompts_C::OnBeginCustom (203 bytes)
void BP_DismissShipCannonPrompts_C::OnBeginCustom()
{
    BP_PromptActor_MaidenVoyage_UseShipCannon_C* idx_282829 = Cast<BP_PromptActor_MaidenVoyage_UseShipCannon_C*>(Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282829);
    if (!K2Node_DynamicCast_bSuccess) goto L_C8;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282829->this->FlushNetDormancy();
    idx_282829 = idx_282829;
    this->SignalComplete();
L_C8:
    return;
}
