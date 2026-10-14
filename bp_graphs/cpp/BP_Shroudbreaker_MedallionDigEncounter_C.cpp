// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_MedallionDigEncounter_C::OnDespawn (58 bytes)
void BP_Shroudbreaker_MedallionDigEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_MedallionDigEncounter_C::OnEnd (22 bytes)
void BP_Shroudbreaker_MedallionDigEncounter_C::OnEnd()
{
    ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_MedallionDigEncounter_C::ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter (230 bytes)
void BP_Shroudbreaker_MedallionDigEncounter_C::ExecuteUbergraph_BP_Shroudbreaker_MedallionDigEncounter()
{
    UBlueprintSpawnAIStepBase::OnBattleWon();
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = idx_283479;
    auto idx_283479 = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_EqualEqual_IntInt_ReturnValue = idx_283479;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_E3;
    UBlueprintSpawnAIStepBase::OnBattleWon();
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_E3;
L_E3:
    return;
}
