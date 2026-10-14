// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_CreatePlayerTriggerProxy_ShipwreckMusic_C::OnBeginCustom (359 bytes)
void BP_MaidenVoyage_CreatePlayerTriggerProxy_ShipwreckMusic_C::OnBeginCustom()
{
    auto CallFunc_GetTransform_ReturnValue = Location->this->GetTransform();
    auto idx_282892 = this->SpawnActor(ProxyClass, CallFunc_GetTransform_ReturnValue, false);
    BP_MaidenVoyage_QuestParticipantTriggerVolume_Shipwreck_C* idx_283036 = Cast<BP_MaidenVoyage_QuestParticipantTriggerVolume_Shipwreck_C*>(idx_282892);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283036);
    if (!K2Node_DynamicCast_bSuccess) goto L_10D;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
L_10D:
    return;
}

// Recovered Kismet: BP_MaidenVoyage_CreatePlayerTriggerProxy_ShipwreckMusic_C::OnBegin (40 bytes)
void BP_MaidenVoyage_CreatePlayerTriggerProxy_ShipwreckMusic_C::OnBegin()
{
    idx:283035();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_CreatePlayerTriggerProxy_ShipwreckMusic_C::fn_idx_283035 (377 bytes)
void BP_MaidenVoyage_CreatePlayerTriggerProxy_ShipwreckMusic_C::fn_idx_283035()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
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
