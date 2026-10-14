// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Sarcophagus_C::CanInteract (59 bytes)
void BP_Sarcophagus_C::CanInteract()
{
    auto CallFunc_Not_PreBool_ReturnValue = HasBeenInteractedWith;
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::Open (45 bytes)
void BP_Sarcophagus_C::Open()
{
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::TriggerOpenAnimation (45 bytes)
void BP_Sarcophagus_C::TriggerOpenAnimation()
{
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::GetObjectDisplayName (92 bytes)
void BP_Sarcophagus_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::GetClosestInteractionPoint (165 bytes)
void BP_Sarcophagus_C::GetClosestInteractionPoint()
{
    float CallFunc_GetBoxSphereRadius_ReturnValue = Interactable->GetBoxSphereRadius();
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = Interactable->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::UserConstructionScript (3 bytes)
void BP_Sarcophagus_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::ReceiveBeginPlay (22 bytes)
void BP_Sarcophagus_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Sarcophagus();
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::Blueprint_OnInteract_Server (40 bytes)
void BP_Sarcophagus_C::Blueprint_OnInteract_Server()
{
    ExecuteUbergraph_BP_Sarcophagus();
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::Blueprint_OnInteract_Client (40 bytes)
void BP_Sarcophagus_C::Blueprint_OnInteract_Client()
{
    ExecuteUbergraph_BP_Sarcophagus();
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::ExecuteUbergraph_BP_Sarcophagus (277 bytes)
void BP_Sarcophagus_C::ExecuteUbergraph_BP_Sarcophagus()
{
    TriggerOpenAnimation();
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, Temp_struct_Variable);
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool HasBeenInteractedWith = true;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_E2;
L_E2:
    if (!HasBeenInteractedWith) goto L_112;
    Open();
L_112:
    return;
}

// Recovered Kismet: BP_Sarcophagus_C::OnHasBeenInteracted__DelegateSignature (3 bytes)
void BP_Sarcophagus_C::OnHasBeenInteracted__DelegateSignature()
{
    return;
}
