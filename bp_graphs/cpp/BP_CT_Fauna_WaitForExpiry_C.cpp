// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_WaitForExpiry_C::OnBeginCustom (40 bytes)
void BP_CT_Fauna_WaitForExpiry_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForExpiry();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForExpiry_C::CustomEvent_0 (22 bytes)
void BP_CT_Fauna_WaitForExpiry_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForExpiry();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForExpiry_C::ExecuteUbergraph_BP_CT_Fauna_WaitForExpiry (261 bytes)
void BP_CT_Fauna_WaitForExpiry_C::ExecuteUbergraph_BP_CT_Fauna_WaitForExpiry()
{
    this->SignalComplete();
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestMerchantContractsService);
    TaleQuestMerchantContractsService* idx_282456 = Cast<TaleQuestMerchantContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282456);
    if (!K2Node_DynamicCast_bSuccess) goto L_102;
    auto idx_282429 = idx_282456->this->GetContract(idx_282518);
L_102:
    return;
}
