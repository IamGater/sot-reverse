// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Automation_InteractWithObject_C::OnBeginCustom (40 bytes)
void BP_Automation_InteractWithObject_C::OnBeginCustom()
{
    idx:286120();
    return;
}

// Recovered Kismet: BP_Automation_InteractWithObject_C::fn_idx_286120 (403 bytes)
void BP_Automation_InteractWithObject_C::fn_idx_286120()
{
L_A:
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_286073 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_286073);
    if (!K2Node_DynamicCast_bSuccess2) goto L_A;
    auto idx_286069 = idx_286073->();
    InteractableObject* idx_286122 = Cast<InteractableObject*>(idx_286121);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286122);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->SignalComplete();
    return;
}
