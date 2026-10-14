// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnItem_LegendaryStoryteller_C::OnBegin (40 bytes)
void BP_SpawnItem_LegendaryStoryteller_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnItem_LegendaryStoryteller();
    return;
}

// Recovered Kismet: BP_SpawnItem_LegendaryStoryteller_C::ExecuteUbergraph_BP_SpawnItem_LegendaryStoryteller (504 bytes)
void BP_SpawnItem_LegendaryStoryteller_C::ExecuteUbergraph_BP_SpawnItem_LegendaryStoryteller()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(CallFunc_GetVariables_OutStruct, CallFunc_GetTransform_ReturnValue, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    return;
}
