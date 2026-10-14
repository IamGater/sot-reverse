// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_WaitForCrateAllocation_C::OnBeginCustom (58 bytes)
void BP_CT_Fauna_WaitForCrateAllocation_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForCrateAllocation();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForCrateAllocation_C::OnAllocated (22 bytes)
void BP_CT_Fauna_WaitForCrateAllocation_C::OnAllocated()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForCrateAllocation();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForCrateAllocation_C::ExecuteUbergraph_BP_CT_Fauna_WaitForCrateAllocation (475 bytes)
void BP_CT_Fauna_WaitForCrateAllocation_C::ExecuteUbergraph_BP_CT_Fauna_WaitForCrateAllocation()
{
    this->SignalComplete();
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestMerchantContractsService);
    TaleQuestMerchantContractsService* idx_282456 = Cast<TaleQuestMerchantContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282456);
    if (!K2Node_DynamicCast_bSuccess) goto L_1D8;
    auto idx_282429 = idx_282456->this->GetContract(idx_282435);
    BP_PromptSequencer_FaunaContract_C* idx_282465 = Cast<BP_PromptSequencer_FaunaContract_C*>(idx_282508);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_282465);
    if (!K2Node_DynamicCast_bSuccess2) goto L_1D8;
    idx_282465 = idx_282465;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282465->this->FlushNetDormancy();
L_1D8:
    return;
}
