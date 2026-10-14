// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_WaitForDelivery_C::OnBeginCustom (58 bytes)
void BP_CT_Fauna_WaitForDelivery_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForDelivery();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForDelivery_C::CustomEvent_0 (58 bytes)
void BP_CT_Fauna_WaitForDelivery_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForDelivery();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForDelivery_C::ExecuteUbergraph_BP_CT_Fauna_WaitForDelivery (521 bytes)
void BP_CT_Fauna_WaitForDelivery_C::ExecuteUbergraph_BP_CT_Fauna_WaitForDelivery()
{
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestMerchantContractsService);
    TaleQuestMerchantContractsService* idx_282456 = Cast<TaleQuestMerchantContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282456);
    if (!K2Node_DynamicCast_bSuccess) goto L_206;
    auto idx_282429 = idx_282456->this->GetContract(idx_282518);
    auto idx_282532 = this->GetService(TaleQuestMapService);
    TaleQuestMapService* idx_282536 = Cast<TaleQuestMapService*>(idx_282532);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_282536);
    if (!K2Node_DynamicCast_bSuccess2) goto L_206;
    auto idx_282537 = idx_282537;
    idx_282537 = idx_282537;
L_206:
    return;
}
