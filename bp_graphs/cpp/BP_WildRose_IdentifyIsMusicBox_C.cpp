// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WildRose_IdentifyIsMusicBox_C::OnBegin (40 bytes)
void BP_WildRose_IdentifyIsMusicBox_C::OnBegin()
{
    ExecuteUbergraph_BP_WildRose_IdentifyIsMusicBox();
    return;
}

// Recovered Kismet: BP_WildRose_IdentifyIsMusicBox_C::ExecuteUbergraph_BP_WildRose_IdentifyIsMusicBox (267 bytes)
void BP_WildRose_IdentifyIsMusicBox_C::ExecuteUbergraph_BP_WildRose_IdentifyIsMusicBox()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_108;
    auto CallFunc_GetItemType_ReturnValue = K2Node_DynamicCast_AsItem_Info->this->GetItemType();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetItemType_ReturnValue;
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
L_108:
    return;
}
