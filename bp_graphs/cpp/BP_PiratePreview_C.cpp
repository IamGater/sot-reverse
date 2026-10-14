// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PiratePreview_C::UserConstructionScript (3 bytes)
void BP_PiratePreview_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PiratePreview_C::ReceiveBeginPlay (22 bytes)
void BP_PiratePreview_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PiratePreview();
    return;
}

// Recovered Kismet: BP_PiratePreview_C::PreviewBusy_Event (40 bytes)
void BP_PiratePreview_C::PreviewBusy_Event()
{
    ExecuteUbergraph_BP_PiratePreview();
    return;
}

// Recovered Kismet: BP_PiratePreview_C::PreviewReady_Event (40 bytes)
void BP_PiratePreview_C::PreviewReady_Event()
{
    ExecuteUbergraph_BP_PiratePreview();
    return;
}

// Recovered Kismet: BP_PiratePreview_C::ReceiveEndPlay (40 bytes)
void BP_PiratePreview_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PiratePreview();
    return;
}

// Recovered Kismet: BP_PiratePreview_C::ExecuteUbergraph_BP_PiratePreview (304 bytes)
void BP_PiratePreview_C::ExecuteUbergraph_BP_PiratePreview()
{
    auto MainCamera = Camera;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    auto Pirate = PirateMesh;
    if (!K2Node_CustomEvent_Data) goto L_12D;
L_12D:
    return;
}

// Recovered Kismet: BP_PiratePreview_C::PreviewShutdown__DelegateSignature (3 bytes)
void BP_PiratePreview_C::PreviewShutdown__DelegateSignature()
{
    return;
}

// Recovered Kismet: BP_PiratePreview_C::PreviewReady__DelegateSignature (3 bytes)
void BP_PiratePreview_C::PreviewReady__DelegateSignature()
{
    return;
}

// Recovered Kismet: BP_PiratePreview_C::PreviewBusy__DelegateSignature (3 bytes)
void BP_PiratePreview_C::PreviewBusy__DelegateSignature()
{
    return;
}
