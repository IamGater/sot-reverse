// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275465 (181 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275465()
{
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    BP_OnlineAthenaPlayerController_C* idx_275460 = Cast<BP_OnlineAthenaPlayerController_C*>(CallFunc_GetPlayerController_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275460);
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::CanInteract (177 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::CanInteract()
{
    auto CallFunc_CanInteract_ReturnValue = this->CanInteract(InInteractor);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CutSceneActor);
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_IsValid_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_CanInteract_ReturnValue;
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275464 (474 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275464()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_3E;
L_3E:
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(CutSceneActor, CallFunc_MakeTransform_ReturnValue);
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, CallFunc_MakeTransform_ReturnValue);
    auto CutSceneActor = CallFunc_FinishSpawningActor_ReturnValue;
    idx:275463();
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::UserConstructionScript (3 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275463 (22 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275463()
{
    idx:275459();
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::ReceiveEndPlay (40 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::ReceiveEndPlay()
{
    idx:275459();
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::CleanTutorialCutScene (22 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::CleanTutorialCutScene()
{
    idx:275459();
    return;
}

// Recovered Kismet: BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275459 (383 bytes)
void BP_Tutorial_Tavern_Stranger_NPC_C::fn_idx_275459()
{
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_IsServer_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CutSceneActor);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_IsValid_ReturnValue;
    idx:275465();
    return;
}
