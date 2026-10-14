// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Cargo_WaitForCollection_C::OnBeginCustom (40 bytes)
void BP_CT_Cargo_WaitForCollection_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Cargo_WaitForCollection();
    return;
}

// Recovered Kismet: BP_CT_Cargo_WaitForCollection_C::OnCollected (40 bytes)
void BP_CT_Cargo_WaitForCollection_C::OnCollected()
{
    ExecuteUbergraph_BP_CT_Cargo_WaitForCollection();
    return;
}

// Recovered Kismet: BP_CT_Cargo_WaitForCollection_C::ExecuteUbergraph_BP_CT_Cargo_WaitForCollection (327 bytes)
void BP_CT_Cargo_WaitForCollection_C::ExecuteUbergraph_BP_CT_Cargo_WaitForCollection()
{
    this->GetVariables(idx_227630);
    auto idx_227630 = idx_227630;
    UBlueprintStepBase::SetVariables(idx_227630);
    this->SignalComplete();
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestCargoRunContractsService);
    TaleQuestCargoRunContractsService* idx_228755 = Cast<TaleQuestCargoRunContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_228755);
    if (!K2Node_DynamicCast_bSuccess) goto L_144;
    auto idx_228880 = idx_228755->this->GetContract(idx_228886);
L_144:
    return;
}
