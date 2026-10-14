// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Fauna_WaitForCollection_C::OnBeginCustom (58 bytes)
void BP_CT_Fauna_WaitForCollection_C::OnBeginCustom()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForCollection();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForCollection_C::CustomEvent_0 (76 bytes)
void BP_CT_Fauna_WaitForCollection_C::CustomEvent_0()
{
    ExecuteUbergraph_BP_CT_Fauna_WaitForCollection();
    return;
}

// Recovered Kismet: BP_CT_Fauna_WaitForCollection_C::ExecuteUbergraph_BP_CT_Fauna_WaitForCollection (671 bytes)
void BP_CT_Fauna_WaitForCollection_C::ExecuteUbergraph_BP_CT_Fauna_WaitForCollection()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(idx_282519);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess3) goto L_142;
    auto idx_282521 = idx_282521;
    UBlueprintStepBase::SetVariables(idx_282521);
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282302->this->FlushNetDormancy();
    auto idx_282302 = idx_282302;
L_142:
    this->SignalComplete();
    BP_PromptSequencer_FaunaContract_C* idx_282465 = Cast<BP_PromptSequencer_FaunaContract_C*>(idx_282508);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282465);
    if (!K2Node_DynamicCast_bSuccess) goto L_29C;
    idx_282302 = idx_282465;
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestMerchantContractsService);
    TaleQuestMerchantContractsService* idx_282456 = Cast<TaleQuestMerchantContractsService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_282456);
    if (!K2Node_DynamicCast_bSuccess2) goto L_29C;
    auto idx_282429 = idx_282456->this->GetContract(idx_282518);
L_29C:
    return;
}
