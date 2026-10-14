// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaterfallWaterDousingZone_C::DouseWithWater (177 bytes)
void BP_WaterfallWaterDousingZone_C::DouseWithWater()
{
    auto idx_278956 = idx_278956;
    auto idx_278955 = idx_278955;
    idx_278955 = idx_278955;
    return;
}

// Recovered Kismet: BP_WaterfallWaterDousingZone_C::GetChestOfRageComponent (567 bytes)
void BP_WaterfallWaterDousingZone_C::GetChestOfRageComponent()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(Object);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_221;
    auto CallFunc_GetWieldedItem_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetWieldedItem();
    auto CallFunc_GetActor_ReturnValue = CallFunc_GetWieldedItem_ReturnValue->GetActor();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetActor_ReturnValue);
    if (!CallFunc_IsValid_ReturnValue) goto L_221;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetActor_ReturnValue->GetComponentsByClass(ChestOfRageComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_221;
    CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetActor_ReturnValue->GetComponentsByClass(ChestOfRageComponent);
    auto ChestOfRageComponent = CallFunc_Array_Get_Item;
L_221:
    return;
}

// Recovered Kismet: BP_WaterfallWaterDousingZone_C::UserConstructionScript (3 bytes)
void BP_WaterfallWaterDousingZone_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_WaterfallWaterDousingZone_C::ReceiveActorBeginOverlap (40 bytes)
void BP_WaterfallWaterDousingZone_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_WaterfallWaterDousingZone();
    return;
}

// Recovered Kismet: BP_WaterfallWaterDousingZone_C::ReceiveActorEndOverlap (40 bytes)
void BP_WaterfallWaterDousingZone_C::ReceiveActorEndOverlap()
{
    ExecuteUbergraph_BP_WaterfallWaterDousingZone();
    return;
}

// Recovered Kismet: BP_WaterfallWaterDousingZone_C::ExecuteUbergraph_BP_WaterfallWaterDousingZone (301 bytes)
void BP_WaterfallWaterDousingZone_C::ExecuteUbergraph_BP_WaterfallWaterDousingZone()
{
    GetChestOfRageComponent(K2Node_Event_OtherActor, idx_278947);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_278947);
    if (!CallFunc_IsValid_ReturnValue) goto L_12A;
    DouseWithWater(K2Node_Event_OtherActor2);
    GetChestOfRageComponent(K2Node_Event_OtherActor2, idx_278948);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(idx_278948);
    if (!CallFunc_IsValid_ReturnValue2) goto L_12A;
L_12A:
    return;
}
