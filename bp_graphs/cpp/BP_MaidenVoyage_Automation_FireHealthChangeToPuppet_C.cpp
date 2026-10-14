// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_FireHealthChangeToPuppet_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_FireHealthChangeToPuppet_C::OnBegin()
{
    idx:286080();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_FireHealthChangeToPuppet_C::fn_idx_286080 (348 bytes)
void BP_MaidenVoyage_Automation_FireHealthChangeToPuppet_C::fn_idx_286080()
{
L_A:
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_286073 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286073);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    auto idx_286069 = idx_286073->();
    this->SignalComplete();
    return;
}
