// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LegendaryStoryteller_IdentifyIsCrownKey_C::OnBegin (40 bytes)
void BP_LegendaryStoryteller_IdentifyIsCrownKey_C::OnBegin()
{
    ExecuteUbergraph_BP_LegendaryStoryteller_IdentifyIsCrownKey();
    return;
}

// Recovered Kismet: BP_LegendaryStoryteller_IdentifyIsCrownKey_C::ExecuteUbergraph_BP_LegendaryStoryteller_IdentifyIsCrownKey (267 bytes)
void BP_LegendaryStoryteller_IdentifyIsCrownKey_C::ExecuteUbergraph_BP_LegendaryStoryteller_IdentifyIsCrownKey()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_108;
    auto idx_283934 = K2Node_DynamicCast_AsItem_Info->this->GetItemType();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = idx_283934;
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
L_108:
    return;
}
