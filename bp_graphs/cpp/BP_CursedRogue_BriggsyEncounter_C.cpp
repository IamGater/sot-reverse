// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_BriggsyEncounter_C::TriggerEventProxyBroadcast (310 bytes)
void BP_CursedRogue_BriggsyEncounter_C::TriggerEventProxyBroadcast()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* idx_283436 = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283436);
    if (!K2Node_DynamicCast_bSuccess) goto L_94;
L_94:
    return;
}

// Recovered Kismet: BP_CursedRogue_BriggsyEncounter_C::OnSpawn (40 bytes)
void BP_CursedRogue_BriggsyEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_CursedRogue_BriggsyEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_BriggsyEncounter_C::OnDespawn (58 bytes)
void BP_CursedRogue_BriggsyEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_CursedRogue_BriggsyEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_BriggsyEncounter_C::OnPickup (22 bytes)
void BP_CursedRogue_BriggsyEncounter_C::OnPickup()
{
    ExecuteUbergraph_BP_CursedRogue_BriggsyEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_BriggsyEncounter_C::ExecuteUbergraph_BP_CursedRogue_BriggsyEncounter (1221 bytes)
void BP_CursedRogue_BriggsyEncounter_C::ExecuteUbergraph_BP_CursedRogue_BriggsyEncounter()
{
    TriggerEventProxyBroadcast();
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(K2Node_Event_Pawn, BP_BriggsysSkull_Desc_C, true, true);
    UBlueprintStepBase::ChangeCompassTargetByActor(CallFunc_SpawnDroppedItem_ReturnValue);
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_4C2;
    K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    FAIEncounterSpecification idx_283642 = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = idx_283642;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue3) goto L_4C2;
    UBlueprintStepBase::ChangeCompassTargetByActor(K2Node_Event_Pawn2);
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_36E;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_4C2;
    K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_4C2;
    UBlueprintSpawnAIStepBase::OnBattleWon();
L_36E:
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter3 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter3);
    if (!K2Node_DynamicCast_bSuccess3) goto L_4C2;
    K2Node_DynamicCast_AsAthena_AICharacter3 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter3);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter3->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_4C2;
    UBlueprintStepBase::ChangeCompassTargetByActor(idx_283643);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::ChangeCompassTargetByActor(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
L_4C2:
    return;
}
