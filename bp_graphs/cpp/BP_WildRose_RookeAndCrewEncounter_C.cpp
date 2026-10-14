// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WildRose_RookeAndCrewEncounter_C::TriggerEventProxyBroadcast (310 bytes)
void BP_WildRose_RookeAndCrewEncounter_C::TriggerEventProxyBroadcast()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_94;
L_94:
    return;
}

// Recovered Kismet: BP_WildRose_RookeAndCrewEncounter_C::SetRightPendant (69 bytes)
void BP_WildRose_RookeAndCrewEncounter_C::SetRightPendant()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    return;
}

// Recovered Kismet: BP_WildRose_RookeAndCrewEncounter_C::OnSpawn (40 bytes)
void BP_WildRose_RookeAndCrewEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter();
    return;
}

// Recovered Kismet: BP_WildRose_RookeAndCrewEncounter_C::OnDespawn (58 bytes)
void BP_WildRose_RookeAndCrewEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter();
    return;
}

// Recovered Kismet: BP_WildRose_RookeAndCrewEncounter_C::OnSetSpawnLocationActor (40 bytes)
void BP_WildRose_RookeAndCrewEncounter_C::OnSetSpawnLocationActor()
{
    ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter();
    return;
}

// Recovered Kismet: BP_WildRose_RookeAndCrewEncounter_C::ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter (1171 bytes)
void BP_WildRose_RookeAndCrewEncounter_C::ExecuteUbergraph_BP_WildRose_RookeAndCrewEncounter()
{
    UBlueprintStepBase::BroadcastEvent();
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(K2Node_Event_Pawn, BP_LoversPendant_Right_C, true, true);
    SetRightPendant(CallFunc_SpawnDroppedItem_ReturnValue);
    this->SignalComplete();
    UBlueprintStepBase::ChangeCompassTargetByActor(idx_284312);
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter3 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter3);
    if (!K2Node_DynamicCast_bSuccess3) goto L_490;
    K2Node_DynamicCast_AsAthena_AICharacter3 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter3);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue3 = K2Node_DynamicCast_AsAthena_AICharacter3->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_GetAIEncounterSpec_ReturnValue3;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue3) goto L_490;
    UBlueprintStepBase::ChangeCompassTargetByActor(K2Node_Event_Pawn2);
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_35F;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_490;
    K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_490;
    UBlueprintSpawnAIStepBase::OnBattleWon();
L_35F:
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_490;
    K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_490;
    UBlueprintStepBase::ChangeCompassTargetByActor(idx_284312);
    auto idx_284312 = K2Node_Event_Actor;
L_490:
    return;
}
