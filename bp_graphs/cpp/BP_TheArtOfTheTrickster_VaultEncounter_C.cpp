// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultEncounter_C::OnSpawn (40 bytes)
void BP_TheArtOfTheTrickster_VaultEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultEncounter();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultEncounter_C::OnDespawn (58 bytes)
void BP_TheArtOfTheTrickster_VaultEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultEncounter();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_VaultEncounter_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultEncounter (1318 bytes)
void BP_TheArtOfTheTrickster_VaultEncounter_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultEncounter()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(K2Node_Event_Pawn, CallFunc_GetVariables_OutStruct, true, true);
    auto CallFunc_EqualEqual_IntInt_ReturnValue = idx_284523;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_523;
    UBlueprintSpawnAIStepBase::OnBattleWon();
    this->SignalComplete();
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_523;
    K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
    if (!CallFunc_BooleanOR_ReturnValue) goto L_523;
    auto CallFunc_Add_IntInt_ReturnValue = idx_284524;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_284527);
    auto CallFunc_Percent_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
    auto idx_284524 = CallFunc_Percent_IntInt_ReturnValue;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_523;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_523;
    K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_523;
    auto CallFunc_Subtract_IntInt_ReturnValue = idx_284523;
    auto idx_284523 = CallFunc_Subtract_IntInt_ReturnValue;
L_523:
    return;
}
