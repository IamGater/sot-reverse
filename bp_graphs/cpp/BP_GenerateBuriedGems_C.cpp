// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GenerateBuriedGems_C::GetIslandFromActorRef (389 bytes)
void BP_GenerateBuriedGems_C::GetIslandFromActorRef()
{
    auto CallFunc_GetDefinition_ReturnValue = this->GetDefinition();
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetDefinition_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_146;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<Uidx_283843> idx_283841 = TScriptInterface<Uidx_283843>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_283841);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_15E;
L_146:
    Temp_object_Variable = CallFunc_GetDefinition_ReturnValue;
L_15E:
    return;
}

// Recovered Kismet: BP_GenerateBuriedGems_C::ForIndex (40 bytes)
void BP_GenerateBuriedGems_C::ForIndex()
{
    ExecuteUbergraph_BP_GenerateBuriedGems();
    return;
}

// Recovered Kismet: BP_GenerateBuriedGems_C::ExecuteUbergraph_BP_GenerateBuriedGems (527 bytes)
void BP_GenerateBuriedGems_C::ExecuteUbergraph_BP_GenerateBuriedGems()
{
    auto Index = K2Node_Event_Index;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    UTaleQuestParallelForeachStep::ToContext(idx_283975);
    return;
}
