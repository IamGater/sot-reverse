// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_SpawnLoreBooks_C::OnBegin (40 bytes)
void BP_TheAshenDragon_SpawnLoreBooks_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_SpawnLoreBooks();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SpawnLoreBooks_C::OnSpawned (40 bytes)
void BP_TheAshenDragon_SpawnLoreBooks_C::OnSpawned()
{
    ExecuteUbergraph_BP_TheAshenDragon_SpawnLoreBooks();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SpawnLoreBooks_C::ExecuteUbergraph_BP_TheAshenDragon_SpawnLoreBooks (753 bytes)
void BP_TheAshenDragon_SpawnLoreBooks_C::ExecuteUbergraph_BP_TheAshenDragon_SpawnLoreBooks()
{
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
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_298;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_298:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    return;
}
