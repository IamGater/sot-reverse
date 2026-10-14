// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_EncounterSpawner_C::OnDespawn (58 bytes)
void BP_TheAshenDragon_EncounterSpawner_C::OnDespawn()
{
    ExecuteUbergraph_BP_TheAshenDragon_EncounterSpawner();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EncounterSpawner_C::OnSpawn (40 bytes)
void BP_TheAshenDragon_EncounterSpawner_C::OnSpawn()
{
    ExecuteUbergraph_BP_TheAshenDragon_EncounterSpawner();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_EncounterSpawner_C::ExecuteUbergraph_BP_TheAshenDragon_EncounterSpawner (1063 bytes)
void BP_TheAshenDragon_EncounterSpawner_C::ExecuteUbergraph_BP_TheAshenDragon_EncounterSpawner()
{
    UBlueprintSpawnAIStepBase::OnBattleWon();
    this->SignalComplete();
L_23:
    auto Target = idx_281360;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = idx_281356;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_424;
    AthenaAICharacter* idx_281353 = Cast<AthenaAICharacter*>(Target);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281353);
    if (!K2Node_DynamicCast_bSuccess) goto L_22D;
    FAIEncounterSpecification idx_281332 = idx_281353->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = idx_281332;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = idx_281332;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue2;
    if (!CallFunc_BooleanOR_ReturnValue) goto L_424;
L_22D:
    AthenaAICharacter* idx_281354 = Cast<AthenaAICharacter*>(idx_281359);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_281354);
    if (!K2Node_DynamicCast_bSuccess2) goto L_23;
    FAIEncounterSpecification idx_281333 = idx_281354->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue3 = idx_281333;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue4 = idx_281333;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_424;
L_424:
    return;
}
