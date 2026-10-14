// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip_C::OnBegin (40 bytes)
void BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip_C::ExecuteUbergraph_BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip (390 bytes)
void BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip_C::ExecuteUbergraph_BP_TheAshenDragon_CreatePlayerLeaveTriggerProxy_SinkingShip()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* idx_281491 = UBlueprintStepBase::SpawnPhasedActor(ProxyClass, CallFunc_GetTransform_ReturnValue);
    BP_TheAshenDragon_LeaveIslandTriggerVolume_C* idx_281520 = Cast<BP_TheAshenDragon_LeaveIslandTriggerVolume_C*>(idx_281491);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281520);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(idx_281459);
    auto idx_281459 = idx_281459;
    UBlueprintStepBase::SetVariables(idx_281459);
    this->SignalComplete();
    return;
}
