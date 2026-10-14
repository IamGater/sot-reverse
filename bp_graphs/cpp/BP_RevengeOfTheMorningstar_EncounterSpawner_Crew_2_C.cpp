// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2_C::OnDespawn (58 bytes)
void BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2_C::OnDespawn()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2_C::OnSpawn (40 bytes)
void BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2_C::OnSpawn()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2 (1237 bytes)
void BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_EncounterSpawner_Crew_2()
{
    UBlueprintSpawnAIStepBase::OnBattleWon();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = Target->K2_GetActorLocation();
    auto CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
L_D1:
    auto Target = K2Node_Event_Pawn2;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_4D2;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(Target);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_2DB;
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue2;
    if (!CallFunc_BooleanOR_ReturnValue) goto L_4D2;
L_2DB:
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_D1;
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_4D2;
L_4D2:
    return;
}
