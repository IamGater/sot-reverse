// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_MysteriousStranger_Phased_C::UserConstructionScript (3 bytes)
void BP_Shroudbreaker_MysteriousStranger_Phased_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Shroudbreaker_MysteriousStranger_Phased_C::ReceiveBeginPlay (22 bytes)
void BP_Shroudbreaker_MysteriousStranger_Phased_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Shroudbreaker_MysteriousStranger_Phased();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_MysteriousStranger_Phased_C::ExecuteUbergraph_BP_Shroudbreaker_MysteriousStranger_Phased (245 bytes)
void BP_Shroudbreaker_MysteriousStranger_Phased_C::ExecuteUbergraph_BP_Shroudbreaker_MysteriousStranger_Phased()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_48;
L_48:
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetPlayerController_ReturnValue);
    return;
}
