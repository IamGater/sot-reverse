// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Generate_Briggsy_Items_AdditionalPuzzles_C::SetPuzzle (632 bytes)
void BP_Generate_Briggsy_Items_AdditionalPuzzles_C::SetPuzzle()
{
    GetPuzzle(idx_283851);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_283860, idx_283851);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_223;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_283851);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    idx_283801 = idx_283801;
    UTaleQuestParallelForeachStep::ToContext(idx_283801);
L_223:
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_283860, idx_283851);
    return;
}

// Recovered Kismet: BP_Generate_Briggsy_Items_AdditionalPuzzles_C::GetIslandFromActorRef (389 bytes)
void BP_Generate_Briggsy_Items_AdditionalPuzzles_C::GetIslandFromActorRef()
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

// Recovered Kismet: BP_Generate_Briggsy_Items_AdditionalPuzzles_C::GetPuzzle (743 bytes)
void BP_Generate_Briggsy_Items_AdditionalPuzzles_C::GetPuzzle()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_19A;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    GetIslandFromActorRef(CallFunc_Array_Get_Item, idx_283850);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_283837, idx_283850);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_264;
L_19A:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_264:
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_283862, CallFunc_Array_Get_Item);
    return;
}

// Recovered Kismet: BP_Generate_Briggsy_Items_AdditionalPuzzles_C::ForIndex (40 bytes)
void BP_Generate_Briggsy_Items_AdditionalPuzzles_C::ForIndex()
{
    ExecuteUbergraph_BP_Generate_Briggsy_Items_AdditionalPuzzles();
    return;
}

// Recovered Kismet: BP_Generate_Briggsy_Items_AdditionalPuzzles_C::Start (22 bytes)
void BP_Generate_Briggsy_Items_AdditionalPuzzles_C::Start()
{
    ExecuteUbergraph_BP_Generate_Briggsy_Items_AdditionalPuzzles();
    return;
}

// Recovered Kismet: BP_Generate_Briggsy_Items_AdditionalPuzzles_C::ExecuteUbergraph_BP_Generate_Briggsy_Items_AdditionalPuzzles (475 bytes)
void BP_Generate_Briggsy_Items_AdditionalPuzzles_C::ExecuteUbergraph_BP_Generate_Briggsy_Items_AdditionalPuzzles()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_EqualEqual_IntInt_ReturnValue = K2Node_Event_Index;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_D1;
    SetPuzzle(CallFunc_GetVariables_OutStruct, CallFunc_Array_Get_Item, idx_283853);
L_D1:
    SetPuzzle(CallFunc_GetVariables_OutStruct, CallFunc_Array_Get_Item, idx_283852);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    GetIslandFromActorRef(CallFunc_GetVariables_OutStruct3, idx_283850);
    auto idx_283837 = K2Node_MakeArray_Array;
    return;
}
