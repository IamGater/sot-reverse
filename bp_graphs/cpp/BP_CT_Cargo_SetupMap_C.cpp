// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Cargo_SetupMap_C::GetDeliveryJob (1270 bytes)
void BP_CT_Cargo_SetupMap_C::GetDeliveryJob()
{
    this->GetVariables(idx_227630);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_227630);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_445;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = idx_228875->K2_GetActorLocation();
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    FVector CallFunc_K2_GetActorLocation_ReturnValue2 = UniqueObjectNameForCooking_AsActor->K2_GetActorLocation();
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue2, CallFunc_K2_GetActorLocation_ReturnValue);
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    auto idx_228864 = Temp_int_Array_Index_Variable;
    CallFunc_K2_GetActorLocation_ReturnValue = idx_228875->K2_GetActorLocation();
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item2);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    CallFunc_K2_GetActorLocation_ReturnValue2 = UniqueObjectNameForCooking_AsActor->K2_GetActorLocation();
    CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue2, CallFunc_K2_GetActorLocation_ReturnValue);
    auto Distance = CallFunc_Distance_ReturnValue;
L_445:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_Cargo_SetupMap_C::OnBeginCustom (1471 bytes)
void BP_CT_Cargo_SetupMap_C::OnBeginCustom()
{
    UBlueprintStepBase::GetParticipants(idx_228863);
    GetDeliveryJob(CallFunc_Array_Get_Item, idx_228859);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_228859);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UObject* idx_228861 = UniqueObjectNameForCooking_AsActor->GetInterfaceImplementer(NPCInterface);
    ULevelStreaming* idx_228876 = Cast<ULevelStreaming*>(idx_228861);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(idx_228876);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_56B;
    ALevelScriptActor* idx_228862 = idx_228876->GetLevelScriptActor();
    auto Temp_object_Variable = idx_228862;
    TScriptInterface<UNPCInterface> idx_228877 = TScriptInterface<UNPCInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_228877);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_583;
    FGuid idx_228860 = idx_228877->GetId();
    auto Temp_struct_Variable = idx_228860;
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_228859);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    FName idx_228857 = UIslandFunctions::GetActorsCurrentIslandName(UniqueObjectNameForCooking_AsActor);
    UObject* idx_227622 = UKismetSystemLibrary::Conv_AssetToObject(idx_228859);
    AActor* idx_227664 = Cast<AActor*>(idx_227622);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_227664);
    FName idx_228858 = UIslandFunctions::GetActorsCurrentIslandName(idx_227664);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_228859);
    idx_227622 = UKismetSystemLibrary::Conv_AssetToObject(idx_228859);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    idx_227664 = Cast<AActor*>(idx_227622);
    UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_227664);
    auto idx_228859 = idx_228859;
L_56B:
    Temp_object_Variable = idx_228861;
L_583:
    return;
}
