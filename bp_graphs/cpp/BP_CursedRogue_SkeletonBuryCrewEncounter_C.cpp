// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_SkeletonBuryCrewEncounter_C::TriggerEventProxyBroadcast (318 bytes)
void BP_CursedRogue_SkeletonBuryCrewEncounter_C::TriggerEventProxyBroadcast()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* idx_283436 = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283436);
    if (!K2Node_DynamicCast_bSuccess) goto L_94;
L_94:
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonBuryCrewEncounter_C::OnDespawn (58 bytes)
void BP_CursedRogue_SkeletonBuryCrewEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonBuryCrewEncounter_C::OnSpawn (40 bytes)
void BP_CursedRogue_SkeletonBuryCrewEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonBuryCrewEncounter_C::ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter (1352 bytes)
void BP_CursedRogue_SkeletonBuryCrewEncounter_C::ExecuteUbergraph_BP_CursedRogue_SkeletonBuryCrewEncounter()
{
    UBlueprintSpawnAIStepBase::OnBattleWon();
L_14:
    auto CallFunc_GreaterEqual_IntInt_ReturnValue = idx_283479;
    if (!CallFunc_GreaterEqual_IntInt_ReturnValue) goto L_545;
    this->SignalComplete();
L_57:
    auto Target = K2Node_Event_Pawn2;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_2B4;
    auto CallFunc_Add_IntInt_ReturnValue2 = idx_283479;
    auto idx_283479 = CallFunc_Add_IntInt_ReturnValue2;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_57;
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue3;
    if (!CallFunc_BooleanOR_ReturnValue) goto L_14;
    TriggerEventProxyBroadcast();
L_2B4:
    auto CallFunc_Subtract_IntInt_ReturnValue = Spawned;
    auto Spawned = CallFunc_Subtract_IntInt_ReturnValue;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_493;
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue4;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_449;
L_449:
    auto CallFunc_Add_IntInt_ReturnValue = Spawned;
    Spawned = CallFunc_Add_IntInt_ReturnValue;
L_493:
L_545:
    return;
}
