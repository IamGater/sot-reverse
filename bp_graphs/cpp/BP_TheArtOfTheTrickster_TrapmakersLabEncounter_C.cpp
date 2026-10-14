// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::TriggerProxyBroadcast (336 bytes)
void BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::TriggerProxyBroadcast()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_94;
L_94:
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::SetNoteInVariables (69 bytes)
void BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::SetNoteInVariables()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::SetTotemInQuestVariables (97 bytes)
void BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::SetTotemInQuestVariables()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::OnSpawn (40 bytes)
void BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::OnDespawn (58 bytes)
void BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter (1061 bytes)
void BP_TheArtOfTheTrickster_TrapmakersLabEncounter_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_TrapmakersLabEncounter()
{
    TriggerProxyBroadcast();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(K2Node_Event_Pawn, CallFunc_GetVariables_OutStruct, true, true);
    SetTotemInQuestVariables();
    auto CallFunc_GetTransform_ReturnValue = K2Node_Event_Pawn->this->GetTransform();
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_GetTransform_ReturnValue;
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(DroppedNoteClass, CallFunc_ComposeTransforms_ReturnValue);
    SetNoteInVariables(CallFunc_SpawnPhasedActor_ReturnValue);
    this->SignalComplete();
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_422;
    K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_422;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_422;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_422;
    K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_422;
    UBlueprintSpawnAIStepBase::OnBattleWon();
L_422:
    return;
}
