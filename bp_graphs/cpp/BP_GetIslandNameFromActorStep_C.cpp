// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GetIslandNameFromActorStep_C::OnBeginCustom (205 bytes)
void BP_GetIslandNameFromActorStep_C::OnBeginCustom()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(ActorId);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    FName idx_282410 = UIslandFunctions::GetActorsCurrentIslandName(UniqueObjectNameForCooking_AsActor);
    return;
}
