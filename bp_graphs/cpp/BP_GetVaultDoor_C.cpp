// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GetVaultDoor_C::OnBeginCustom (123 bytes)
void BP_GetVaultDoor_C::OnBeginCustom()
{
    PuzzleVault* K2Node_DynamicCast_AsPuzzle_Vault = Cast<PuzzleVault*>(Vault);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsPuzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_4F;
L_4F:
    K2Node_DynamicCast_AsPuzzle_Vault = K2Node_DynamicCast_AsPuzzle_Vault;
    return;
}

// Recovered Kismet: BP_GetVaultDoor_C::OnBegin (40 bytes)
void BP_GetVaultDoor_C::OnBegin()
{
    idx:286136();
    return;
}

// Recovered Kismet: BP_GetVaultDoor_C::fn_idx_286136 (331 bytes)
void BP_GetVaultDoor_C::fn_idx_286136()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetService_ReturnValue = this->GetService(_null_);
    _null_* idx_286073 = Cast<_null_*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_286073);
    if (!K2Node_DynamicCast_bSuccess) goto L_148;
    auto idx_286069 = idx_286073->();
    InteractableObject* idx_286122 = Cast<InteractableObject*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_286122);
    if (!K2Node_DynamicCast_bSuccess2) goto L_148;
L_148:
    return;
}
