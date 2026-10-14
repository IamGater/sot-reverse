// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::BroadcastToProxy (146 bytes)
void BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::BroadcastToProxy()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Tale_Event_Dispatcher_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_8F;
L_8F:
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::OnSpawn (40 bytes)
void BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::OnSpawn()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_GraymarrowEncounter();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::OnDespawn (58 bytes)
void BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::OnDespawn()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_GraymarrowEncounter();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_GraymarrowEncounter (884 bytes)
void BP_RevengeOfTheMorningstar_GraymarrowEncounter_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_GraymarrowEncounter()
{
    BroadcastToProxy();
    UBlueprintSpawnAIStepBase::OnBattleWon();
    auto CallFunc_SpawnDroppedItem_ReturnValue = this->SpawnDroppedItem(Target, BP_ShroudbreakerGem1_C, true, true);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(Target);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    if (!K2Node_DynamicCast_bSuccess) goto L_371;
    K2Node_DynamicCast_AsAthena_AICharacter = Cast<AthenaAICharacter*>(Target);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue = K2Node_DynamicCast_AsAthena_AICharacter->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_GetAIEncounterSpec_ReturnValue;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_371;
    AthenaAICharacter* K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_371;
    K2Node_DynamicCast_AsAthena_AICharacter2 = Cast<AthenaAICharacter*>(K2Node_Event_Pawn2);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_AICharacter2);
    FAIEncounterSpecification CallFunc_GetAIEncounterSpec_ReturnValue2 = K2Node_DynamicCast_AsAthena_AICharacter2->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_GetAIEncounterSpec_ReturnValue2;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_371;
    auto Target = K2Node_Event_Pawn;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_Event_DeathType;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_371;
L_371:
    return;
}
