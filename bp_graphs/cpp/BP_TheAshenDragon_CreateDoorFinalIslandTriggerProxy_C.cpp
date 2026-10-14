// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy_C::OnBegin (40 bytes)
void BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy_C::Spawned (40 bytes)
void BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy_C::Spawned()
{
    ExecuteUbergraph_BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy_C::ExecuteUbergraph_BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy (417 bytes)
void BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy_C::ExecuteUbergraph_BP_TheAshenDragon_CreateDoorFinalIslandTriggerProxy()
{
    BP_TheAshenDragon_QuestParicipantDoorTriggerVolume_C* idx_281465 = Cast<BP_TheAshenDragon_QuestParicipantDoorTriggerVolume_C*>(K2Node_CustomEvent_Actor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281465);
    if (!K2Node_DynamicCast_bSuccess) goto L_AA;
    this->GetVariables(idx_281459);
    auto idx_281459 = idx_281459;
    UBlueprintStepBase::SetVariables(idx_281459);
    this->SignalComplete();
L_AA:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    UBlueprintStepBase::SpawnPhasedActorAsync(ProxyClass, CallFunc_GetTransform_ReturnValue, UniqueObjectNameForCooking_OutputDelegate);
    return;
}
