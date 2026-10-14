// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RemoveBuriedActor_C::OnBeginCustom (281 bytes)
void BP_RemoveBuriedActor_C::OnBeginCustom()
{
    auto CallFunc_GetService_ReturnValue = this->GetService(BuryingTaleQuestService);
    BuryingTaleQuestService* idx_282591 = Cast<BuryingTaleQuestService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282591);
    if (!K2Node_DynamicCast_bSuccess) goto L_A4;
    this->SignalComplete();
L_A4:
    return;
}
