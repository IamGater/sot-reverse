// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Flame_Sarcophagus_C::CanInteract (59 bytes)
void BP_Flame_Sarcophagus_C::CanInteract()
{
    auto CallFunc_Not_PreBool_ReturnValue = HasBeenInteractedWith;
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::Open (45 bytes)
void BP_Flame_Sarcophagus_C::Open()
{
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::TriggerOpenAnimation (45 bytes)
void BP_Flame_Sarcophagus_C::TriggerOpenAnimation()
{
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::GetObjectDisplayName (92 bytes)
void BP_Flame_Sarcophagus_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::GetClosestInteractionPoint (165 bytes)
void BP_Flame_Sarcophagus_C::GetClosestInteractionPoint()
{
    float CallFunc_GetBoxSphereRadius_ReturnValue = Interactable->GetBoxSphereRadius();
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::UserConstructionScript (3 bytes)
void BP_Flame_Sarcophagus_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::ReceiveBeginPlay (22 bytes)
void BP_Flame_Sarcophagus_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Flame_Sarcophagus();
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::Blueprint_OnInteract_Server (40 bytes)
void BP_Flame_Sarcophagus_C::Blueprint_OnInteract_Server()
{
    ExecuteUbergraph_BP_Flame_Sarcophagus();
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::Blueprint_OnInteract_Client (40 bytes)
void BP_Flame_Sarcophagus_C::Blueprint_OnInteract_Client()
{
    ExecuteUbergraph_BP_Flame_Sarcophagus();
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::ExecuteUbergraph_BP_Flame_Sarcophagus (514 bytes)
void BP_Flame_Sarcophagus_C::ExecuteUbergraph_BP_Flame_Sarcophagus()
{
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool HasBeenInteractedWith = true;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    auto K2Node_MakeStruct_SarcophagusOpenedEvent = K2Node_MakeStruct_SarcophagusOpenedEvent;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_115;
L_115:
    Open();
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, Temp_struct_Variable);
    TriggerOpenAnimation();
    return;
}

// Recovered Kismet: BP_Flame_Sarcophagus_C::OnHasBeenInteracted__DelegateSignature (3 bytes)
void BP_Flame_Sarcophagus_C::OnHasBeenInteracted__DelegateSignature()
{
    return;
}
