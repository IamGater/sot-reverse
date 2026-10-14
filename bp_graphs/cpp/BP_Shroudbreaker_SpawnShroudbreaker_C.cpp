// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SpawnShroudbreaker_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SpawnShroudbreaker_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SpawnShroudbreaker();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SpawnShroudbreaker_C::ExecuteUbergraph_BP_Shroudbreaker_SpawnShroudbreaker (657 bytes)
void BP_Shroudbreaker_SpawnShroudbreaker_C::ExecuteUbergraph_BP_Shroudbreaker_SpawnShroudbreaker()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    BP_PuzzleVault_C* K2Node_DynamicCast_AsBP_Puzzle_Vault = Cast<BP_PuzzleVault_C*>(CallFunc_GetVariables_OutStruct2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Puzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_28E;
    FTransform CallFunc_GetPlinthItemSpawnTransform_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetPlinthItemSpawnTransform();
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_GetPlinthItemSpawnTransform_ReturnValue;
    auto idx_283603 = this->SpawnItem(idx_283607, CallFunc_ComposeTransforms_ReturnValue, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(idx_283603);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess2) goto L_28E;
L_28E:
    return;
}
