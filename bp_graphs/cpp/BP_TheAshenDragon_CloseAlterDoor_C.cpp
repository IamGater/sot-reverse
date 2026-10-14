// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_CloseAlterDoor_C::OnBeginCustom (559 bytes)
void BP_TheAshenDragon_CloseAlterDoor_C::OnBeginCustom()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_281456);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = UniqueObjectNameForCooking_AsActor->GetComponentInterfaceByClass(MechanismTriggerInterface);
    TScriptInterface<UMechanismTriggerInterface> idx_281381 = TScriptInterface<UMechanismTriggerInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281381);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_203;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = idx_281381->GetTriggerState();
    auto Temp_byte_Variable = CallFunc_GetTriggerState_ReturnValue;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = Temp_byte_Variable;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_1F4;
    TScriptInterface<UMechanismTriggerInterface> idx_281382 = TScriptInterface<UMechanismTriggerInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_281382);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_21C;
    bool CallFunc_DeactivateTrigger_ReturnValue = idx_281382->DeactivateTrigger();
L_1F4:
    this->SignalComplete();
L_203:
L_21C:
    CallFunc_DeactivateTrigger_ReturnValue = false;
    return;
}
