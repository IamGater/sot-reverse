// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_AddContract_C::OnBeginCustom (656 bytes)
void BP_CT_Fauna_AddContract_C::OnBeginCustom()
{
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestMerchantContractsService);
    TaleQuestMerchantContractsService* idx_282456 = Cast<TaleQuestMerchantContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282456);
    if (!K2Node_DynamicCast_bSuccess) goto L_259;
    auto idx_282459 = idx_282459;
    auto idx_282457 = idx_282457;
    idx_282457 = idx_282457;
    auto idx_282458 = idx_282458;
    idx_282458 = idx_282458;
    idx_282458 = idx_282458;
    idx_282458 = idx_282458;
    auto idx_282460 = idx_282460;
    idx_282460 = idx_282460;
    idx_282460 = idx_282460;
    idx_282460 = idx_282460;
    auto idx_282396 = idx_282456->this->AddContract(K2Node_MakeArray_Array2, idx_282455);
L_259:
    return;
}
