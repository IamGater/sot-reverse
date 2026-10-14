// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnShroudbreakerGem_StarsOfAThief_C::OnBegin (40 bytes)
void BP_SpawnShroudbreakerGem_StarsOfAThief_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnShroudbreakerGem_StarsOfAThief();
    return;
}

// Recovered Kismet: BP_SpawnShroudbreakerGem_StarsOfAThief_C::OnItemPickedUp (22 bytes)
void BP_SpawnShroudbreakerGem_StarsOfAThief_C::OnItemPickedUp()
{
    ExecuteUbergraph_BP_SpawnShroudbreakerGem_StarsOfAThief();
    return;
}

// Recovered Kismet: BP_SpawnShroudbreakerGem_StarsOfAThief_C::ExecuteUbergraph_BP_SpawnShroudbreakerGem_StarsOfAThief (600 bytes)
void BP_SpawnShroudbreakerGem_StarsOfAThief_C::ExecuteUbergraph_BP_SpawnShroudbreakerGem_StarsOfAThief()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    PuzzleVault* idx_284099 = Cast<PuzzleVault*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_284099);
    if (!K2Node_DynamicCast_bSuccess) goto L_255;
    FTransform CallFunc_GetPlinthItemSpawnTransform_ReturnValue = idx_284099->GetPlinthItemSpawnTransform();
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_MakeTransform_ReturnValue;
    auto idx_283603 = this->SpawnItem(ShroudbreakerGem, CallFunc_ComposeTransforms_ReturnValue, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(idx_283603);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess2) goto L_255;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    this->SignalComplete();
L_255:
    return;
}
