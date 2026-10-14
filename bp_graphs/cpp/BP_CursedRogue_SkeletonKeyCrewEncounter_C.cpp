// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_SkeletonKeyCrewEncounter_C::TriggerEventProxyBroadcast (318 bytes)
void BP_CursedRogue_SkeletonKeyCrewEncounter_C::TriggerEventProxyBroadcast()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* idx_283436 = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283436);
    if (!K2Node_DynamicCast_bSuccess) goto L_94;
L_94:
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonKeyCrewEncounter_C::OnDespawn (58 bytes)
void BP_CursedRogue_SkeletonKeyCrewEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonKeyCrewEncounter_C::ItemPickedUp (22 bytes)
void BP_CursedRogue_SkeletonKeyCrewEncounter_C::ItemPickedUp()
{
    ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonKeyCrewEncounter_C::OnSpawn (40 bytes)
void BP_CursedRogue_SkeletonKeyCrewEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter();
    return;
}

// Recovered Kismet: BP_CursedRogue_SkeletonKeyCrewEncounter_C::ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter (1272 bytes)
void BP_CursedRogue_SkeletonKeyCrewEncounter_C::ExecuteUbergraph_BP_CursedRogue_SkeletonKeyCrewEncounter()
{
L_A:
    auto Target = K2Node_Event_Pawn2;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_4F5;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(Target);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_2E4;
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue2;
    if (!CallFunc_BooleanOR_ReturnValue) goto L_4F5;
    TriggerEventProxyBroadcast();
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(Target, BP_SkeletonKey_ItemDesc_C, true, true);
    UBlueprintSpawnAIStepBase::OnBattleWon();
L_2E4:
    this->SignalComplete();
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_A;
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue4;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_4F5;
L_4F5:
    return;
}
