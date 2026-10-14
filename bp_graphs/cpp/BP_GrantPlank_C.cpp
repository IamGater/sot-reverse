// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GrantPlank_C::OnBegin (40 bytes)
void BP_GrantPlank_C::OnBegin()
{
    ExecuteUbergraph_BP_GrantPlank();
    return;
}

// Recovered Kismet: BP_GrantPlank_C::ExecuteUbergraph_BP_GrantPlank (242 bytes)
void BP_GrantPlank_C::ExecuteUbergraph_BP_GrantPlank()
{
L_A:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetService_ReturnValue = this->GetService(TaleQuestPlankService);
    TaleQuestPlankService* idx_283874 = Cast<TaleQuestPlankService*>(CallFunc_GetService_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283874);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    return;
}
