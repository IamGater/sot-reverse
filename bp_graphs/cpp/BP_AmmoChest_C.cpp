// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AmmoChest_C::GetObjectDisplayName (91 bytes)
void BP_AmmoChest_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_AmmoChest_C::GetClosestInteractionPoint (111 bytes)
void BP_AmmoChest_C::GetClosestInteractionPoint()
{
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_AmmoChest_C::UserConstructionScript (3 bytes)
void BP_AmmoChest_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AmmoChest_C::ReceiveBeginPlay (22 bytes)
void BP_AmmoChest_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AmmoChest();
    return;
}

// Recovered Kismet: BP_AmmoChest_C::Blueprint_OnInteract_Client (40 bytes)
void BP_AmmoChest_C::Blueprint_OnInteract_Client()
{
    ExecuteUbergraph_BP_AmmoChest();
    return;
}

// Recovered Kismet: BP_AmmoChest_C::Blueprint_OnInteract_Server (40 bytes)
void BP_AmmoChest_C::Blueprint_OnInteract_Server()
{
    ExecuteUbergraph_BP_AmmoChest();
    return;
}

// Recovered Kismet: BP_AmmoChest_C::ExecuteUbergraph_BP_AmmoChest (1310 bytes)
void BP_AmmoChest_C::ExecuteUbergraph_BP_AmmoChest()
{
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue2 = K2Node_Event_InInteractor->GetComponentInterfaceByClass(WieldableItemSetInterface);
    TScriptInterface<UWieldableItemSetInterface> UniqueObjectNameForCooking_AsWieldable_Item_Set_Interface = TScriptInterface<UWieldableItemSetInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsWieldable_Item_Set_Interface);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_3CC;
    auto CallFunc_GetNumItems_ReturnValue = UniqueObjectNameForCooking_AsWieldable_Item_Set_Interface->GetNumItems();
    auto Temp_int_Variable2 = CallFunc_GetNumItems_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    TScriptInterface<UWieldableItemSetInterface> UniqueObjectNameForCooking_AsWieldable_Item_Set_Interface2 = TScriptInterface<UWieldableItemSetInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsWieldable_Item_Set_Interface2);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_432;
    auto CallFunc_GetItem_ReturnValue = UniqueObjectNameForCooking_AsWieldable_Item_Set_Interface2->GetItem(Temp_int_Variable);
    auto Temp_object_Variable = CallFunc_GetItem_ReturnValue;
    ProjectileWeapon* K2Node_DynamicCast_AsProjectile_Weapon = Cast<ProjectileWeapon*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsProjectile_Weapon);
    TScriptInterface<UWieldedItemInterface> UniqueObjectNameForCooking_AsWielded_Item_Interface = TScriptInterface<UWieldedItemInterface>(K2Node_Event_InInteractor);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsWielded_Item_Interface);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_3B4;
    auto CallFunc_GetWieldedItemIfNotStashed_ReturnValue = UniqueObjectNameForCooking_AsWielded_Item_Interface->GetWieldedItemIfNotStashed();
    auto Temp_interface_Variable = CallFunc_GetWieldedItemIfNotStashed_ReturnValue;
    auto CallFunc_GetActor_ReturnValue = Temp_interface_Variable->GetActor();
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = CallFunc_GetActor_ReturnValue->GetComponentInterfaceByClass(AmmoStoreInterface);
    TScriptInterface<UAmmoStoreInterface> UniqueObjectNameForCooking_AsAmmo_Store_Interface = TScriptInterface<UAmmoStoreInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsAmmo_Store_Interface);
L_3B4:
L_3CC:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
L_432:
    bool CallFunc_WwiseCreateEmitter_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseCreateEmitter(CallFunc_WwiseCreateEmitter_Emitter, pool_ammo_chest);
    auto Emitter = CallFunc_WwiseCreateEmitter_Emitter;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(Emitter, Play_sfx_chest_ammo_pickup);
    return;
}
