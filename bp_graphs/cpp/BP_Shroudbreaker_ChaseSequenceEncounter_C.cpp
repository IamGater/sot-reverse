// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_ChaseSequenceEncounter_C::OnBegin (40 bytes)
void BP_Shroudbreaker_ChaseSequenceEncounter_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_ChaseSequenceEncounter();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_ChaseSequenceEncounter_C::Broadcast Received (22 bytes)
void BP_Shroudbreaker_ChaseSequenceEncounter_C::Broadcast Received()
{
    ExecuteUbergraph_BP_Shroudbreaker_ChaseSequenceEncounter();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_ChaseSequenceEncounter_C::ExecuteUbergraph_BP_Shroudbreaker_ChaseSequenceEncounter (534 bytes)
void BP_Shroudbreaker_ChaseSequenceEncounter_C::ExecuteUbergraph_BP_Shroudbreaker_ChaseSequenceEncounter()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto Target = CallFunc_GetVariables_OutStruct;
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(Class, CallFunc_MakeTransform_ReturnValue, true);
    BP_TaleDistanceTrackerProxy_C* idx_283430 = Cast<BP_TaleDistanceTrackerProxy_C*>(CallFunc_SpawnActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283430);
    if (!K2Node_DynamicCast_bSuccess) goto L_1B3;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = Target->K2_GetActorLocation();
L_1B3:
    return;
}
