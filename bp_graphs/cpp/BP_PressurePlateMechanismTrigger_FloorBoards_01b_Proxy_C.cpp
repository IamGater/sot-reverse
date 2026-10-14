// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy_C::UserConstructionScript (3 bytes)
void BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy_C::ApplyInstanceProperties (40 bytes)
void BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy_C::ApplyInstanceProperties()
{
    ExecuteUbergraph_BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy_C::ExecuteUbergraph_BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy (349 bytes)
void BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy_C::ExecuteUbergraph_BP_PressurePlateMechanismTrigger_FloorBoards_01b_Proxy()
{
    UMechanismElementProxyInterface::ApplyInstanceProperties(K2Node_Event_Instance);
    idx_242428* idx_242433 = Cast<idx_242428*>(K2Node_Event_Instance);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_242433);
    if (!K2Node_DynamicCast_bSuccess) goto L_15A;
    FTransform idx_242172 = Box->GetRelativeTransform();
    FVector idx_242173 = Box->GetUnscaledBoxExtent();
L_15A:
    return;
}
