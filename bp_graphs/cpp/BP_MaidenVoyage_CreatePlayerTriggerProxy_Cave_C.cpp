// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave_C::OnBeginCustom (339 bytes)
void BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave_C::OnBeginCustom()
{
    auto CallFunc_GetTransform_ReturnValue = TriggerLocation->this->GetTransform();
    auto idx_282892 = this->SpawnActor(ProxyClass, CallFunc_GetTransform_ReturnValue, false);
    BP_MaidenVoyage_QuestParticipantTriggerVolume_Cave_C* idx_282954 = Cast<BP_MaidenVoyage_QuestParticipantTriggerVolume_Cave_C*>(idx_282892);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282954);
    if (!K2Node_DynamicCast_bSuccess) goto L_F9;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
L_F9:
    return;
}

// Recovered Kismet: BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave_C::OnBegin (40 bytes)
void BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave_C::OnBegin()
{
    ExecuteUbergraph_BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave_C::ExecuteUbergraph_BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave (493 bytes)
void BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave_C::ExecuteUbergraph_BP_MaidenVoyage_CreatePlayerTriggerProxy_Cave()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetTransform_ReturnValue = UniqueObjectNameForCooking_AsActor->this->GetTransform();
    auto idx_282892 = this->SpawnActor(ProxyClass, CallFunc_GetTransform_ReturnValue, false);
    BP_MaidenVoyage_QuestParticipantTriggerVolume_C* idx_282896 = Cast<BP_MaidenVoyage_QuestParticipantTriggerVolume_C*>(idx_282892);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282896);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    return;
}
