// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_Setup_PirateGhostsScene_C::OnBegin (40 bytes)
void BP_TheAshenDragon_Setup_PirateGhostsScene_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_PirateGhostsScene();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_PirateGhostsScene_C::Spawned (40 bytes)
void BP_TheAshenDragon_Setup_PirateGhostsScene_C::Spawned()
{
    ExecuteUbergraph_BP_TheAshenDragon_Setup_PirateGhostsScene();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Setup_PirateGhostsScene_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_PirateGhostsScene (927 bytes)
void BP_TheAshenDragon_Setup_PirateGhostsScene_C::ExecuteUbergraph_BP_TheAshenDragon_Setup_PirateGhostsScene()
{
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_281895, K2Node_CustomEvent_Actor);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto LocationActor = UniqueObjectNameForCooking_AsActor;
    auto CallFunc_GetTransform_ReturnValue = LocationActor->this->GetTransform();
    UBlueprintStepBase::SpawnPhasedActorAsync(CallFunc_Array_Get_Item, CallFunc_GetTransform_ReturnValue, LocationActor, UniqueObjectNameForCooking_OutputDelegate);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_2F7;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_2F7:
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    return;
}
