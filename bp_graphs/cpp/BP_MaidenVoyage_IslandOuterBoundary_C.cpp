// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_IslandOuterBoundary_C::UserConstructionScript (3 bytes)
void BP_MaidenVoyage_IslandOuterBoundary_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandOuterBoundary_C::ReceiveBeginPlay (22 bytes)
void BP_MaidenVoyage_IslandOuterBoundary_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandOuterBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandOuterBoundary_C::OnOverlapEnd (76 bytes)
void BP_MaidenVoyage_IslandOuterBoundary_C::OnOverlapEnd()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandOuterBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandOuterBoundary_C::ReceiveEndPlay (40 bytes)
void BP_MaidenVoyage_IslandOuterBoundary_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_MaidenVoyage_IslandOuterBoundary();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_IslandOuterBoundary_C::ExecuteUbergraph_BP_MaidenVoyage_IslandOuterBoundary (477 bytes)
void BP_MaidenVoyage_IslandOuterBoundary_C::ExecuteUbergraph_BP_MaidenVoyage_IslandOuterBoundary()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(idx_279229);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1DA;
    bool idx_279246 = K2Node_DynamicCast_AsAthena_Player_Character->HasFinishedSpawning();
    if (!idx_279246) goto L_1DA;
    auto CallFunc_GetCurrentShip_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetCurrentShip();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetCurrentShip_ReturnValue);
    if (!CallFunc_IsValid_ReturnValue) goto L_193;
L_193:
L_1DA:
    return;
}
