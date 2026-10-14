// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Cargo_WaitForDelivery_C::OnBeginCustom (40 bytes)
void BP_CT_Cargo_WaitForDelivery_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Cargo_WaitForDelivery();
    return;
}

// Recovered Kismet: BP_CT_Cargo_WaitForDelivery_C::OnCompleted (22 bytes)
void BP_CT_Cargo_WaitForDelivery_C::OnCompleted()
{
    ExecuteUbergraph_BP_CT_Cargo_WaitForDelivery();
    return;
}

// Recovered Kismet: BP_CT_Cargo_WaitForDelivery_C::ExecuteUbergraph_BP_CT_Cargo_WaitForDelivery (251 bytes)
void BP_CT_Cargo_WaitForDelivery_C::ExecuteUbergraph_BP_CT_Cargo_WaitForDelivery()
{
    this->SignalComplete();
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestCargoRunContractsService);
    TaleQuestCargoRunContractsService* idx_228755 = Cast<TaleQuestCargoRunContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_228755);
    if (!K2Node_DynamicCast_bSuccess) goto L_F8;
    auto idx_228880 = idx_228755->this->GetContract(idx_228886);
L_F8:
    return;
}
