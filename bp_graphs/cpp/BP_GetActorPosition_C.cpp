// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GetActorPosition_C::OnBeginCustom (196 bytes)
void BP_GetActorPosition_C::OnBeginCustom()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(ActorId);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetActorLocation();
    return;
}
