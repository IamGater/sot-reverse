// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptCoordinator_Base_C::IsCharacterInsideRadius (220 bytes)
void BP_PromptCoordinator_Base_C::IsCharacterInsideRadius()
{
    APawn* CallFunc_K2_GetPawn_ReturnValue = PlayerController->K2_GetPawn();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetPawn_ReturnValue->K2_GetActorLocation();
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue, Center);
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::UninitializeImplementable (3 bytes)
void BP_PromptCoordinator_Base_C::UninitializeImplementable()
{
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::GetHUDObjectMessageDispatcher (131 bytes)
void BP_PromptCoordinator_Base_C::GetHUDObjectMessageDispatcher()
{
    AHUD* CallFunc_GetHUD_ReturnValue = PlayerController->GetHUD();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetHUD_ReturnValue);
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::Complete (33 bytes)
void BP_PromptCoordinator_Base_C::Complete()
{
    bool IsCompleted = true;
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::UnregisterHandles (3 bytes)
void BP_PromptCoordinator_Base_C::UnregisterHandles()
{
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::PostInitialize (3 bytes)
void BP_PromptCoordinator_Base_C::PostInitialize()
{
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::InitializeAndStart (37 bytes)
void BP_PromptCoordinator_Base_C::InitializeAndStart()
{
    this->Initialize(PlayerController);
    Start();
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::GetCharacterObjectMessageDispatcher (131 bytes)
void BP_PromptCoordinator_Base_C::GetCharacterObjectMessageDispatcher()
{
    APawn* CallFunc_K2_GetPawn_ReturnValue = PlayerController->K2_GetPawn();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_K2_GetPawn_ReturnValue);
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::Evaluate (3 bytes)
void BP_PromptCoordinator_Base_C::Evaluate()
{
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::GetControllerObjectMessageDispatcher (89 bytes)
void BP_PromptCoordinator_Base_C::GetControllerObjectMessageDispatcher()
{
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(PlayerController);
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::Start (22 bytes)
void BP_PromptCoordinator_Base_C::Start()
{
    ExecuteUbergraph_BP_PromptCoordinator_Base();
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::ExecuteUbergraph_BP_PromptCoordinator_Base (51 bytes)
void BP_PromptCoordinator_Base_C::ExecuteUbergraph_BP_PromptCoordinator_Base()
{
    PostInitialize();
    Evaluate();
    return;
}

// Recovered Kismet: BP_PromptCoordinator_Base_C::OnComplete__DelegateSignature (3 bytes)
void BP_PromptCoordinator_Base_C::OnComplete__DelegateSignature()
{
    return;
}
