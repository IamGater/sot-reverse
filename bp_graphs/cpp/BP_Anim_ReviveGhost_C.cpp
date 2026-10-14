// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Anim_ReviveGhost_C::AnimNotify_OutOfComplete (22 bytes)
void BP_Anim_ReviveGhost_C::AnimNotify_OutOfComplete()
{
    ExecuteUbergraph_BP_Anim_ReviveGhost();
    return;
}

// Recovered Kismet: BP_Anim_ReviveGhost_C::ExecuteUbergraph_BP_Anim_ReviveGhost (183 bytes)
void BP_Anim_ReviveGhost_C::ExecuteUbergraph_BP_Anim_ReviveGhost()
{
    AActor* CallFunc_GetOwningActor_ReturnValue = UAnimInstance::GetOwningActor();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetOwningActor_ReturnValue);
    auto K2Node_MakeStruct_AnimationStateCompleteEvent = K2Node_MakeStruct_AnimationStateCompleteEvent;
    return;
}
