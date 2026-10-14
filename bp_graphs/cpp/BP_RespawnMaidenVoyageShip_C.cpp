// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RespawnMaidenVoyageShip_C::OnBegin (40 bytes)
void BP_RespawnMaidenVoyageShip_C::OnBegin()
{
    ExecuteUbergraph_BP_RespawnMaidenVoyageShip();
    return;
}

// Recovered Kismet: BP_RespawnMaidenVoyageShip_C::OnShipSunk (40 bytes)
void BP_RespawnMaidenVoyageShip_C::OnShipSunk()
{
    ExecuteUbergraph_BP_RespawnMaidenVoyageShip();
    return;
}

// Recovered Kismet: BP_RespawnMaidenVoyageShip_C::OnEnd (22 bytes)
void BP_RespawnMaidenVoyageShip_C::OnEnd()
{
    ExecuteUbergraph_BP_RespawnMaidenVoyageShip();
    return;
}

// Recovered Kismet: BP_RespawnMaidenVoyageShip_C::ExecuteUbergraph_BP_RespawnMaidenVoyageShip (564 bytes)
void BP_RespawnMaidenVoyageShip_C::ExecuteUbergraph_BP_RespawnMaidenVoyageShip()
{
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    UBlueprintStepBase::GetCrewIds(idx_283139);
    bool idx_283140 = UCrewFunctions::QueueNewShipForRespawnAndSetCrewSpawnLocation(CallFunc_GetGameState_ReturnValue2, CallFunc_Array_Get_Item);
    if (!idx_283144) goto L_15E;
L_15E:
    bool idx_283144 = true;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetGameState_ReturnValue3 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue3);
    return;
}
