// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnBriggsyChest_LegendaryStoryteller_C::OnBegin (40 bytes)
void BP_SpawnBriggsyChest_LegendaryStoryteller_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller();
    return;
}

// Recovered Kismet: BP_SpawnBriggsyChest_LegendaryStoryteller_C::OnItemPickedUp (22 bytes)
void BP_SpawnBriggsyChest_LegendaryStoryteller_C::OnItemPickedUp()
{
    ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller();
    return;
}

// Recovered Kismet: BP_SpawnBriggsyChest_LegendaryStoryteller_C::ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller (338 bytes)
void BP_SpawnBriggsyChest_LegendaryStoryteller_C::ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    auto idx_283603 = this->SpawnItem(idx_283953, CallFunc_GetTransform_ReturnValue, false, false);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(idx_283603);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_14F;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    this->SignalComplete();
L_14F:
    return;
}
