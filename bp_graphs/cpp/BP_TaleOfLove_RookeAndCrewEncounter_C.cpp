// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TaleOfLove_RookeAndCrewEncounter_C::OnSpawn (40 bytes)
void BP_TaleOfLove_RookeAndCrewEncounter_C::OnSpawn()
{
    idx:285750();
    return;
}

// Recovered Kismet: BP_TaleOfLove_RookeAndCrewEncounter_C::OnDespawn (58 bytes)
void BP_TaleOfLove_RookeAndCrewEncounter_C::OnDespawn()
{
    idx:285750();
    return;
}

// Recovered Kismet: BP_TaleOfLove_RookeAndCrewEncounter_C::OnSetSpawnLocationActor (40 bytes)
void BP_TaleOfLove_RookeAndCrewEncounter_C::OnSetSpawnLocationActor()
{
    idx:285750();
    return;
}

// Recovered Kismet: BP_TaleOfLove_RookeAndCrewEncounter_C::fn_idx_285750 (1249 bytes)
void BP_TaleOfLove_RookeAndCrewEncounter_C::fn_idx_285750()
{
    UBlueprintStepBase::ChangeCompassTargetByActor(CompassDefaultTarget);
    auto CallFunc_Add_IntInt_ReturnValue = NumPawns;
    auto NumPawns = CallFunc_Add_IntInt_ReturnValue;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter3 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter3);
    if (!K2Node_DynamicCast_bSuccess3) goto L_4DE;
    K2Node_DynamicCast_AsAthena_AICharacter3 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter3);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue3 = K2Node_DynamicCast_AsAthena_AICharacter3->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_GetAIEncounterSpec_ReturnValue3;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue3) goto L_4DE;
    UBlueprintStepBase::ChangeCompassTargetByActor(K2Node_Event_Pawn2);
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_3A8;
    auto CallFunc_Subtract_IntInt_ReturnValue = NumPawns;
    NumPawns = CallFunc_Subtract_IntInt_ReturnValue;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_369;
    K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_369;
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(K2Node_Event_Pawn, BP_LoversPendant_Right_C, false, false);
    UBlueprintStepBase::ChangeCompassTargetByActor(CallFunc_SpawnDroppedItem_ReturnValue);
L_369:
    auto CallFunc_EqualEqual_IntInt_ReturnValue = NumPawns;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_4DE;
    this->SignalComplete();
L_3A8:
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_4DE;
    K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_4DE;
    UBlueprintStepBase::ChangeCompassTargetByActor(CompassDefaultTarget);
    auto CompassDefaultTarget = K2Node_Event_Actor;
L_4DE:
    return;
}
