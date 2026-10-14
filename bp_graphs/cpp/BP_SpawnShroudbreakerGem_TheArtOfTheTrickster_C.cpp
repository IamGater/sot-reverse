// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C::OnBegin (40 bytes)
void BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnShroudbreakerGem_TheArtOfTheTrickster();
    return;
}

// Recovered Kismet: BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C::OnItemPickedUp (22 bytes)
void BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C::OnItemPickedUp()
{
    ExecuteUbergraph_BP_SpawnShroudbreakerGem_TheArtOfTheTrickster();
    return;
}

// Recovered Kismet: BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C::ExecuteUbergraph_BP_SpawnShroudbreakerGem_TheArtOfTheTrickster (610 bytes)
void BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C::ExecuteUbergraph_BP_SpawnShroudbreakerGem_TheArtOfTheTrickster()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    PuzzleVault* K2Node_DynamicCast_AsPuzzle_Vault = Cast<PuzzleVault*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsPuzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_25F;
    auto CallFunc_GetTransform_ReturnValue = K2Node_DynamicCast_AsPuzzle_Vault->this->GetTransform();
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_MakeTransform_ReturnValue;
    auto CallFunc_SpawnItem_ReturnValue = this->SpawnItem(ShroudbreakerGem, CallFunc_ComposeTransforms_ReturnValue, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess2) goto L_25F;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    this->SignalComplete();
L_25F:
    return;
}
